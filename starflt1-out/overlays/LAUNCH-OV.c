// ====== OVERLAY 'LAUNCH-OV' ======
// store offset = 0xf010
// overlay size   = 0x0550

#include"../../emul/cpu.h"
#include"../../emul/starflt1.h"


// =================================
// =========== DICTIONARY ==========
// =================================
//      UNK_0xf026  codep:0x224c parp:0xf026 size:0x000c C-string:'UNK_0xf026'
//      UNK_0xf034  codep:0x224c parp:0xf034 size:0x002e C-string:'UNK_0xf034'
//      UNK_0xf064  codep:0x224c parp:0xf064 size:0x0014 C-string:'UNK_0xf064'
//      UNK_0xf07a  codep:0x224c parp:0xf07a size:0x0010 C-string:'UNK_0xf07a'
//      UNK_0xf08c  codep:0x224c parp:0xf08c size:0x000c C-string:'UNK_0xf08c'
//       COUNTDOWN  codep:0x224c parp:0xf09a size:0x0032 C-string:'COUNTDOWN'
//          LAUNCH  codep:0x224c parp:0xf0ce size:0x0042 C-string:'LAUNCH'
//      UNK_0xf112  codep:0x224c parp:0xf112 size:0x003e C-string:'UNK_0xf112'
//      UNK_0xf152  codep:0x224c parp:0xf152 size:0x000e C-string:'UNK_0xf152'
//      UNK_0xf162  codep:0x224c parp:0xf162 size:0x005c C-string:'UNK_0xf162'
//      UNK_0xf1c0  codep:0x224c parp:0xf1c0 size:0x001c C-string:'UNK_0xf1c0'
//      UNK_0xf1de  codep:0x224c parp:0xf1de size:0x001c C-string:'UNK_0xf1de'
//      UNK_0xf1fc  codep:0x1d29 parp:0xf1fc size:0x0032 C-string:'UNK_0xf1fc'
//        .AIRLOCK  codep:0x224c parp:0xf23b size:0x00a5 C-string:'_dot_AIRLOCK'
//      UNK_0xf2e2  codep:0x224c parp:0xf2e2 size:0x000a C-string:'UNK_0xf2e2'
//      UNK_0xf2ee  codep:0x224c parp:0xf2ee size:0x000c C-string:'UNK_0xf2ee'
//      UNK_0xf2fc  codep:0x224c parp:0xf2fc size:0x0008 C-string:'UNK_0xf2fc'
//      UNK_0xf306  codep:0x224c parp:0xf306 size:0x0064 C-string:'UNK_0xf306'
//       PORTLEAVE  codep:0x224c parp:0xf36c size:0x0025 C-string:'PORTLEAVE'
//      UNK_0xf393  codep:0x224c parp:0xf393 size:0x005c C-string:'UNK_0xf393'
//         &LAUNCH  codep:0x224c parp:0xf3fb size:0x004e C-string:'_and_LAUNCH'
//         &RETURN  codep:0x224c parp:0xf455 size:0x0000 C-string:'_and_RETURN'

// =================================
// ============= EXTERN ============
// =================================
extern const unsigned short int cc__4; // 4
extern const unsigned short int cc__5; // 5
extern const unsigned short int cc__6; // 6
extern const unsigned short int cc__dash_1; // -1
extern const unsigned short int pp_HBUF_dash_SEG; // HBUF-SEG
extern const unsigned short int pp_DBUF_dash_SEG; // DBUF-SEG
extern const unsigned short int pp_YTABL; // YTABL
extern const unsigned short int pp_XBLT; // XBLT
extern const unsigned short int pp_LBLT; // LBLT
extern const unsigned short int pp_WBLT; // WBLT
extern const unsigned short int pp_ABLT; // ABLT
extern const unsigned short int pp_BLTSEG; // BLTSEG
extern const unsigned short int pp__ask_G_dash_AWARE; // ?G-AWARE
extern const unsigned short int pp_GWF; // GWF
extern const unsigned short int pp_CONTEXT_dash_ID_n_; // CONTEXT-ID#
extern const unsigned short int pp__ask_EGA; // ?EGA
extern const unsigned short int pp_STARDATE; // STARDATE
extern const unsigned short int pp__ask_SECURE; // ?SECURE
extern const unsigned short int pp_STIME; // STIME
void D_st_(); // D<
void _dot_(); // .
void MS(); // MS
void ROLL(); // ROLL
void _2OVER(); // 2OVER
void D_dash_(); // D-
void RRND(); // RRND
void _ex__3(); // !_3
void D_ex_(); // D!
void ON_3(); // ON_3
void OFF(); // OFF
void _ex_COLOR(); // !COLOR
void _gt_MAINVIEW(); // >MAINVIEW
void _gt_DISPLAY(); // >DISPLAY
void DARK(); // DARK
void BLT(); // BLT
void _gt_1FONT(); // >1FONT
void _gt_2FONT(); // >2FONT
void POS_dot_(); // POS.
void CTERASE(); // CTERASE
void _gt_SND(); // >SND
void BEEPON(); // BEEPON
void CTINIT(); // CTINIT
void _dot_TTY(); // .TTY
void _ask_MRC(); // ?MRC
void _2_at_(); // 2@
void _2DUP(); // 2DUP
void _2SWAP(); // 2SWAP
void OVER(); // OVER
void ROT(); // ROT
void SWAP(); // SWAP
void _dash_(); // -
void TONE(); // TONE
void BEEPOFF(); // BEEPOFF
void TIME(); // TIME
void LCMOVE(); // LCMOVE
void _at_DS(); // @DS
void BFILL(); // BFILL
void LPLOT(); // LPLOT
void LLINE(); // LLINE
void LCOPYBLK(); // LCOPYBLK
void V_gt_DISPLAY(); // V>DISPLAY


// =================================
// =========== VARIABLES ===========
// =================================
const unsigned short int pp_UNK_0xf1fc = 0xf1fc; // UNK_0xf1fc size: 50
// {0xff, 0x0f, 0xff, 0x01, 0x3f, 0xf8, 0xc7, 0xff, 0xfe, 0xff, 0xf3, 0xfc, 0x8f, 0xff, 0xf0, 0x1f, 0xff, 0xf0, 0x0f, 0x0f, 0xf0, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x00, 0x0f, 0xf0, 0xf0, 0x0f, 0xff, 0xf8, 0x0f, 0xff, 0xf1, 0x3f, 0xcf, 0xff, 0x7f, 0xff, 0xe3, 0x1f, 0xfc, 0x80, 0xff, 0xf0, 0xff}




// 0xf022: db 0x50 0x00 'P '

// ================================================
// 0xf024: WORD 'UNK_0xf026' codep=0x224c parp=0xf026
// ================================================

void UNK_0xf026() // UNK_0xf026
{
  MODULE(); // MODULE
  TIME(); // TIME
  _2_at_(); // 2@
  _2SWAP(); // 2SWAP
  D_dash_(); // D-
}


// ================================================
// 0xf032: WORD 'UNK_0xf034' codep=0x224c parp=0xf034
// ================================================

void UNK_0xf034() // UNK_0xf034
{
  signed short int i, imax;
  Push(0x0010);
  Push(0x000b);

  i = Pop();
  imax = Pop();
  do // (DO)
  {
  Push(i); // I
  Push(Pop()<<4); // 16*
  Push(i); // I
  Push(Pop() + Pop()); // +
  _ex_COLOR(); // !COLOR
  Push(pp_XBLT); // XBLT
  Push(Read16(Pop())); // @
  OVER(); // OVER
  _dot_(); // .
  Push(pp_XBLT); // XBLT
  _ex__3(); // !_3
  Push(0x0027);
  MS(); // MS
  i++;
  } while(i<imax); // (LOOP) 0xffe2

  Pop(); // DROP
}


// ================================================
// 0xf062: WORD 'UNK_0xf064' codep=0x224c parp=0xf064
// ================================================

void UNK_0xf064() // UNK_0xf064
{
  Push(0x0026);
  Push(0x0087);
  POS_dot_(); // POS.
  _gt_2FONT(); // >2FONT
  BEEPON(); // BEEPON
  UNK_0xf034(); // UNK_0xf034
  BEEPOFF(); // BEEPOFF
}


// ================================================
// 0xf078: WORD 'UNK_0xf07a' codep=0x224c parp=0xf07a
// ================================================

void UNK_0xf07a() // UNK_0xf07a
{
  Push(0x0027);
  Push(0x0086);
  POS_dot_(); // POS.
  _gt_1FONT(); // >1FONT
  UNK_0xf034(); // UNK_0xf034
}


// ================================================
// 0xf08a: WORD 'UNK_0xf08c' codep=0x224c parp=0xf08c
// ================================================

void UNK_0xf08c() // UNK_0xf08c
{
  Push(0x0028);
  Push(0x0084);
  LPLOT(); // LPLOT
}


// ================================================
// 0xf098: WORD 'COUNTDOWN' codep=0x224c parp=0xf09a
// ================================================

void COUNTDOWN() // COUNTDOWN
{
  signed short int i, imax;
  Push(0x2710);
  TONE(); // TONE
  Push(1); // 1
  Push(Read16(cc__5)); // 5

  i = Pop();
  imax = Pop();
  do // (DO)
  {
  V_gt_DISPLAY(); // V>DISPLAY
  Push(i); // I
  UNK_0xf064(); // UNK_0xf064
  V_gt_DISPLAY(); // V>DISPLAY
  Push(i); // I
  UNK_0xf07a(); // UNK_0xf07a
  V_gt_DISPLAY(); // V>DISPLAY
  UNK_0xf08c(); // UNK_0xf08c
  Push(0x0064);
  MS(); // MS
  V_gt_DISPLAY(); // V>DISPLAY
  Push(0x0190);
  MS(); // MS
  Push(Read16(cc__dash_1)); // -1
  int step = Pop();
  i += step;
  if (((step>=0) && (i>=imax)) || ((step<0) && (i<=imax))) break;
  } while(1); // (+LOOP) 0xffde

}


// ================================================
// 0xf0cc: WORD 'LAUNCH' codep=0x224c parp=0xf0ce
// ================================================

void LAUNCH() // LAUNCH
{
  CTINIT(); // CTINIT
  CTERASE(); // CTERASE
  PRINT("COMMENCING LAUNCH SEQUENCE...", 29); // (.")
  COUNTDOWN(); // COUNTDOWN
  CTERASE(); // CTERASE
  Push(pp_CONTEXT_dash_ID_n_); // CONTEXT-ID#
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) return;
  Push(1); // 1
  Push(pp_CONTEXT_dash_ID_n_); // CONTEXT-ID#
  _ex__3(); // !_3
  Push(pp__ask_G_dash_AWARE); // ?G-AWARE
  ON_3(); // ON_3
  Push(pp_GWF); // GWF
  OFF(); // OFF
}


// ================================================
// 0xf110: WORD 'UNK_0xf112' codep=0x224c parp=0xf112
// ================================================

void UNK_0xf112() // UNK_0xf112
{
  _2DUP(); // 2DUP
  Push(pp_STIME); // STIME
  D_ex_(); // D!
  Push(0x03e8); Push(0x0000);
  D_st_(); // D<
  if (Pop() == 0) return;
  Push(pp__ask_SECURE); // ?SECURE
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) return;
  Push(pp_STARDATE); // STARDATE
  Push(Read16(Pop())); // @
  Push(Read16(cc__4)); // 4
  Push(Pop() + Pop()); // +
  Push(pp__ask_SECURE); // ?SECURE
  _ex__3(); // !_3
  Push(0x01f4);
  Push(0x2710);
  Push(0x01f4);
  Push(0x03e8);
  Push(2); // 2
  _gt_SND(); // >SND
}


// ================================================
// 0xf150: WORD 'UNK_0xf152' codep=0x224c parp=0xf152
// ================================================

void UNK_0xf152() // UNK_0xf152
{
  Push(Read16(cc__4)); // 4
  SWAP(); // SWAP
  Push(0x004b);
  OVER(); // OVER
  LLINE(); // LLINE
}


// ================================================
// 0xf160: WORD 'UNK_0xf162' codep=0x224c parp=0xf162
// ================================================

void UNK_0xf162() // UNK_0xf162
{
  SetColor("BLACK");
  _ex_COLOR(); // !COLOR
  Push(Read16(regsp)); // DUP
  UNK_0xf152(); // UNK_0xf152
  Push(0); // 0
  Push(0x000a);
  RRND(); // RRND
  if (Pop() == 0) Push(1); else Push(0); // 0=
  OVER(); // OVER
  Push(0x0084);
  Push((Pop()==Pop())?1:0); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label1;
  Push(1); // 1
  Push(0x0010);
  RRND(); // RRND
  Push(Read16(regsp)); // DUP
  Push(Pop()<<4); // 16*
  Push(Pop() + Pop()); // +
  _ex_COLOR(); // !COLOR
  Push(Read16(cc__4)); // 4
  Push(0x004c);
  RRND(); // RRND
  SWAP(); // SWAP
  _2DUP(); // 2DUP
  LPLOT(); // LPLOT
  Push(0x0048);
  _dash_(); // -
  SWAP(); // SWAP
  Push(Read16(cc__4)); // 4
  _dash_(); // -
  SWAP(); // SWAP
  _gt_MAINVIEW(); // >MAINVIEW
  LPLOT(); // LPLOT
  _gt_DISPLAY(); // >DISPLAY
  return;

  label1:
  Pop(); // DROP
}


// ================================================
// 0xf1be: WORD 'UNK_0xf1c0' codep=0x224c parp=0xf1c0
// ================================================

void UNK_0xf1c0() // UNK_0xf1c0
{
  unsigned short int a;
  a = Pop(); // >R
  Push(Read16(cc__4)); // 4
  Push(0x00be);
  Push(0x004c);
  Push(a); // I
  Push(Read16(cc__4)); // 4
  Push(0x00bf);
  LCOPYBLK(); // LCOPYBLK
  Push(a); // R>
  UNK_0xf162(); // UNK_0xf162
}


// ================================================
// 0xf1dc: WORD 'UNK_0xf1de' codep=0x224c parp=0xf1de
// ================================================

void UNK_0xf1de() // UNK_0xf1de
{
  unsigned short int a;
  a = Pop(); // >R
  Push(Read16(cc__4)); // 4
  Push(a); // I
  Push(0x004c);
  Push(0x0049);
  Push(Read16(cc__4)); // 4
  Push(a); // I
  Push(Pop()-1); // 1-
  LCOPYBLK(); // LCOPYBLK
  Push(a); // R>
  UNK_0xf162(); // UNK_0xf162
}


// ================================================
// 0xf1fa: WORD 'UNK_0xf1fc' codep=0x1d29 parp=0xf1fc
// ================================================
// 0xf1fc: db 0xff 0x0f 0xff 0x01 0x3f 0xf8 0xc7 0xff 0xfe 0xff 0xf3 0xfc 0x8f 0xff 0xf0 0x1f 0xff 0xf0 0x0f 0x0f 0xf0 0x00 0x0f 0x00 0x00 0x00 0x00 0xf0 0x00 0x0f 0xf0 0xf0 0x0f 0xff 0xf8 0x0f 0xff 0xf1 0x3f 0xcf 0xff 0x7f 0xff 0xe3 0x1f 0xfc 0x80 0xff 0xf0 0xff '    ?                                 ?          '

// ================================================
// 0xf22e: WORD '.AIRLOCK' codep=0x224c parp=0xf23b
// ================================================
// entry

void _dot_AIRLOCK() // .AIRLOCK
{
  _gt_MAINVIEW(); // >MAINVIEW
  SetColor("GREY2");
  _ex_COLOR(); // !COLOR
  BFILL(); // BFILL
  SetColor("BLACK");
  SetColor("BLACK");
  SetColor("YELLOW");
  _ask_MRC(); // ?MRC
  _ex_COLOR(); // !COLOR
  _gt_2FONT(); // >2FONT
  Push(0x0011);
  Push(0x006d);
  POS_dot_(); // POS.
  PRINT("CAUTION", 7); // (.")
  _gt_1FONT(); // >1FONT
  Push(Read16(cc__5)); // 5
  Push(0x005d);
  POS_dot_(); // POS.
  PRINT("PRESSURIZED AREA", 16); // (.")
  Push(Read16(cc__5)); // 5
  Push(0x001e);
  POS_dot_(); // POS.
  PRINT("STANDARD AIRLOCK", 16); // (.")
  Push(Read16(cc__5)); // 5
  Push(0x0014);
  POS_dot_(); // POS.
  PRINT("PROCEDURES APPLY", 16); // (.")
  _at_DS(); // @DS
  Push(pp_BLTSEG); // BLTSEG
  _ex__3(); // !_3
  Push(0x001a);
  Push(0x0045);
  POS_dot_(); // POS.
  Push(0x0014);
  Push(Read16(regsp)); // DUP
  Push(pp_WBLT); // WBLT
  _ex__3(); // !_3
  Push(pp_LBLT); // LBLT
  _ex__3(); // !_3
  Push(pp_UNK_0xf1fc); // UNK_0xf1fc
  Push(pp_ABLT); // ABLT
  _ex__3(); // !_3
  BLT(); // BLT
  _gt_DISPLAY(); // >DISPLAY
}


// ================================================
// 0xf2e0: WORD 'UNK_0xf2e2' codep=0x224c parp=0xf2e2
// ================================================

void UNK_0xf2e2() // UNK_0xf2e2
{
  TIME(); // TIME
  _2_at_(); // 2@
  Push(0xd125); // probable 'SECURE'
}


// ================================================
// 0xf2ec: WORD 'UNK_0xf2ee' codep=0x224c parp=0xf2ee
// ================================================

void UNK_0xf2ee() // UNK_0xf2ee
{
  Push(Pop()*2); // 2*
  Push(pp_YTABL); // YTABL
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  Push(Read16(Pop())); // @
}


// ================================================
// 0xf2fa: WORD 'UNK_0xf2fc' codep=0x224c parp=0xf2fc
// ================================================

void UNK_0xf2fc() // UNK_0xf2fc
{
  _gt_MAINVIEW(); // >MAINVIEW
  UNK_0xf2ee(); // UNK_0xf2ee
  _gt_DISPLAY(); // >DISPLAY
}


// ================================================
// 0xf304: WORD 'UNK_0xf306' codep=0x224c parp=0xf306
// ================================================

void UNK_0xf306() // UNK_0xf306
{
  unsigned short int a;
  a = Pop(); // >R
  if (Pop() == 0) goto label1;
  Push(0x00bf);
  UNK_0xf2ee(); // UNK_0xf2ee
  Push(Read16(cc__4)); // 4
  Push(0x00bf);
  Push(0x004c);
  Push(0x00bf);
  Push(a); // I
  _dash_(); // -
  Push(Read16(cc__4)); // 4
  Push(0x00be);
  goto label2;

  label1:
  Push(0x0048);
  UNK_0xf2ee(); // UNK_0xf2ee
  Push(Read16(cc__4)); // 4
  Push(0x0048);
  Push(a); // I
  Push(Pop() + Pop()); // +
  Push(0x004c);
  Push(0x0048);
  _2OVER(); // 2OVER
  Push(Pop()+1); // 1+

  label2:
  LCOPYBLK(); // LCOPYBLK
  Push(a); // R>
  Pop(); // DROP
  Push(pp_HBUF_dash_SEG); // HBUF-SEG
  Push(Read16(Pop())); // @
  ROT(); // ROT
  UNK_0xf2fc(); // UNK_0xf2fc
  Push(pp_DBUF_dash_SEG); // DBUF-SEG
  Push(Read16(Pop())); // @
  Push(Read16(cc__4)); // 4
  ROLL(); // ROLL
  Push(Pop()+2); // 2+
  Push(0x0024);
  LCMOVE(); // LCMOVE
}


// ================================================
// 0xf36a: WORD 'PORTLEAVE' codep=0x224c parp=0xf36c
// ================================================

void PORTLEAVE() // PORTLEAVE
{
  CTINIT(); // CTINIT
  CTERASE(); // CTERASE
  Exec("TYPE"); // call of word 0x2690 '(TYPE)'
  PRINT(" DOCKING BAY DOORS", 18); // (.")
  Push(0x7148);
  TONE(); // TONE
  BEEPON(); // BEEPON
}


// ================================================
// 0xf391: WORD 'UNK_0xf393' codep=0x224c parp=0xf393
// ================================================

void UNK_0xf393() // UNK_0xf393
{
  signed short int i, imax;
  _gt_MAINVIEW(); // >MAINVIEW
  DARK(); // DARK
  _gt_DISPLAY(); // >DISPLAY
  Push(pp__ask_EGA); // ?EGA
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  Push(0x05dc);
  MS(); // MS
  V_gt_DISPLAY(); // V>DISPLAY
  return;

  label1:
  Push(0x003b);
  Push(0); // 0

  i = Pop();
  imax = Pop();
  do // (DO)
  {
  Push(0x0084);
  Push(i); // I
  Push(Pop() + Pop()); // +
  UNK_0xf1c0(); // UNK_0xf1c0
  Push(0x0084);
  Push(i); // I
  _dash_(); // -
  UNK_0xf1de(); // UNK_0xf1de
  Push(0x7148);
  TONE(); // TONE
  Push(0x001e);
  MS(); // MS
  i++;
  } while(i<imax); // (LOOP) 0xffde

  Push(0x00bf);
  UNK_0xf162(); // UNK_0xf162
  Push(0x0048);
  UNK_0xf162(); // UNK_0xf162
  BEEPOFF(); // BEEPOFF
  Push(0x00fa);
  MS(); // MS
}


// ================================================
// 0xf3ef: WORD '&LAUNCH' codep=0x224c parp=0xf3fb
// ================================================
// entry

void _and_LAUNCH() // &LAUNCH
{
  Push(pp_CONTEXT_dash_ID_n_); // CONTEXT-ID#
  Push(Read16(Pop())); // @
  Push(Read16(cc__5)); // 5
  Push((Pop()==Pop())?1:0); // =
  Push(Read16(regsp)); // DUP
  if (Pop() == 0) goto label1;
  UNK_0xf2e2(); // UNK_0xf2e2
  UNK_0xf026(); // UNK_0xf026
  UNK_0xf112(); // UNK_0xf112

  UNK_0x3f3b("OPENING");
  PORTLEAVE(); // PORTLEAVE
  UNK_0xf393(); // UNK_0xf393

  label1:
  LAUNCH(); // LAUNCH
  if (Pop() == 0) return;
  Push(0xcc0a); // probable 'UNNEST'
  MODULE(); // MODULE
  CTINIT(); // CTINIT

  UNK_0x3f3b("STANDING BY TO MANEUVER");
  _dot_TTY(); // .TTY
}


// ================================================
// 0xf449: WORD '&RETURN' codep=0x224c parp=0xf455
// ================================================
// entry

void _and_RETURN() // &RETURN
{
  signed short int i, imax;
  signed short int j, jmax;
  _gt_MAINVIEW(); // >MAINVIEW
  DARK(); // DARK
  Push(Read16(cc__6)); // 6
  Push(0x0012);
  RRND(); // RRND
  Push(0); // 0

  i = Pop();
  imax = Pop();
  do // (DO)
  {
  Push(1); // 1
  Push(0x0010);
  RRND(); // RRND
  Push(Read16(regsp)); // DUP
  Push(Pop()<<4); // 16*
  Push(Pop() + Pop()); // +
  _ex_COLOR(); // !COLOR
  Push(0); // 0
  Push(0x0048);
  RRND(); // RRND
  Push(0); // 0
  Push(0x0078);
  RRND(); // RRND
  LPLOT(); // LPLOT
  i++;
  } while(i<imax); // (LOOP) 0xffdc

  V_gt_DISPLAY(); // V>DISPLAY
  _gt_DISPLAY(); // >DISPLAY

  UNK_0x3f3b("CLOSING");
  PORTLEAVE(); // PORTLEAVE
  _dot_AIRLOCK(); // .AIRLOCK
  SetColor("GREY2");
  _ex_COLOR(); // !COLOR
  Push(pp__ask_EGA); // ?EGA
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label1;
  Push(0x00bf);
  UNK_0xf152(); // UNK_0xf152
  Push(0x0048);
  UNK_0xf152(); // UNK_0xf152
  Push(0x7148);
  TONE(); // TONE
  BEEPON(); // BEEPON
  Push(0x003b);
  Push(0); // 0

  j = Pop();
  jmax = Pop();
  do // (DO)
  {
  Push(0x003c);
  Push(j); // I
  Push(Pop() + Pop()); // +
  Push(1); // 1
  Push(j); // I
  UNK_0xf306(); // UNK_0xf306
  Push(0x003c);
  Push(j); // I
  _dash_(); // -
  Push(0); // 0
  Push(j); // I
  UNK_0xf306(); // UNK_0xf306
  Push(0x7148);
  TONE(); // TONE
  Push(0x001e);
  MS(); // MS
  j++;
  } while(j<jmax); // (LOOP) 0xffd6

  goto label2;

  label1:
  Push(0x05dc);
  MS(); // MS
  _dot_AIRLOCK(); // .AIRLOCK

  label2:
  V_gt_DISPLAY(); // V>DISPLAY
  BEEPOFF(); // BEEPOFF
}

// 0xf505: db 0x4c 0x41 0x55 0x4e 0x43 0x48 0x2d 0x56 0x4f 0x43 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x78 0x20 0x66 0x6f 0x72 0x20 0x43 0x4f 0x55 0x4e 0x54 0x44 0x4f 0x57 0x4e 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x29 0x5f 0x31 0x32 0x38 0x30 0x5f 0x5f 0x5f 0x5f 0x5f 0x20 0x66 0x6f 0x72 0x20 0x53 0x54 0x50 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x2d 0x00 'LAUNCH-VOC______________________x for COUNTDOWN---------------)_1280_____ for STP---------- '
  