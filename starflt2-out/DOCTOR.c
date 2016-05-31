// ====== OVERLAY 'DOCTOR' ======

#include"interface.h"

// store offset = 0xf060
// overlay size   = 0x0500

// =================================
// =========== DICTIONARY ==========
// =================================
// 1869:      UNK_0xf076  codep:0x7394 parp:0xf076 size:0x0006 C-string:'UNK_0xf076'
// 1870:      UNK_0xf07e  codep:0x7420 parp:0xf07e size:0x0003 C-string:'UNK_0xf07e'
// 1871:      UNK_0xf083  codep:0x7420 parp:0xf083 size:0x0003 C-string:'UNK_0xf083'
// 1872:      UNK_0xf088  codep:0x7420 parp:0xf088 size:0x0003 C-string:'UNK_0xf088'
// 1873:      UNK_0xf08d  codep:0x7420 parp:0xf08d size:0x0003 C-string:'UNK_0xf08d'
// 1874:      UNK_0xf092  codep:0x224c parp:0xf092 size:0x0012 C-string:'UNK_0xf092'
// 1875:      UNK_0xf0a6  codep:0x224c parp:0xf0a6 size:0x003e C-string:'UNK_0xf0a6'
// 1876:      UNK_0xf0e6  codep:0x224c parp:0xf0e6 size:0x00c8 C-string:'UNK_0xf0e6'
// 1877:      UNK_0xf1b0  codep:0x224c parp:0xf1b0 size:0x001c C-string:'UNK_0xf1b0'
// 1878:      UNK_0xf1ce  codep:0x224c parp:0xf1ce size:0x0049 C-string:'UNK_0xf1ce'
// 1879:      UNK_0xf219  codep:0x224c parp:0xf219 size:0x002d C-string:'UNK_0xf219'
// 1880:      UNK_0xf248  codep:0x224c parp:0xf248 size:0x0019 C-string:'UNK_0xf248'
// 1881:      UNK_0xf263  codep:0x224c parp:0xf263 size:0x0029 C-string:'UNK_0xf263'
// 1882:      UNK_0xf28e  codep:0x224c parp:0xf28e size:0x003e C-string:'UNK_0xf28e'
// 1883:      UNK_0xf2ce  codep:0x224c parp:0xf2ce size:0x0028 C-string:'UNK_0xf2ce'
// 1884:      UNK_0xf2f8  codep:0x224c parp:0xf2f8 size:0x0016 C-string:'UNK_0xf2f8'
// 1885:      UNK_0xf310  codep:0x224c parp:0xf310 size:0x002b C-string:'UNK_0xf310'
// 1886:      UNK_0xf33d  codep:0x224c parp:0xf33d size:0x003c C-string:'UNK_0xf33d'
// 1887:          NPCREW  codep:0x4b3b parp:0xf384 size:0x000c C-string:'NPCREW'
// 1888:      UNK_0xf392  codep:0x224c parp:0xf392 size:0x00ac C-string:'UNK_0xf392'
// 1889:      UNK_0xf440  codep:0x224c parp:0xf440 size:0x00a5 C-string:'UNK_0xf440'
// 1890:      (/EXAMINE)  codep:0x224c parp:0xf4f4 size:0x000c C-string:'_ro__slash_EXAMINE_rc_'
// 1891:        (/TREAT)  codep:0x224c parp:0xf50d size:0x0053 C-string:'_ro__slash_TREAT_rc_'

// =================================
// =========== VARIABLES ===========
// =================================



// 0xf072: db 0x4f 0x00 'O '

// ================================================
// 0xf074: WORD 'UNK_0xf076' codep=0x7394 parp=0xf076
// ================================================
// 0xf076: db 0x10 0x13 0x01 0x14 0xc8 0x6a '     j'

// ================================================
// 0xf07c: WORD 'UNK_0xf07e' codep=0x7420 parp=0xf07e
// ================================================
// 0xf07e: db 0x10 0x0b 0x0f '   '

// ================================================
// 0xf081: WORD 'UNK_0xf083' codep=0x7420 parp=0xf083
// ================================================
// 0xf083: db 0x10 0x1f 0x01 '   '

// ================================================
// 0xf086: WORD 'UNK_0xf088' codep=0x7420 parp=0xf088
// ================================================
// 0xf088: db 0x10 0x20 0x02 '   '

// ================================================
// 0xf08b: WORD 'UNK_0xf08d' codep=0x7420 parp=0xf08d
// ================================================
// 0xf08d: db 0x11 0x11 0x03 '   '

// ================================================
// 0xf090: WORD 'UNK_0xf092' codep=0x224c parp=0xf092
// ================================================

void UNK_0xf092() // UNK_0xf092
{
  Push(0x0040);
  Push(pp_XBLT); // XBLT
  _ex_(); // !
  PRINT("[N Y]", 5); // (.")
}


// ================================================
// 0xf0a4: WORD 'UNK_0xf0a6' codep=0x224c parp=0xf0a6
// ================================================

void UNK_0xf0a6() // UNK_0xf0a6
{
  _gt_R(); // >R
  _star_ASSIGN(); // *ASSIGN
  _gt_C_plus_S(); // >C+S
  Push(0); // 0
  Push(cc__6); // 6
  Push(0); // 0

  do // (DO)
  {
  UNK_0xf08d(); // UNK_0xf08d
  I(); // I
  Push(cc__3); // 3
  Push(Pop() * Pop()); // *
  Push(Pop() + Pop()); // +
  _at__gt_C_plus_S(); // @>C+S
  UNK_0xf088(); // UNK_0xf088
  Push(Read16(Pop())); // @
  J(); // J
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label1071;

  Push(Pop()+1); // 1+
  _gt_R(); // >R
  CI(); // CI
  R_gt_(); // R>
  LEAVE(); // LEAVE

  label1071:
  ICLOSE(); // ICLOSE

  } while(...); // (LOOP) 0xffda
  ICLOSE(); // ICLOSE
  R_gt_(); // R>
  Pop(); // DROP
}


// ================================================
// 0xf0e4: WORD 'UNK_0xf0e6' codep=0x224c parp=0xf0e6
// ================================================

void UNK_0xf0e6() // UNK_0xf0e6
{
  UNK_0xf088(); // UNK_0xf088
  Push(Read16(Pop())); // @
  Push(0x0010);
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label1085;

  PRINT("COMATOSE", 8); // (.")
  Pop(); // DROP
  goto label1093;

  label1085:
  _gt_R(); // >R
  I(); // I
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label1086;

  PRINT("DEAD", 4); // (.")
  goto label1092;

  label1086:
  I(); // I
  Push(1); // 1
  Push(0x0015);
  WITHIN(); // WITHIN
  if (Pop() == 0) goto label1087;

  PRINT("CRITICALLY", 10); // (.")
  goto label1091;

  label1087:
  I(); // I
  Push(0x0015);
  Push(0x0033);
  WITHIN(); // WITHIN
  if (Pop() == 0) goto label1088;

  PRINT("HEAVILY", 7); // (.")
  goto label1091;

  label1088:
  I(); // I
  Push(0x0033);
  Push(0x0051);
  WITHIN(); // WITHIN
  if (Pop() == 0) goto label1089;

  PRINT("MODERATELY", 10); // (.")
  goto label1091;

  label1089:
  I(); // I
  Push(0x0051);
  Push(0x0064);
  WITHIN(); // WITHIN
  if (Pop() == 0) goto label1090;

  PRINT("SLIGHTLY", 8); // (.")
  goto label1091;

  label1090:
  PRINT("NOT", 3); // (.")

  label1091:
  PRINT(" WOUNDED", 8); // (.")

  label1092:
  R_gt_(); // R>
  Pop(); // DROP

  label1093:
}


// ================================================
// 0xf1ae: WORD 'UNK_0xf1b0' codep=0x224c parp=0xf1b0
// ================================================

void UNK_0xf1b0() // UNK_0xf1b0
{
  if (Pop() == 0) goto label1073;

  PRINT("TREAT", 5); // (.")
  goto label1074;

  label1073:
  PRINT("EXAMINE", 7); // (.")

  label1074:
}


// ================================================
// 0xf1cc: WORD 'UNK_0xf1ce' codep=0x224c parp=0xf1ce
// ================================================

void UNK_0xf1ce() // UNK_0xf1ce
{
  _gt_C_plus_S(); // >C+S
  CTINIT(); // CTINIT
  PRINT("SHOULD I STOP TREATING ", 23); // (.")
  UNK_0xf07e(); // UNK_0xf07e
  _do__dot_(); // $.
  ICLOSE(); // ICLOSE
  CTCR(); // CTCR
  PRINT("TO ", 3); // (.")
  UNK_0xf1b0(); // UNK_0xf1b0
  PRINT(" SOMEONE ELSE?", 14); // (.")
  CTCR(); // CTCR
  UNK_0xf092(); // UNK_0xf092
  Y_slash_N(); // Y/N
  CTERASE(); // CTERASE
}


// ================================================
// 0xf217: WORD 'UNK_0xf219' codep=0x224c parp=0xf219
// ================================================

void UNK_0xf219() // UNK_0xf219
{
  UNK_0xf07e(); // UNK_0xf07e
  _do__dot_(); // $.
  PRINT(" DOESN'T NEED MEDICAL", 21); // (.")
  CTCR(); // CTCR
  PRINT("TREATMENT.", 10); // (.")
}


// ================================================
// 0xf246: WORD 'UNK_0xf248' codep=0x224c parp=0xf248
// ================================================

void UNK_0xf248() // UNK_0xf248
{
  UNK_0xf07e(); // UNK_0xf07e
  _do__dot_(); // $.
  PRINT(" IS BEYOND HELP.", 16); // (.")
}


// ================================================
// 0xf261: WORD 'UNK_0xf263' codep=0x224c parp=0xf263
// ================================================

void UNK_0xf263() // UNK_0xf263
{
  PRINT("I AM STARTING TREATMENT ON", 26); // (.")
  CTCR(); // CTCR
  UNK_0xf07e(); // UNK_0xf07e
  _do__dot_(); // $.
  PRINT(".", 1); // (.")
}


// ================================================
// 0xf28c: WORD 'UNK_0xf28e' codep=0x224c parp=0xf28e
// ================================================

void UNK_0xf28e() // UNK_0xf28e
{
  _gt_C_plus_S(); // >C+S
  UNK_0xf083(); // UNK_0xf083
  C_at_(); // C@
  Push(1); // 1
  Push(0x0064);
  WITHIN(); // WITHIN
  if (Pop() == 0) goto label1079;

  UNK_0xf263(); // UNK_0xf263
  UNK_0xf088(); // UNK_0xf088
  Push(Read16(Pop())); // @
  Push(cc__4); // 4
  Push(Pop() | Pop()); // OR
  UNK_0xf088(); // UNK_0xf088
  _ex_(); // !
  goto label1081;

  label1079:
  UNK_0xf083(); // UNK_0xf083
  C_at_(); // C@
  Push(0x0064);
  _eq_(); // =
  if (Pop() == 0) goto label1080;

  UNK_0xf219(); // UNK_0xf219
  goto label1081;

  label1080:
  UNK_0xf248(); // UNK_0xf248

  label1081:
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf2cc: WORD 'UNK_0xf2ce' codep=0x224c parp=0xf2ce
// ================================================

void UNK_0xf2ce() // UNK_0xf2ce
{
  PRINT("I AM CEASING TREATMENT ON", 25); // (.")
  CTCR(); // CTCR
  UNK_0xf07e(); // UNK_0xf07e
  _do__dot_(); // $.
  PRINT(".", 1); // (.")
}


// ================================================
// 0xf2f6: WORD 'UNK_0xf2f8' codep=0x224c parp=0xf2f8
// ================================================

void UNK_0xf2f8() // UNK_0xf2f8
{
  _gt_C_plus_S(); // >C+S
  UNK_0xf2ce(); // UNK_0xf2ce
  UNK_0xf088(); // UNK_0xf088
  Push(Read16(Pop())); // @
  Push(0xfffb);
  Push(Pop() & Pop()); // AND
  UNK_0xf088(); // UNK_0xf088
  _ex_(); // !
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf30e: WORD 'UNK_0xf310' codep=0x224c parp=0xf310
// ================================================

void UNK_0xf310() // UNK_0xf310
{
  PRINT("I AM CONTINUING TREATMENT ON", 28); // (.")
  CTCR(); // CTCR
  UNK_0xf07e(); // UNK_0xf07e
  _do__dot_(); // $.
  PRINT(".", 1); // (.")
}


// ================================================
// 0xf33b: WORD 'UNK_0xf33d' codep=0x224c parp=0xf33d
// ================================================

void UNK_0xf33d() // UNK_0xf33d
{
  _gt_C_plus_S(); // >C+S
  UNK_0xf310(); // UNK_0xf310
  UNK_0xf088(); // UNK_0xf088
  Push(Read16(Pop())); // @
  Push(cc__4); // 4
  Push(Pop() | Pop()); // OR
  UNK_0xf088(); // UNK_0xf088
  _ex_(); // !
  ICLOSE(); // ICLOSE
}

// 0xf351: db 0x4c 0x22 0xb1 0x7a 0x86 0xf0 0x92 0x0c 0xa7 0x3b 0xf5 0x12 0xfa 0x15 0xf4 0xff 0x2e 0x0f 0x90 0x16 0x4c 0x22 0xc9 0x7a 0x86 0xf0 0x92 0x0c 0xa7 0x3b 0xf5 0x12 0xfa 0x15 0xf4 0xff 0x2e 0x0f 0x90 0x16 'L" z     ;      .   L" z     ;      .   '

// ================================================
// 0xf379: WORD 'NPCREW' codep=0x4b3b parp=0xf384
// ================================================
// 0xf384: db 0x02 0x00 0x22 0x0f 0x01 0x00 0x53 0xf3 0xff 0xff 0x67 0xf3 '  "   S   g '

// ================================================
// 0xf390: WORD 'UNK_0xf392' codep=0x224c parp=0xf392
// ================================================

void UNK_0xf392() // UNK_0xf392
{
  CTINIT(); // CTINIT
  CTERASE(); // CTERASE
  PRINT("WHO SHOULD I ", 13); // (.")
  UNK_0xf1b0(); // UNK_0xf1b0
  PRINT("?", 1); // (.")
  _star_PERSON(); // *PERSON
  _gt_C_plus_S(); // >C+S
  IOPEN(); // IOPEN

  label1078:
  UNK_0xf088(); // UNK_0xf088
  C_at_(); // C@
  Push(cc__8); // 8
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1075;

  INEXT(); // INEXT
  goto label1078;

  label1075:
  Push(1); // 1
  Push(0x0015);
  CMESS(); // CMESS
  PRINT("CHOOSE CREWMEMBER ^\", 20); // (.")
  _ex_CRS(); // !CRS
  Push(2); // 2
  Push(0x0012);
  CMESS(); // CMESS
  PRINT("AND PRESS SPACEBAR", 18); // (.")
  _ex_CRS(); // !CRS
  Push(0x000b);
  Push(2); // 2
  CTPOS_dot_(); // CTPOS.
  UNK_0xf07e(); // UNK_0xf07e
  _do__dot_(); // $.

  label1077:
  XYSCAN(); // XYSCAN
  Pop(); // DROP
  NPCREW(); // NPCREW
  if (Pop() == 0) goto label1076;

  Push(0x000b);
  Push(2); // 2
  CTPOS_dot_(); // CTPOS.
  Push(0x000f);
  BLACK(); // BLACK
  POLY_minus_ER(); // POLY-ER
  UNK_0xf07e(); // UNK_0xf07e
  _do__dot_(); // $.

  label1076:
  _ask_TRIG(); // ?TRIG
  if (Pop() == 0) goto label1077;

  CI(); // CI
  CDROP(); // CDROP
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf43e: WORD 'UNK_0xf440' codep=0x224c parp=0xf440
// ================================================

void UNK_0xf440() // UNK_0xf440
{
  CTINIT(); // CTINIT
  CTERASE(); // CTERASE
  _gt_C_plus_S(); // >C+S
  UNK_0xf07e(); // UNK_0xf07e
  _do__dot_(); // $.
  PRINT(" IS ", 4); // (.")
  UNK_0xf083(); // UNK_0xf083
  C_at_(); // C@
  DUP(); // DUP
  UNK_0xf0e6(); // UNK_0xf0e6
  if (Pop() == 0) goto label1094;

  PRINT(",", 1); // (.")
  CTCR(); // CTCR
  PRINT("AND HAS A VITALITY OF ", 22); // (.")
  UNK_0xf083(); // UNK_0xf083
  C_at_(); // C@
  Push(0); // 0
  _dot_R(); // .R
  PRINT(" AND A", 6); // (.")
  CTCR(); // CTCR
  PRINT("DURABILITY OF ", 14); // (.")
  UNK_0xf076(); // UNK_0xf076
  C_at_(); // C@
  Push(0); // 0
  _dot_R(); // .R

  label1094:
  PRINT(".", 1); // (.")
  CTCR(); // CTCR
  UNK_0xf088(); // UNK_0xf088
  Push(Read16(Pop())); // @
  Push(cc__4); // 4
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label1095;

  UNK_0xf07e(); // UNK_0xf07e
  _do__dot_(); // $.
  PRINT(" IS CURRENTLY BEING", 19); // (.")
  CTCR(); // CTCR
  PRINT("TREATED.", 8); // (.")

  label1095:
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xf4e5: WORD '(/EXAMINE)' codep=0x224c parp=0xf4f4
// ================================================

void _ro__slash_EXAMINE_rc_() // (/EXAMINE)
{
  CTERASE(); // CTERASE
  _gt_1FONT(); // >1FONT
  Push(0); // 0
  UNK_0xf392(); // UNK_0xf392
  UNK_0xf440(); // UNK_0xf440
}


// ================================================
// 0xf500: WORD '(/TREAT)' codep=0x224c parp=0xf50d
// ================================================

void _ro__slash_TREAT_rc_() // (/TREAT)
{
  CTERASE(); // CTERASE
  Push(cc__4); // 4
  UNK_0xf0a6(); // UNK_0xf0a6
  if (Pop() == 0) goto label1072;

  _2DUP(); // 2DUP
  Push(1); // 1
  ROT(); // ROT
  ROT(); // ROT
  UNK_0xf1ce(); // UNK_0xf1ce
  if (Pop() == 0) goto label1082;

  UNK_0xf2f8(); // UNK_0xf2f8
  Push(0x09c4);
  MS(); // MS
  Push(1); // 1
  UNK_0xf392(); // UNK_0xf392
  CTERASE(); // CTERASE
  UNK_0xf28e(); // UNK_0xf28e
  goto label1084;

  label1082:
  UNK_0xf33d(); // UNK_0xf33d

  label1084:
  goto label1083;

  label1072:
  Push(1); // 1
  UNK_0xf392(); // UNK_0xf392
  CTERASE(); // CTERASE
  UNK_0xf28e(); // UNK_0xf28e

  label1083:
}

// 0xf549: db 0x44 0x4f 0x43 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'DOC-VOC________________ '
  