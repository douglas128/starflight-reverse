// ====== OVERLAY 'SHIPBUTTONS' ======

#include"interface.h"

// store offset = 0xebe0
// overlay size   = 0x0980

// =================================
// =========== DICTIONARY ==========
// =================================
// 1869:         INST-DA  codep:0x7420 parp:0xa92a size:0xfffffff8 C-string:'INST_minus_DA'
// 1870:      UNK_0xa924  codep:0x534e parp:0xa924 size:0x0009 C-string:'UNK_0xa924'
// 1871:           %NAME  codep:0x7420 parp:0xa937 size:0x0003 C-string:'_pe_NAME'
// 1872:         ORIG-NA  codep:0x7394 parp:0xa946 size:0x0006 C-string:'ORIG_minus_NA'
// 1873:         ELEM-NA  codep:0x7394 parp:0xa958 size:0x0006 C-string:'ELEM_minus_NA'
// 1874:         ELEM-VA  codep:0x7394 parp:0xa96a size:0x0006 C-string:'ELEM_minus_VA'
// 1875:         ART-NAM  codep:0x7394 parp:0xa97c size:0x0649 C-string:'ART_minus_NAM'
// 1876:      UNK_0xafc7  codep:0x224c parp:0xafc7 size:0x3c2d C-string:'UNK_0xafc7'
// 1877:      UNK_0xebf6  codep:0x1d29 parp:0xebf6 size:0x0286 C-string:'UNK_0xebf6'
// 1878:       (GET-AUX)  codep:0x4b3b parp:0xee8a size:0x0076 C-string:'_ro_GET_minus_AUX_rc_'
// 1879:      UNK_0xef02  codep:0x000a parp:0xef02 size:0x000a C-string:'UNK_0xef02'
// 1880:      1.1BTN.XEQ  codep:0x4b3b parp:0xef1b size:0x0100 C-string:'_1_dot_1BTN_dot_XEQ'
// 1881:      >DISEMBARK  codep:0x4b3b parp:0xf02a size:0x00ac C-string:'_gt_DISEMBARK'
// 1882:        1BTN.XEQ  codep:0x4b3b parp:0xf0e3 size:0x0062 C-string:'_1BTN_dot_XEQ'
// 1883:      UNK_0xf147  codep:0x070b parp:0xf147 size:0x0049 C-string:'UNK_0xf147'
// 1884:        2BTN.XEQ  codep:0x4b3b parp:0xf19d size:0x005e C-string:'_2BTN_dot_XEQ'
// 1885:        3BTN.XEQ  codep:0x4b3b parp:0xf208 size:0x0036 C-string:'_3BTN_dot_XEQ'
// 1886:        4BTN.XEQ  codep:0x4b3b parp:0xf24b size:0x0050 C-string:'_4BTN_dot_XEQ'
// 1887:        6BTN.XEQ  codep:0x4b3b parp:0xf2a8 size:0x0098 C-string:'_6BTN_dot_XEQ'
// 1888:      [0BTN.XEQ]  codep:0x4b3b parp:0xf34f size:0x010f C-string:'_bo_0BTN_dot_XEQ_bc_'
// 1889:      UNK_0xf460  codep:0x224c parp:0xf460 size:0x001a C-string:'UNK_0xf460'
// 1890:      UNK_0xf47c  codep:0x224c parp:0xf47c size:0x0084 C-string:'UNK_0xf47c'
// 1891:      UNK_0xf502  codep:0x224c parp:0xf502 size:0x000c C-string:'UNK_0xf502'
// 1892:            >FLT  codep:0x224c parp:0xf517 size:0x0500 C-string:'_gt_FLT'
// 1893:      UNK_0xfa19  codep:0x0000 parp:0xfa19 size:0xfffffb47 C-string:'UNK_0xfa19'

// =================================
// =========== VARIABLES ===========
// =================================
unsigned char UNK_0xebf6[646] = {0x3a, 0x20, 0x20, 0x74, 0x14, 0x45, 0x04, 0x20, 0x74, 0x14, 0x34, 0x0f, 0x20, 0x74, 0x11, 0x11, 0x12, 0x20, 0x74, 0x10, 0x0b, 0x0f, 0x94, 0x73, 0x20, 0x16, 0x01, 0x17, 0x49, 0x6c, 0x4c, 0x22, 0x5d, 0x17, 0x90, 0xc0, 0xd9, 0x84, 0x90, 0x16, 0x4c, 0x22, 0x5d, 0x17, 0x98, 0xbc, 0xd9, 0x84, 0x90, 0x16, 0x4c, 0x22, 0x5d, 0x17, 0xef, 0xc4, 0xd9, 0x84, 0x90, 0x16, 0x4c, 0x22, 0x2e, 0x53, 0x1f, 0x7a, 0xf8, 0xeb, 0x92, 0x0c, 0x41, 0x0e, 0xa7, 0x3b, 0xf5, 0x12, 0xfa, 0x15, 0x0e, 0x00, 0x5d, 0x17, 0x36, 0xc6, 0xd9, 0x84, 0x5d, 0x17, 0xee, 0x02, 0xef, 0x2a, 0x7f, 0x3b, 0xf5, 0x12, 0xfa, 0x15, 0x0e, 0x00, 0x5d, 0x17, 0x4e, 0xc6, 0xd9, 0x84, 0x5d, 0x17, 0xee, 0x02, 0xef, 0x2a, 0xdf, 0x79, 0x90, 0x16, 0x4c, 0x22, 0x8c, 0x9c, 0x30, 0x5e, 0x37, 0x3a, 0x8c, 0x9c, 0x90, 0x16, 0x4c, 0x22, 0x7b, 0x9a, 0x5d, 0x17, 0x0d, 0x00, 0xf7, 0x4f, 0x00, 0x9e, 0x7e, 0x8a, 0xa7, 0x4f, 0x02, 0x50, 0xb4, 0x4f, 0x1c, 0xa2, 0x9d, 0x86, 0x90, 0x16, 0x4c, 0x22, 0x5d, 0x17, 0x64, 0x00, 0x5d, 0x17, 0xf4, 0x01, 0x8f, 0x3b, 0x7f, 0x3b, 0x5d, 0x17, 0x64, 0x00, 0x5d, 0x17, 0xf4, 0x01, 0x7f, 0x3b, 0xad, 0x9c, 0x5d, 0x17, 0x96, 0x00, 0xef, 0x2a, 0x90, 0x16, 0x4c, 0x22, 0xd2, 0x9f, 0x07, 0x3f, 0x23, 0x52, 0x45, 0x50, 0x4f, 0x52, 0x54, 0x20, 0x54, 0x4f, 0x20, 0x4f, 0x50, 0x45, 0x52, 0x41, 0x54, 0x49, 0x4f, 0x4e, 0x53, 0x20, 0x46, 0x4f, 0x52, 0x20, 0x45, 0x56, 0x41, 0x4c, 0x55, 0x41, 0x54, 0x49, 0x4f, 0x4e, 0xf1, 0x9f, 0x5d, 0x17, 0xd0, 0x07, 0xef, 0x2a, 0x5b, 0x5e, 0x57, 0x6d, 0x90, 0x16, 0x4c, 0x22, 0x5d, 0x17, 0x10, 0x00, 0x5d, 0x17, 0x41, 0x00, 0x76, 0xec, 0x5d, 0x17, 0x3a, 0x00, 0x11, 0x56, 0x16, 0x6d, 0x1f, 0x56, 0x65, 0x6d, 0xf6, 0x0f, 0x41, 0x0e, 0x5d, 0x17, 0x0c, 0x00, 0xb3, 0x0f, 0xb5, 0x78, 0x72, 0x0f, 0x5d, 0x17, 0x0c, 0x00, 0xe6, 0x06, 0x5d, 0x17, 0x10, 0x00, 0x5d, 0x17, 0x3b, 0x00, 0x76, 0xec, 0x20, 0x53, 0x1f, 0x7a, 0x7f, 0x3b, 0xb3, 0x0f, 0x02, 0xec, 0x72, 0x0f, 0x2f, 0x7a, 0x07, 0xec, 0xee, 0x9d, 0xa7, 0x75, 0xdf, 0x79, 0x90, 0x16, 0x4c, 0x22, 0x5d, 0x17, 0x10, 0x00, 0x5d, 0x17, 0x41, 0x00, 0x76, 0xec, 0xdc, 0x1b, 0x03, 0x49, 0x53, 0x53, 0x5d, 0x17, 0x10, 0x00, 0x5d, 0x17, 0x3b, 0x00, 0x76, 0xec, 0x2e, 0x53, 0x1f, 0x7a, 0xfd, 0xeb, 0xee, 0x9d, 0xdf, 0x79, 0x90, 0x16, 0x4c, 0x22, 0x41, 0x0e, 0x20, 0x0f, 0x9f, 0x3b, 0x25, 0x40, 0xfa, 0x15, 0x14, 0x00, 0x41, 0x0e, 0x89, 0x12, 0xfa, 0x15, 0x08, 0x00, 0x38, 0xed, 0x60, 0x16, 0x06, 0x00, 0x41, 0x0e, 0xea, 0xec, 0x1a, 0xa7, 0x90, 0x16, 0x4c, 0x22, 0x29, 0x7b, 0x30, 0x5e, 0x16, 0x6d, 0x29, 0x7b, 0x41, 0x0e, 0x3b, 0x5d, 0x16, 0x6d, 0x29, 0x7b, 0x41, 0x0e, 0x3e, 0x5e, 0x16, 0x6d, 0x5a, 0xa3, 0xf4, 0xeb, 0xae, 0x0b, 0x89, 0x12, 0xfa, 0x15, 0x0e, 0x00, 0x60, 0xed, 0x0c, 0x50, 0xf2, 0x0e, 0xe6, 0xa2, 0x60, 0x16, 0x04, 0x00, 0xde, 0x0d, 0x90, 0x16, 0x4c, 0x22, 0x5d, 0x17, 0x37, 0x00, 0x5d, 0x17, 0x6b, 0xb7, 0xd9, 0x84, 0x76, 0x59, 0xae, 0x0b, 0x89, 0x12, 0xf5, 0x12, 0x90, 0x16, 0x4c, 0x22, 0x3e, 0x5e, 0xae, 0x0b, 0x12, 0x7b, 0x3b, 0x5d, 0xae, 0x0b, 0x12, 0x7b, 0x30, 0x5e, 0xae, 0x0b, 0x12, 0x7b, 0x90, 0x16, 0x4c, 0x22, 0xce, 0xed, 0x60, 0xed, 0x7c, 0xa3, 0x30, 0x5e, 0x16, 0x6d, 0x90, 0x16, 0x4c, 0x22, 0x11, 0x6c, 0x1f, 0x7a, 0x3f, 0x7a, 0x5d, 0x17, 0x0b, 0x00, 0x5d, 0x17, 0x0a, 0x00, 0x4c, 0x7e, 0xfa, 0x15, 0x20, 0x00, 0x3f, 0x7a, 0x5d, 0x17, 0x1a, 0x00, 0x5d, 0x17, 0x17, 0x00, 0x4c, 0x7e, 0xfa, 0x15, 0x08, 0x00, 0xc3, 0x51, 0x60, 0x16, 0x04, 0x00, 0xcf, 0x51, 0xdf, 0x79, 0x60, 0x16, 0x04, 0x00, 0xcf, 0x51, 0x3d, 0x0f, 0x0a, 0x7a, 0x90, 0x16, 0x4c, 0x22, 0x3b, 0x5d, 0xae, 0x0b, 0x38, 0xa3, 0x90, 0x16, 0x4c, 0x22, 0x97, 0xa5, 0x32, 0x0e, 0xc8, 0x0d, 0xfa, 0x15, 0x04, 0x00, 0x74, 0xa7, 0x2e, 0xa6, 0xfa, 0x15, 0x10, 0x00, 0x0c, 0x50, 0x2e, 0xee, 0x3b, 0x5d, 0xae, 0x0b, 0x6a, 0xec, 0xa7, 0x4f, 0x2e, 0xee, 0x90, 0x16, 0x4c, 0x22, 0xd0, 0x55, 0xae, 0x0b, 0x07, 0x13, 0xe0, 0x5d, 0xae, 0x0b, 0x3e, 0x13, 0xb8, 0xed, 0x3e, 0x13, 0xf2, 0xed, 0x3e, 0x13, 0x90, 0x16, 0x4c, 0x22, 0xa7, 0x4f, 0x76, 0xa2, 0x90, 0x16}; // UNK_0xebf6



// 0xebf2: db 0x97 0x00 '  '

// ================================================
// 0xebf4: WORD 'UNK_0xebf6' codep=0x1d29 parp=0xebf6
// ================================================
// 0xebf6: db 0x3a 0x20 0x20 0x74 0x14 0x45 0x04 0x20 0x74 0x14 0x34 0x0f 0x20 0x74 0x11 0x11 0x12 0x20 0x74 0x10 0x0b 0x0f 0x94 0x73 0x20 0x16 0x01 0x17 0x49 0x6c 0x4c 0x22 ':  t E  t 4  t    t    s    IlL"'
// 0xec16: pop    bp
// 0xec17: pop    ss
// 0xec18: nop    
// 0xec19: db     C0
// 0xec1a: esc    1,[si+1690]
// 0xec1e: dec    sp
// 0xec1f: and    bl,[di+17]
// 0xec22: cbw    
// 0xec23: mov    sp,84D9
// 0xec26: nop    
// 0xec27: push   ss
// 0xec28: dec    sp
// 0xec29: and    bl,[di+17]
// 0xec2c: out    dx,ax
// 0xec2d: les    bx,cx
// 0xec2f: test   [bx+si+4C16],dl
// 0xec33: and    ch,[1F53]
// 0xec37: jp     EC31
// 0xec39: jmp    EBCD
// 0xec3b: or     al,41
// 0xec3d: push   cs
// 0xec3e: cmpsw
// 0xec3f: cmp    si,bp
// 0xec41: adc    bh,dl
// 0xec43: adc    ax,000E
// 0xec46: pop    bp
// 0xec47: pop    ss
// 0xec48: ss:    
// 0xec49: mov    cl,84
// 0xec4c: pop    bp
// 0xec4d: pop    ss
// 0xec4e: out    dx,al
// 0xec4f: add    ch,bh
// 0xec51: sub    bh,[bx+3B]
// 0xec54: cmc    
// 0xec55: adc    bh,dl
// 0xec57: adc    ax,000E
// 0xec5a: pop    bp
// 0xec5b: pop    ss
// 0xec5c: dec    si
// 0xec5d: mov    cl,84
// 0xec60: pop    bp
// 0xec61: pop    ss
// 0xec62: out    dx,al
// 0xec63: add    ch,bh
// 0xec65: sub    bl,bh
// 0xec67: jns    EBF9
// 0xec69: push   ss
// 0xec6a: dec    sp
// 0xec6b: and    cl,[si+309C]
// 0xec6f: pop    si
// 0xec70: aaa    
// 0xec71: cmp    cl,[si-6F64]
// 0xec75: push   ss
// 0xec76: dec    sp
// 0xec77: and    bh,[bp+di-66]
// 0xec7a: pop    bp
// 0xec7b: pop    ss
// 0xec7c: or     ax,F700
// 0xec7f: dec    di
// 0xec80: add    [bp-7582],bl
// 0xec84: cmpsw
// 0xec85: dec    di
// 0xec86: add    dl,[bx+si-4C]
// 0xec89: dec    di
// 0xec8a: sbb    al,A2
// 0xec8c: popf   
// 0xec8d: xchg   [bx+si+4C16],dl
// 0xec91: and    bl,[di+17]
// 0xec94: db     64
// 0xec95: add    [di+17],bl
// 0xec98: hlt    
// 0xec99: add    [bx+7F3B],cx
// 0xec9d: cmp    bx,[di+17]
// 0xeca0: db     64
// 0xeca1: add    [di+17],bl
// 0xeca4: hlt    
// 0xeca5: add    [bx+3B],di
// 0xeca8: lodsw
// 0xeca9: pushf  
// 0xecaa: pop    bp
// 0xecab: pop    ss
// 0xecac: xchg   ax,si
// 0xecad: add    bh,ch
// 0xecaf: sub    dl,[bx+si+4C16]
// 0xecb3: and    dl,dl
// 0xecb5: lahf   
// 0xecb6: pop    es
// 0xecb7: aas    
// 0xecb8: and    dx,[bp+si+45]
// 0xecbb: push   ax
// 0xecbc: dec    di
// 0xecbd: push   dx
// 0xecbe: push   sp
// 0xecbf: and    [si+4F],dl
// 0xecc2: and    [bx+50],cl
// 0xecc5: inc    bp
// 0xecc6: push   dx
// 0xecc7: inc    cx
// 0xecc8: push   sp
// 0xecc9: dec    cx
// 0xecca: dec    di
// 0xeccb: dec    si
// 0xeccc: push   bx
// 0xeccd: and    [bp+4F],al
// 0xecd0: push   dx
// 0xecd1: and    [di+56],al
// 0xecd4: inc    cx
// 0xecd5: dec    sp
// 0xecd6: push   bp
// 0xecd7: inc    cx
// 0xecd8: push   sp
// 0xecd9: dec    cx
// 0xecda: dec    di
// 0xecdb: dec    si
// 0xecdc: db     F1
// 0xecdd: lahf   
// 0xecde: pop    bp
// 0xecdf: pop    ss
// 0xece0: rol    byte ptr [bx],1
// 0xece2: out    dx,ax
// 0xece3: sub    bl,[bp+di+5E]
// 0xece6: push   di
// 0xece7: db     6D
// 0xece8: nop    
// 0xece9: push   ss
// 0xecea: dec    sp
// 0xeceb: and    bl,[di+17]
// 0xecee: adc    [bx+si],al
// 0xecf0: pop    bp
// 0xecf1: pop    ss
// 0xecf2: inc    cx
// 0xecf3: add    [bp-14],dh
// 0xecf6: pop    bp
// 0xecf7: pop    ss
// 0xecf8: cmp    al,[bx+si]
// 0xecfa: adc    [bp+16],dx
// 0xecfd: db     6D
// 0xecfe: pop    ds
// 0xecff: push   si
// 0xed00: db     65
// 0xed01: db     6D
// 0xed02: ???    byte ptr [bx]
// 0xed04: inc    cx
// 0xed05: push   cs
// 0xed06: pop    bp
// 0xed07: pop    ss
// 0xed08: or     al,00
// 0xed0a: mov    bl,0F
// 0xed0c: mov    ch,78
// 0xed0e: jb     ED1F
// 0xed10: pop    bp
// 0xed11: pop    ss
// 0xed12: or     al,00
// 0xed14: out    06,al
// 0xed16: pop    bp
// 0xed17: pop    ss
// 0xed18: adc    [bx+si],al
// 0xed1a: pop    bp
// 0xed1b: pop    ss
// 0xed1c: cmp    ax,[bx+si]
// 0xed1e: jbe    ED0C
// 0xed20: and    [bp+di+1F],dl
// 0xed23: jp     EDA4
// 0xed25: cmp    si,[bp+di+020F]
// 0xed29: in     al,dx
// 0xed2a: jb     ED3B
// 0xed2c: das    
// 0xed2d: jp     ED36
// 0xed2f: in     al,dx
// 0xed30: out    dx,al
// 0xed31: popf   
// 0xed32: cmpsw
// 0xed33: jnz    ED14
// 0xed35: jns    ECC7
// 0xed37: push   ss
// 0xed38: dec    sp
// 0xed39: and    bl,[di+17]
// 0xed3c: adc    [bx+si],al
// 0xed3e: pop    bp
// 0xed3f: pop    ss
// 0xed40: inc    cx
// 0xed41: add    [bp-14],dh
// 0xed44: esc    4,[bp+di]
// 0xed46: add    cx,[bx+di+53]
// 0xed49: push   bx
// 0xed4a: pop    bp
// 0xed4b: pop    ss
// 0xed4c: adc    [bx+si],al
// 0xed4e: pop    bp
// 0xed4f: pop    ss
// 0xed50: cmp    ax,[bx+si]
// 0xed52: jbe    ED40
// 0xed54: cs:    
// 0xed55: push   bx
// 0xed56: pop    ds
// 0xed57: jp     ED56
// 0xed59: jmp    ED49
// 0xed5b: popf   
// 0xed5c: esc    7,[bx+di-70]
// 0xed5f: push   ss
// 0xed60: dec    sp
// 0xed61: and    al,[bx+di+0E]
// 0xed64: and    [bx],cl
// 0xed66: lahf   
// 0xed67: cmp    sp,[di]
// 0xed69: inc    ax
// 0xed6a: cli    
// 0xed6b: adc    ax,0014
// 0xed6e: inc    cx
// 0xed6f: push   cs
// 0xed70: mov    [bp+si],dx
// 0xed72: cli    
// 0xed73: adc    ax,0008
// 0xed76: cmp    ch,ch
// 0xed78: db     60
// 0xed79: push   ss
// 0xed7a: push   es
// 0xed7b: add    [bx+di+0E],al
// 0xed7e: jmp    90A7:1AEC
// 0xed83: push   ss
// 0xed84: dec    sp
// 0xed85: and    ch,[bx+di]
// 0xed87: jnp    EDB9
// 0xed89: pop    si
// 0xed8a: push   ss
// 0xed8b: db     6D
// 0xed8c: sub    [bp+di+41],di
// 0xed8f: push   cs
// 0xed90: cmp    bx,[di+16]
// 0xed93: db     6D
// 0xed94: sub    [bp+di+41],di
// 0xed97: push   cs
// 0xed98: ds:    
// 0xed99: pop    si
// 0xed9a: push   ss
// 0xed9b: db     6D
// 0xed9c: pop    dx
// 0xed9d: mov    [EBF4],ax
// 0xeda0: scasb
// 0xeda1: or     cx,[bx+di-05EE]
// 0xeda5: adc    ax,000E
// 0xeda8: db     60
// 0xeda9: in     ax,dx
// 0xedaa: or     al,50
// 0xedac: repnz  
// 0xedad: push   cs
// 0xedae: out    A2,al
// 0xedb0: db     60
// 0xedb1: push   ss
// 0xedb2: add    al,00
// 0xedb4: esc    6,[di]
// 0xedb6: nop    
// 0xedb7: push   ss
// 0xedb8: dec    sp
// 0xedb9: and    bl,[di+17]
// 0xedbc: aaa    
// 0xedbd: add    [di+17],bl
// 0xedc0: db     6B
// 0xedc1: mov    bh,D9
// 0xedc3: test   [bp+59],dh
// 0xedc6: scasb
// 0xedc7: or     cx,[bx+di-0AEE]
// 0xedcb: adc    dl,[bx+si+4C16]
// 0xedcf: and    bh,[AE5E]
// 0xedd3: or     dx,[bp+si]
// 0xedd5: jnp    EE12
// 0xedd7: pop    bp
// 0xedd8: scasb
// 0xedd9: or     dx,[bp+si]
// 0xeddb: jnp    EE0D
// 0xeddd: pop    si
// 0xedde: scasb
// 0xeddf: or     dx,[bp+si]
// 0xede1: jnp    ED73
// 0xede3: push   ss
// 0xede4: dec    sp
// 0xede5: and    cl,dh
// 0xede7: in     ax,dx
// 0xede8: db     60
// 0xede9: in     ax,dx
// 0xedea: jl     ED8F
// 0xedec: xor    [bp+16],bl
// 0xedef: db     6D
// 0xedf0: nop    
// 0xedf1: push   ss
// 0xedf2: dec    sp
// 0xedf3: and    dl,[bx+di]
// 0xedf5: db     6C
// 0xedf6: pop    ds
// 0xedf7: jp     EE38
// 0xedf9: jp     EE58
// 0xedfb: pop    ss
// 0xedfc: or     ax,[bx+si]
// 0xedfe: pop    bp
// 0xedff: pop    ss
// 0xee00: or     al,[bx+si]
// 0xee02: dec    sp
// 0xee03: jle    EDFF
// 0xee05: adc    ax,0020
// 0xee08: aas    
// 0xee09: jp     EE68
// 0xee0b: pop    ss
// 0xee0c: sbb    al,[bx+si]
// 0xee0e: pop    bp
// 0xee0f: pop    ss
// 0xee10: pop    ss
// 0xee11: add    [si+7E],cl
// 0xee14: cli    
// 0xee15: adc    ax,0008
// 0xee18: ret    

// 0xee19: db 0x51 0x60 0x16 0x04 0x00 0xcf 0x51 0xdf 0x79 0x60 0x16 0x04 0x00 0xcf 0x51 0x3d 0x0f 0x0a 0x7a 0x90 0x16 0x4c 0x22 0x3b 0x5d 0xae 0x0b 0x38 0xa3 0x90 0x16 0x4c 0x22 0x97 0xa5 0x32 0x0e 0xc8 0x0d 0xfa 0x15 0x04 0x00 0x74 0xa7 0x2e 0xa6 0xfa 0x15 0x10 0x00 0x0c 0x50 0x2e 0xee 0x3b 0x5d 0xae 0x0b 0x6a 0xec 0xa7 0x4f 0x2e 0xee 0x90 0x16 0x4c 0x22 0xd0 0x55 0xae 0x0b 0x07 0x13 0xe0 0x5d 0xae 0x0b 0x3e 0x13 0xb8 0xed 0x3e 0x13 0xf2 0xed 0x3e 0x13 0x90 0x16 0x4c 0x22 0xa7 0x4f 0x76 0xa2 0x90 0x16 'Q`    Q y`    Q=  z  L";]  8   L"  2       t .      P. ;]  j  O.   L" U     ]  >   >   >   L" Ov   '

// ================================================
// 0xee7c: WORD '(GET-AUX)' codep=0x4b3b parp=0xee8a
// ================================================
// 0xee8a: db 0x07 0x00 0x76 0xee 0x01 0x00 0x16 0xec 0x02 0x00 0x16 0xec 0x03 0x00 0x20 0xec 0x04 0x00 0x2a 0xec 0x05 0x00 0x1d 0xcb 0x06 0x00 0x1d 0xcb 0x08 0x00 0x2a 0xec 0x4c 0x22 0xa7 0x4f 0x96 0xa3 0x5d 0x17 0x2e 0xcb 0xd9 0x84 0x0e 0x5f 0xae 0x0b 0x88 0xee 0x3e 0x5e 0xae 0x0b 0x60 0xed 0x0c 0x50 0x3b 0x5d 0xae 0x0b 0xe6 0xa2 0x90 0x16 0x4c 0x22 0x0e 0x5f 0xae 0x0b 0xa7 0x3b 0x5f 0x12 0xfa 0x15 0x04 0x00 0x28 0xec 0x5d 0x17 0x05 0xc5 0xd9 0x84 0x90 0x16 0x4c 0x22 0x8f 0x3b 0x5d 0x17 0x7c 0xb7 0xd9 0x84 0xfa 0x15 0x1a 0x00 0x5d 0x17 0x44 0xd4 0xd9 0x84 0xc1 0x5a 0xae 0x0b 0x78 0x12 0xfa 0x15 '  v               *           * L" O  ] .    _    >^  `  P;]      L" _   ;_     ( ]       L" ;] |       ] D    Z  x   '

// ================================================
// 0xef00: WORD 'UNK_0xef02' codep=0x000a parp=0xef02
// ================================================
// 0xef02: db 0x5d 0x17 0xf2 0xd2 0xd9 0x84 0x07 0x13 0x90 0x16 ']         '

// ================================================
// 0xef0c: WORD '1.1BTN.XEQ' codep=0x4b3b parp=0xef1b
// ================================================
// 0xef1b: db 0x02 0x00 0x09 0x13 0x00 0x00 0xce 0xee 0x01 0x00 0xe6 0xee 0x4c 0x22 0x32 0xec 0x5c 0xee 0xfa 0x15 0x04 0x00 0xb2 0xec 0x07 0x13 0xf2 0x0e 0x07 0x13 0x90 0x16 0x4c 0x22 0xd0 0x55 0xae 0x0b 0xfa 0x15 0x67 0x00 0xd2 0x9f 0x46 0x9c 0xd2 0x5d 0x57 0x6d 0x32 0xec 0x07 0x3f 0x1a 0x53 0x54 0x41 0x4e 0x44 0x42 0x59 0x2e 0x2e 0x2e 0x53 0x43 0x41 0x4e 0x4e 0x49 0x4e 0x47 0x20 0x50 0x4c 0x41 0x4e 0x45 0x54 0x2e 0xf1 0x9f 0x27 0x60 0xae 0x0b 0xb8 0x3b 0x5f 0x12 0xfa 0x15 0x12 0x00 0xd6 0x56 0x57 0x6d 0x5d 0x17 0x74 0xcd 0xd9 0x84 0x5d 0x17 0xf9 0xbc 0xd9 0x84 0x5d 0x17 0x96 0xd1 0xd9 0x84 0x5d 0x17 0xec 0xb6 0xd9 0x84 0xdd 0xa3 0x32 0x0e 0xd2 0x5d 0x65 0x6d 0xaa 0xee 0x5d 0x17 0x8b 0xbd 0xd9 0x84 0x60 0x16 0x42 0x00 0xd2 0x9f 0x07 0x3f 0x1e 0x54 0x48 0x45 0x20 0x53 0x48 0x49 0x50 0x20 0x49 0x53 0x20 0x4e 0x4f 0x20 0x4c 0x4f 0x4e 0x47 0x45 0x52 0x20 0x45 0x51 0x55 0x49 0x50 0x50 0x45 0x44 0xf1 0x9f 0x07 0x3f 0x16 0x57 0x49 0x54 0x48 0x20 0x41 0x20 0x54 0x45 0x52 0x52 0x41 0x49 0x4e 0x20 0x56 0x45 0x48 0x49 0x43 0x4c 0x45 0xf1 0x9f 0xf4 0xeb 0x65 0x6d 0x90 0x16 0x4c 0x22 0xd2 0x9f 0x46 0x9c 0xdc 0x1b 0x1c 0x57 0x45 0x20 0x43 0x41 0x4e 0x27 0x54 0x20 0x44 0x49 0x53 0x45 0x4d 0x42 0x41 0x52 0x4b 0x20 0x49 0x4e 0x20 0x53 0x50 0x41 0x43 0x45 0x21 0xf4 0xeb 0x65 0x6d 0x90 0x16 '            L"2 \               L" U    g   F  ]Wm2  ? STANDBY...SCANNING PLANET.  '`   ;_      VWm] t   ]     ]     ]       2  ]em  ]     ` B    ? THE SHIP IS NO LONGER EQUIPPED   ? WITH A TERRAIN VEHICLE    em  L"  F    WE CAN'T DISEMBARK IN SPACE!  em  '

// ================================================
// 0xf01b: WORD '>DISEMBARK' codep=0x4b3b parp=0xf02a
// ================================================
// 0xf02a: db 0x02 0x00 0xf2 0xef 0x05 0x00 0x29 0xef 0x00 0x00 0x3d 0xef 0x4c 0x22 0x5c 0xee 0x2a 0x5c 0xae 0x0b 0x8f 0x3b 0x5f 0x12 0xf5 0x12 0xfa 0x15 0x08 0x00 0xb2 0xec 0x60 0x16 0x32 0x00 0x5d 0x17 0xe2 0xd2 0xd9 0x84 0x5d 0x17 0xe7 0xc0 0xb9 0x60 0x16 0x6d 0xfa 0x15 0x1a 0x00 0x90 0xec 0x28 0xec 0x5d 0x17 0x86 0xed 0x5d 0x17 0x3a 0xee 0x5d 0x17 0x1b 0xef 0x9f 0x3b 0x5d 0x17 0xe6 0xed 0xc5 0xaf 0x2e 0x0f 0x20 0x0f 0x98 0xa6 0x90 0x16 0x4c 0x22 0x5d 0x17 0xec 0xb6 0xd9 0x84 0xf4 0xeb 0x57 0x6d 0x2a 0x5c 0xae 0x0b 0x28 0xf0 0x90 0x16 0x4c 0x22 0x5d 0x17 0xd2 0xd2 0xd9 0x84 0x90 0x16 0x4c 0x22 0x5d 0x17 0x02 0xd3 0xd9 0x84 0x90 0x16 0x4c 0x22 0x2a 0x5c 0xae 0x0b 0x87 0x3b 0x5f 0x12 0xcf 0x64 0x2f 0x7a 0x5d 0x17 0x16 0x00 0x46 0x75 0xdf 0x79 0xf5 0x12 0xfa 0x15 0x10 0x00 0x71 0x5c 0x57 0x6d 0x5d 0x17 0xf1 0xc8 0xd9 0x84 0x60 0x16 0x04 0x00 0x69 0x26 0x90 0x16 '      )   = L"\ *\   ;_         ` 2 ]     ]    ` m      ( ]   ] : ]    ;]     .       L"]       Wm*\  (   L"]       L"]       L"*\   ;_  d/z]   Fu y      q\Wm]     `   i&  '

// ================================================
// 0xf0d6: WORD '1BTN.XEQ' codep=0x4b3b parp=0xf0e3
// ================================================
// 0xf0e3: db 0x05 0x00 0x09 0x13 0x00 0x00 0x38 0xf0 0x01 0x00 0x82 0xf0 0x02 0x00 0x96 0xf0 0x03 0x00 0xa0 0xf0 0x05 0x00 0xaa 0xf0 0x4c 0x22 0x07 0x3f 0x18 0x4e 0x4f 0x20 0x43 0x49 0x56 0x49 0x4c 0x49 0x5a 0x41 0x54 0x49 0x4f 0x4e 0x20 0x44 0x45 0x54 0x45 0x43 0x54 0x45 0x44 0xf1 0x9f 0x90 0x16 0x4c 0x22 0x53 0x50 0x9d 0x86 0x7e 0x8a 0xaf 0x64 0x2f 0x7a 0x8b 0x75 0x3e 0x13 0xfa 0x15 0x3c 0x00 0x2a 0x5c 0xae 0x0b 0x3d 0x0f 0x46 0x12 0x0c 0xec 0x92 0x0c 0x89 0x12 0x07 0x13 0xf5 0x12 0x32 0x62 0xae '      8                 L" ? NO CIVILIZATION DETECTED    L"SP  ~  d/z u>   < *\  = F           2b '

// ================================================
// 0xf145: WORD 'UNK_0xf147' codep=0x070b parp=0xf147
// ================================================
// 0xf147: db 0x13 0xf5 0x12 0x8f 0x64 0x83 0x4a 0x4a 0x53 0x07 0x40 0x07 0x13 0xf5 0x12 0xfa 0x15 0x0c 0x00 0x5d 0x17 0xda 0xbd 0xd9 0x84 0x60 0x16 0x04 0x00 0xfb 0xf0 0x60 0x16 0x04 0x00 0xfb 0xf0 0xdf 0x79 0x90 0x16 0x4c 0x22 0x90 0xec 0x5d 0x17 0xc5 0xc0 0xd9 0x84 0x90 0x16 0x4c 0x22 0x2e 0x0f 0x5d 0x17 0x8a 0xd3 0xd9 0x84 0x90 0x16 0x4c 0x22 0x90 0xec 0x14 0xec 0x90 0x16 '    d JJS @        ]     `     `      y  L"  ]       L". ]       L"      '

// ================================================
// 0xf190: WORD '2BTN.XEQ' codep=0x4b3b parp=0xf19d
// ================================================
// 0xf19d: db 0x04 0x00 0x09 0x13 0x00 0x00 0x72 0xf1 0x01 0x00 0x7e 0xf1 0x02 0x00 0x1e 0xf1 0x03 0x00 0x8a 0xf1 0x4c 0x22 0x5d 0x17 0xa2 0xca 0xd9 0x84 0xdd 0xa3 0x32 0x0e 0x90 0x16 0x4c 0x22 0x5d 0x17 0xc5 0xd3 0xd9 0x84 0xfa 0x15 0x04 0x00 0xaa 0xee 0x90 0x16 0x4c 0x22 0x5d 0x17 0x26 0xc6 0xd9 0x84 0x90 0x16 0x4c 0x22 0x5d 0x17 0x16 0xc6 0xd9 0x84 0x7f 0x3b 0x7f 0x3b 0x98 0xa6 0x90 0x16 0x4c 0x22 0x71 0x5c 0x57 0x6d 0x89 0x5f 0xae 0x0b 0xd9 0x84 0x71 0x5c 0x65 0x6d 0x90 0x16 '      r   ~         L"]       2   L"]             L"] &     L"]     ;;    L"q\Wm _    q\em  '

// ================================================
// 0xf1fb: WORD '3BTN.XEQ' codep=0x4b3b parp=0xf208
// ================================================
// 0xf208: db 0x05 0x00 0x09 0x13 0x00 0x00 0xb3 0xf1 0x01 0x00 0xc1 0xf1 0x02 0x00 0xd1 0xf1 0x03 0x00 0xdb 0xf1 0x04 0x00 0xeb 0xf1 0x4c 0x22 0x90 0xec 0x1e 0xec 0x90 0x16 0x4c 0x22 0x90 0xec 0x5d 0x17 0xa8 0xbc 0xd9 0x84 0x90 0x16 0x4c 0x22 0x5d 0x17 0x08 0xd4 0xd9 0x84 0x90 0x16 '                        L"      L"  ]       L"]       '

// ================================================
// 0xf23e: WORD '4BTN.XEQ' codep=0x4b3b parp=0xf24b
// ================================================
// 0xf24b: db 0x03 0x00 0x09 0x13 0x00 0x00 0x22 0xf2 0x01 0x00 0x2a 0xf2 0x02 0x00 0x36 0xf2 0x4c 0x22 0x2d 0x6c 0x1f 0x7a 0x3f 0x7a 0x5d 0x17 0x0b '      "   *   6 L"-l z?z]  '
// 0xf266: add    dl,dh
// 0xf268: push   cs
// 0xf269: dec    sp
// 0xf26a: jle    F29E
// 0xf26c: push   cs
// 0xf26d: mov    si,[di+3D]
// 0xf270: db     0F
// 0xf271: or     bh,[bp+si-70]
// 0xf274: push   ss
// 0xf275: dec    sp
// 0xf276: and    bl,[di+17]
// 0xf279: db     60
// 0xf27a: add    [bp+di-0E],bl
// 0xf27d: rcr    byte ptr [bx+175D],cl
// 0xf281: push   bp
// 0xf282: mov    si,84D9
// 0xf285: nop    
// 0xf286: push   ss
// 0xf287: dec    sp
// 0xf288: and    bl,[di+17]
// 0xf28b: aas    
// 0xf28c: rcr    cx,cl
// 0xf28e: test   [bx+si+4C16],dl
// 0xf292: and    bl,[di+17]
// 0xf295: dec    di
// 0xf296: rcr    cx,cl
// 0xf298: test   [bx+si+0016],dl

// ================================================
// 0xf29b: WORD '6BTN.XEQ' codep=0x4b3b parp=0xf2a8
// ================================================
// 0xf2a8: db 0x02 0x00 0x09 0x13 0x00 0x00 0x89 0xf2 0x01 0x00 0x93 0xf2 0x4c 0x22 0x5d 0x17 0x86 0xed 0x5d 0x17 0x3a 0xee 0x5d 0x17 0xe3 0xf0 0x2e 0x0f 0x5d 0x17 0xe6 0xed 0xc5 0xaf 0xf4 0xeb 0x65 0x6d 0x90 0x16 0x4c 0x22 0x5d 0x17 0x86 0xed 0x5d 0x17 0x3a 0xee 0x5d 0x17 0x9d 0xf1 0x3d 0x0f 0x5d 0x17 0xe6 0xed 0xc5 0xaf 0x90 0x16 0x4c 0x22 0x5d 0x17 0x86 0xed 0x5d 0x17 0x3a 0xee 0x5d 0x17 0x08 0xf2 0x7f 0x3b 0x5d 0x17 0xe6 0xed 0xc5 0xaf 0x90 0x16 0x4c 0x22 0x5d 0x17 0x86 0xed 0x5d 0x17 0x3a 0xee 0x5d 0x17 0x4b 0xf2 0x87 0x3b 0x5d 0x17 0xe6 0xed 0xc5 0xaf 0x90 0x16 0x4c 0x22 0x8f 0x3b 0xea 0xec 0x5d 0x17 0xf2 0xbe 0xd9 0x84 0x38 0xed 0x90 0x16 0x4c 0x22 0x5d 0x17 0x86 0xed 0x5d 0x17 0x3a 0xee 0x5d 0x17 0xa8 0xf2 0x97 0x3b 0x5d 0x17 0xe6 0xed 0xc5 0xaf 0x90 0x16 '            L"]   ] : ]   . ]       em  L"]   ] : ]   = ]       L"]   ] : ]   ;]       L"]   ] : ] K  ;]       L" ;  ]     8   L"]   ] : ]    ;]       '

// ================================================
// 0xf340: WORD '[0BTN.XEQ]' codep=0x4b3b parp=0xf34f
// ================================================
// 0xf34f: db 0x05 0x00 0x2a 0xf3 0x00 0x00 0xb6 0xf2 0x01 0x00 0xd2 0xf2 0x02 0x00 0xea 0xf2 0x03 0x00 0x02 0xf3 0x04 0x00 0x1a 0xf3 0x4c 0x22 0x5d 0x17 0x2b 0x00 0x5d 0x17 0x6b 0xb7 0xd9 0x84 0xfa 0x15 0x30 0x00 0x72 0x62 0xae 0x0b 0x5d 0x17 0x63 0x00 0xad 0x11 0x72 0x62 0x16 0x6d 0x20 0x0f 0x5d 0x17 0x64 0x00 0xc4 0x4b 0x72 0x62 0xae 0x0b 0x46 0x12 0xfa 0x15 0x08 0x00 0x4d 0xf3 0x60 0x16 0x06 0x00 0x32 0x0e 0x75 0xf2 0x60 0x16 0x0c 0x00 0x5d 0x17 0x64 0x00 0x72 0x62 0x16 0x6d 0x4d 0xf3 0x90 0x16 0x4c 0x22 0x3d 0x62 0x38 0x0c 0x3e 0x13 0xfa 0x15 0x91 0x00 0x20 0x53 0x1f 0x7a 0x62 0x74 0x5d 0x17 0x11 0x00 0x72 0x0f 0x7f 0x0e 0x63 0x4a 0x72 0x0f 0x2f 0x7a 0x34 0x75 0x89 0x12 0x3d 0x0f 0x0a 0x7a 0xf2 0x5f 0xae 0x0b 0x5d 0x17 0xaa 0x0a 0xb3 0x0f 0x00 0x60 0xae 0x0b 0x3d 0x62 0x38 0x0c 0xec 0x3f 0x16 0x16 0x80 0x51 0x01 0x00 0x14 0x40 0xf5 0x12 0xfa 0x15 0x4d 0x00 0x20 0x0f 0x3d 0x0f 0xc4 '  *                     L"] + ] k     0 rb  ] c   rb m  ] d  Krb  F     M `   2 u `   ] d rb mM   L"=b8 >      S zbt]   r  cJr /z4u  =  z _  ]      `  =b8  ?   Q   @    M   =  '
// 0xf400: dec    bx
// 0xf401: cli    
// 0xf402: adc    ax,0008
// 0xf405: db     67
// 0xf406: repz   
// 0xf407: db     60
// 0xf408: push   ss
// 0xf409: cmp    [bx+si],ax
// 0xf40b: xor    cl,[9FD2]
// 0xf40f: pop    es
// 0xf410: aas    
// 0xf411: sbb    [bp+di+52],al
// 0xf414: inc    bp
// 0xf415: push   di
// 0xf416: dec    bp
// 0xf417: inc    bp
// 0xf418: dec    bp
// 0xf419: inc    dx
// 0xf41a: inc    bp
// 0xf41b: push   dx
// 0xf41c: and    [bp+di+4F],al
// 0xf41f: dec    si
// 0xf420: push   bx
// 0xf421: inc    bx
// 0xf422: dec    cx
// 0xf423: dec    di
// 0xf424: push   bp
// 0xf425: push   bx
// 0xf426: and    [bp+si+55],al
// 0xf429: push   sp
// 0xf42a: db     F1
// 0xf42b: lahf   
// 0xf42c: pop    es
// 0xf42d: aas    
// 0xf42e: adc    [bx+di+53],cx
// 0xf431: and    [bp+4F],cl
// 0xf434: push   sp
// 0xf435: and    [bp+si+45],dl
// 0xf438: push   bx
// 0xf439: push   ax
// 0xf43a: dec    di
// 0xf43b: dec    si
// 0xf43c: inc    sp
// 0xf43d: dec    cx
// 0xf43e: dec    si
// 0xf43f: inc    di
// 0xf440: db     F1
// 0xf441: lahf   
// 0xf442: db     60
// 0xf443: push   ss
// 0xf444: add    al,00
// 0xf446: db     67
// 0xf447: repz   
// 0xf448: db     60
// 0xf449: push   ss
// 0xf44a: add    al,00
// 0xf44c: db     67
// 0xf44d: repz   
// 0xf44e: nop    
// 0xf44f: push   ss
// 0xf450: dec    sp
// 0xf451: and    ch,[bx+di]
// 0xf453: jnp    F47E
// 0xf455: jnp    F480
// 0xf457: jnp    F48B
// 0xf459: push   cs
// 0xf45a: esc    6,[di]
// 0xf45c: nop    
// 0xf45d: push   ss

// ================================================
// 0xf45e: WORD 'UNK_0xf460' codep=0x224c parp=0xf460
// ================================================

void UNK_0xf460() // UNK_0xf460
{
  Push(0xf452);
  Push(0xee3a);
  Push(0xf3b3);
  Push(0); // 0
  Push(0xede6);
  UNK_0xafc7(); // UNK_0xafc7
  Push(pp_UNK_0xebf6); // UNK_0xebf6
  _099(); // 099
}


// ================================================
// 0xf47a: WORD 'UNK_0xf47c' codep=0x224c parp=0xf47c
// ================================================

void UNK_0xf47c() // UNK_0xf47c
{
  CTINIT(); // CTINIT
  CTERASE(); // CTERASE
  UNK_0x3f09(); // UNK_0x3f09
  UNK_0x5319(); // UNK_0x5319
  UNK_0x494a(); // UNK_0x494a
  UNK_0x2052(); // UNK_0x2052
  UNK_0x4f45(); // UNK_0x4f45
  UNK_0x504f(); // UNK_0x504f
  UNK_0x5457(); // UNK_0x5457
  UNK_0x5247(); // UNK_0x5247
  UNK_0x4122(); // UNK_0x4122
  UNK_0x5445(); // UNK_0x5445
  UNK_0x564b(); // UNK_0x564b
  UNK_0x5443(); // UNK_0x5443
  UNK_0x4447(); // UNK_0x4447
  _dot_TTY(); // .TTY
  Push(0xc090);
  MODULE(); // MODULE
  CTINIT(); // CTINIT
  UNK_0x3f09(); // UNK_0x3f09
  UNK_0x5020(); // UNK_0x5020
  UNK_0x4554(); // UNK_0x4554
  UNK_0x4c2f(); // UNK_0x4c2f
  UNK_0x5543(); // UNK_0x5543
  UNK_0x4350(); // UNK_0x4350
  UNK_0x204a(); // UNK_0x204a
  UNK_0x5252(); // UNK_0x5252
  UNK_0x4351(); // UNK_0x4351
  UNK_0x4447(); // UNK_0x4447
  UNK_0x5257(); // UNK_0x5257
  UNK_0x5347(); // UNK_0x5347
  WRITENE(); // WRITENE
  UNK_0x4d51(); // UNK_0x4d51
  UNK_0x4c52(); // UNK_0x4c52
  UNK_0x5447(); // UNK_0x5447
  UNK_0xf147(); // UNK_0xf147
  UNK_0x5da1(); // UNK_0x5da1
  UNK_0xfa19(); // UNK_0xfa19
  UNK_0xef02(); // UNK_0xef02
  UNK_0x072c(); // UNK_0x072c
  UNK_0x1e41(); // UNK_0x1e41
  UNK_0x5455(); // UNK_0x5455
  UNK_0x4e43(); // UNK_0x4e43
  UNK_0x4946(); // UNK_0x4946
  UNK_0x4750(); // UNK_0x4750
  UNK_0x4222(); // UNK_0x4222
  UNK_0x205b(); // UNK_0x205b
  UNK_0x4f56(); // UNK_0x4f56
  UNK_0x4922(); // UNK_0x4922
  UNK_0x4950(); // UNK_0x4950
  UNK_0x4956(); // UNK_0x4956
  UNK_0x5443(); // UNK_0x5443
  UNK_0x2047(); // UNK_0x2047
  UNK_0x414e(); // UNK_0x414e
  UNK_0x4e57(); // UNK_0x4e57
  UNK_0x4845(); // UNK_0x4845
  _dot_TTY(); // .TTY
  Push(0x00fa);
  MS(); // MS
  TTY_minus_SCR(); // TTY-SCR
  TTY_minus_SCR(); // TTY-SCR
  TTY_minus_SCR(); // TTY-SCR
  TTY_minus_SCR(); // TTY-SCR
}


// ================================================
// 0xf500: WORD 'UNK_0xf502' codep=0x224c parp=0xf502
// ================================================

void UNK_0xf502() // UNK_0xf502
{
  Push(0xd296);
  MODULE(); // MODULE
  V_gt_DISPL(); // V>DISPL
  UNK_0xf47c(); // UNK_0xf47c
}


// ================================================
// 0xf50e: WORD '>FLT' codep=0x224c parp=0xf517
// ================================================

void _gt_FLT() // >FLT
{
  TIME(); // TIME
  _2_at_(); // 2@
  _2DUP(); // 2DUP
  Push(pp_NAV_minus_TIM); // NAV-TIM
  D_ex_(); // D!
  Push(pp_ENC_minus_TIM); // ENC-TIM
  D_ex_(); // D!
  Push(pp_STAR_minus_HR); // STAR-HR
  Push(Read16(Pop())); // @
  Push(pp_TRAK_minus_HR); // TRAK-HR
  _ex_(); // !
  GREY2(); // GREY2
  _ro_SHIP_minus_C(); // (SHIP-C
  Push(pp_CONTEXT); // CONTEXT
  Push(Read16(Pop())); // @
  Push(cc__5); // 5
  _eq_(); // =
  if (Pop() == 0) goto label1271;

  UNK_0xf502(); // UNK_0xf502

  label1271:
  Push(pp_UNK_0xebf6); // UNK_0xebf6
  _099(); // 099
  UNK_0xf460(); // UNK_0xf460
}

// 0xf547: db 0x42 0x54 0x4e 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'BTN-VOC__________________ '
  