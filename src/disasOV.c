#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"global.h"
#include"dictionary.h"
#include"parser.h"
#include"extract.h"
#include"utils.h"
#include"../emul/cpu.h"


#include"disasm/debugger.h"

// ---------------------------------

int DisasmRange(int offset, int size, int ovidx, int minaddr, int maxaddr, FILE *fp)
{
    char buffer[0x80];
    int i;
    if (pline[offset].done) return 0;
    //fprintf(stderr, "disasm start 0x%04x\n", offset);
    while (size > 0)
    {

        //fprintf(stderr, "Disasm %04x\n", offset);
        if ((offset < minaddr) || (offset >= maxaddr)) return 0;
        if (offset > 0xFFFF)
        {
           fprintf(stderr, "Warning: outside of segment\n");
           exit(1);
        }

        if (pline[offset].done)
        {
            return 0;
        }

        buffer[0] = 0x0;
        int currentoffset = offset;
        int newoffset = disasm(0x0, (unsigned)offset, mem, buffer);
        int len = newoffset-offset;
        //fprintf(stderr, "Disasm done %04x\n", offset);
        snprintf(pline[currentoffset].str, STRINGLEN, "// 0x%04x: %s\n", currentoffset, buffer);
        for(i=0; i<len; i++)
        {
            pline[offset].done = 1;
            size--;
            offset++;
        }

        if (Read8(currentoffset) == 0xc3) // ret
        {
            strcat(pline[currentoffset].str, "\n");
            return 0;
        }

        if ((Read8(currentoffset) >= 0x70) && (Read8(currentoffset) <= 0x7f)) // conditional jump
        {
            unsigned short addr = (offset+(short int)((char)Read8(currentoffset+1)));
            DisasmRange(addr&0xffff, 0x10000, ovidx, minaddr, maxaddr, fp);
        }

        if (strcmp(buffer, "jmp    word ptr [bx]") == 0) // jmp
        {
            return 0;
        }

        if (Read8(currentoffset) == 0xe8) // 16 bit call
        {
            //fprintf(stderr, "call from 0x%04x\n", currentoffset);
            unsigned short addr = (offset+(short int)Read16(currentoffset+1));
            DisasmRange(addr&0xffff, 0x10000, ovidx, minaddr, maxaddr, fp);
            if (addr == 0x1649)
            {
                Variables vars = GetEmptyVariables();
                ParsePartFunction(newoffset, 0x0, 0x10000, NULL, ovidx, vars);
                return 0;
            }
        }
    }
    return 0;
}

// ---------------------------------

typedef struct
{
    int storeofs;
    int ovlsize;
    int size;
    unsigned char *buf;
} OVLHeader;

void LoadOverlay(int ovidx, OVLHeader *head)
{
    head->size = 0;
    head->buf = (unsigned char*)Extract(overlays[ovidx].id, &head->size);

    head->storeofs = head->buf[0x4] | (head->buf[0x5]<<8);
    head->ovlsize = (head->buf[0x2] | (head->buf[0x3]<<8))*16;

    memcpy(&mem[head->storeofs], head->buf, head->ovlsize);
}

void LoadOverlayDict(int ovidx)
{
    OVLHeader head;
    LoadOverlay(ovidx, &head);
    int i;
    for(i=0; i<8; i+=2)
    {
        int vocofs = (head.buf[0xa+i] | (head.buf[0xb+i]<<8));
        if (vocofs == 0) continue;
        ParseDict(mem, vocofs - 2, 0, ovidx);
    }
    SortDictionary();
}

void WriteHeader(int ovidx)
{
    int i, j;
    for(i=0; i<ndict; i++)
    {
        if (dict[i].ovidx != ovidx) continue;
        snprintf(pline[dict[i].addr].str, STRINGLEN,
        "\n// ================================================\n"
        "// 0x%04x: WORD '%s' codep=0x%04x parp=0x%04x\n"
        "// ================================================\n",
        dict[i].addr, GetWordName(&dict[i]), dict[i].codep, dict[i].parp);
        if (dict[i].isentry) strcat(pline[dict[i].addr].str, "// entry\n");
        for(j=dict[i].addr; j<dict[i].parp; j++) pline[j].done = 1;
    }
}


void ParseOverlay(int ovidx, FILE *fpc, FILE *fph)
{
    int i, j;
    // first two byte contain offset in file and then two bytes with size of overlay

    OVLHeader head;
    LoadOverlay(ovidx, &head);
    int namep = (head.buf[0x6] | (head.buf[0x7]<<8));
    int minaddr = head.storeofs+0x8+0xa;
    int maxaddr = head.storeofs+head.ovlsize;


    fprintf(fpc, "// ====== OVERLAY '%s' ======\n", overlays[ovidx].name);

    fprintf(fph, "// ====== OVERLAY '%s' ======\n\n", overlays[ovidx].name);
    fprintf(fph, "#ifndef %s_H\n", overlays[ovidx].name);
    fprintf(fph, "#define %s_H\n\n", overlays[ovidx].name);

    fprintf(fpc, "// store offset = 0x%04x\n", head.storeofs);
    fprintf(fpc, "// overlay size   = 0x%04x\n", head.ovlsize);
    fprintf(fpc, "\n#include\"../emul/cpu.h\"\n");

    fprintf(fpc, "#include\"../emul/starflt1.h\"\n\n");

    InitParser();

    SortDictionary();
    // write header file
    for(i=0; i<ndict; i++)
    {
        if (dict[i].ovidx != ovidx) continue;
        if (!dict[i].isentry) continue;
        char *s = GetWordName(&dict[i]);
        fprintf(fph, "void %s(); // %s\n", Forth2CString(s), s);
    }

    fprintf(fph, "\n#endif\n");

    WriteHeader(ovidx);
    ParseForthFunctions(ovidx, minaddr, maxaddr);
    SortDictionary();

    WriteHeader(ovidx);

    for(i=0; i<ndict; i++)
    {
        if (dict[i].ovidx != ovidx) continue;
        //printf("disasm dict entry %i\n", i);
        DisasmRange(dict[i].codep, 0x100000, ovidx, minaddr, maxaddr, fpc);
    }

    ParseForthFunctions(ovidx, minaddr, maxaddr);
    SortDictionary();
    WriteHeader(ovidx);
    WriteDict(mem, fpc, ovidx);
    WriteExtern(fpc, ovidx);
    WriteVariables(fpc, ovidx);
    WriteParsedFunctions(minaddr, maxaddr, fpc);
}

void LoadSTARFLT()
{
    memset(mem, 0, 0x10000);
    FILE *fp = fopen(FILESTAR0, "rb");
    if (fp == NULL)
    {
        fprintf(stderr, "Error: Cannot find file %s\n", FILESTAR0);
        exit(1);
    }
    fread(&mem[0x100], FILESTAR0SIZE, 1, fp);
    fclose(fp);
}

void ParseStarFltDict()
{
    // these addresses are in the "FORTH" dict entry
    ndict = 0;
    ParseDict(mem, DICTLIST1-2, 1, -1);
    ParseDict(mem, DICTLIST2-2, 1, -1);
    ParseDict(mem, DICTLIST3-2, 1, -1);
    ParseDict(mem, DICTLIST4-2, 1, -1);

    SortDictionary();
    dict[ndict-1].size = FILESTAR0SIZE+0x100-dict[ndict-1].parp;
}

void DisasStarflt(FILE *fp)
{
    int i, j;
    const int ovidx = -1;
    int minaddr = 0x100;
    int maxaddr = FILESTAR0SIZE+0x100;
    InitParser();
    WriteHeader(ovidx);
    ParseForthFunctions(ovidx, minaddr, maxaddr);

    SortDictionary();
    dict[ndict-1].size = maxaddr-dict[ndict-1].parp;

    WriteHeader(ovidx);

    for(i=0; i<ndict; i++)
    {
        DisasmRange(dict[i].codep, /*dict[i].size*/0x100000, ovidx, minaddr, maxaddr, fp);
    }

    ParseForthFunctions(ovidx, minaddr, maxaddr);
    SortDictionary();
    WriteHeader(ovidx);
    WriteDict(mem, fp, -1);
    WriteVariables(fp, ovidx);
    WriteParsedFunctions(minaddr, maxaddr, fp);
}

void OutputDirectory()
{
    FILE *fp;
    fp = fopen(OUTDIR"/directory.txt", "w");
    if (fp == NULL)
    {
        fprintf(stderr, "Error: Cannot create file\n");
        exit(1);
    }
    LoadDir(fp);
    fclose(fp);

}

int main()
{
    int i = 0;
    FILE *fpc;
    FILE *fph;

    OutputDirectory();

// ---------------------

    for(i=0; overlays[i].name != NULL; i++)
    {
        overlays[i].startaddress = GetStartAddress(overlays[i].id);
    }

// ---------------------
// Load words with a valid name

    LoadSTARFLT();
    ParseStarFltDict();
    for(i=0; overlays[i].name != NULL; i++)
    {
        LoadOverlayDict(i);
#ifdef STARFLT1
        switch(i)
        {
            case 0x0F:
                GetDictEntry(0xe928, 0x0F); // VITA-OV
                break;
            case 0x30:
                GetDictEntry(0xee65, 0x30); // DAMAGE-OV
                break;
            case 0x2D:
                GetDictEntry(0xf0b4, 0x2D); // STORM-OV
                break;
            case 0x2B:
                GetDictEntry(0xec9a, 0x2B); // PLSET-OV
                break;
        }
#else
        if (i == 0x13) GetDictEntry(0xf277, 0x13); // VITA-OV
#endif
    }

// ---------------------
// ---------------------


    LoadSTARFLT();
    fpc = fopen(OUTDIR"/starflt.c", "w");
    if (fpc == NULL)
    {
        fprintf(stderr, "Error: Cannot create file\n");
        exit(1);
    }
    DisasStarflt(fpc);
    fclose(fpc);

    char filename[512];
    for(i=0; overlays[i].name != NULL; i++)
    {
        //reset memory
        LoadSTARFLT();

        sprintf(filename, OUTDIR"/%s.c", overlays[i].name);
        printf("Generate %s\n", filename);
        fpc = fopen(filename, "w");
        if (fpc == NULL)
        {
            fprintf(stderr, "Error: Cannot create file '%s'\n", filename);
            exit(1);
        }
        sprintf(filename, OUTDIR"/%s.h", overlays[i].name);
        fph = fopen(filename, "w");
        if (fph == NULL)
        {
            fprintf(stderr, "Error: Cannot create file '%s'\n", filename);
            exit(1);
        }
        ParseOverlay(i, fpc, fph);
        fclose(fpc);
        fclose(fph);
    }

    return 0;
}
