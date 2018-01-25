#ifndef PARSER_H
#define PARSER_H

#include"dictionary.h"

typedef enum {  NONE=0, DO=1, LOOP=2, GOTO=3, IFGOTO=4, IFEXIT=5, EXIT=6, FUNCEND=7,
                IFNOT=8, IFELSE=9, IFCLOSE=10, IFCLOSE2=11, IFCLOSE3=12, IFCLOSE4=13,
                DOSIMPLE=14, LOOPTEST=15, LOOPENDLESS=16
             } controlflowenum;

typedef struct
{
    char *str;

    // control flow
    int labelid; // != 0 is a label for a goto
    int gotoaddr; // != 0 is a goto to a label. can be conditional or unconditional
    int loopaddr; // for flow = DO it contains the address of the coressponding loop
    controlflowenum flow;

    int done; // this line has been processed
    int isasm;
    int asmaccessesword; // the asm instruction accesses a word
    int istrivialword;
    int iswordheader;
    int word;
    int ovidx;

    int variableidx;
} LineDesc;

extern LineDesc pline[0x10000];

typedef struct
{
    int stack[20]; // variable currently on (call/variable) stack
    int nstack;
} Variables;

Variables GetEmptyVariables();

void InitParser();
void ParsePartFunction(int ofs, int minaddr, int maxaddr, DICTENTRY *d, int currentovidx, Variables vars);
void ParseForthFunctions(int ovidx, int minaddr, int maxaddr);
void ParseAsmFunctions(int ovidx, int minaddr, int maxaddr);
int DisasmRange(int offset, int size, int ovidx, int minaddr, int maxaddr);

#endif
