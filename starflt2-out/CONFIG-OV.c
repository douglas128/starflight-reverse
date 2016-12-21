// ====== OVERLAY 'CONFIG-OV' ======
// store offset = 0xe6e0
// overlay size   = 0x0e80

#include"cpu.h"
#include"starflt2.h"


// =================================
// =========== DICTIONARY ==========
// =================================
// 1869:      UNK_0x3f09  codep:0x224c parp:0x3f09 size:0xa7eb C-string:'UNK_0x3f09'
// 1870:      UNK_0xe6f6  codep:0x224c parp:0xe6f6 size:0x0008 C-string:'UNK_0xe6f6'
// 1871:      UNK_0xe700  codep:0x224c parp:0xe700 size:0x0012 C-string:'UNK_0xe700'
// 1872:      UNK_0xe714  codep:0x224c parp:0xe714 size:0x0008 C-string:'UNK_0xe714'
// 1873:      UNK_0xe71e  codep:0x224c parp:0xe71e size:0x0008 C-string:'UNK_0xe71e'
// 1874:      UNK_0xe728  codep:0x224c parp:0xe728 size:0x0008 C-string:'UNK_0xe728'
// 1875:      UNK_0xe732  codep:0x224c parp:0xe732 size:0x0008 C-string:'UNK_0xe732'
// 1876:      UNK_0xe73c  codep:0x224c parp:0xe73c size:0x0008 C-string:'UNK_0xe73c'
// 1877:      UNK_0xe746  codep:0x224c parp:0xe746 size:0x0008 C-string:'UNK_0xe746'
// 1878:      UNK_0xe750  codep:0x224c parp:0xe750 size:0x0008 C-string:'UNK_0xe750'
// 1879:      UNK_0xe75a  codep:0x7420 parp:0xe75a size:0x0003 C-string:'UNK_0xe75a'
// 1880:      UNK_0xe75f  codep:0x7420 parp:0xe75f size:0x0003 C-string:'UNK_0xe75f'
// 1881:      UNK_0xe764  codep:0x7420 parp:0xe764 size:0x0003 C-string:'UNK_0xe764'
// 1882:      UNK_0xe769  codep:0x7420 parp:0xe769 size:0x0003 C-string:'UNK_0xe769'
// 1883:      UNK_0xe76e  codep:0x7420 parp:0xe76e size:0x0003 C-string:'UNK_0xe76e'
// 1884:      UNK_0xe773  codep:0x7420 parp:0xe773 size:0x0003 C-string:'UNK_0xe773'
// 1885:      UNK_0xe778  codep:0x7420 parp:0xe778 size:0x0003 C-string:'UNK_0xe778'
// 1886:      UNK_0xe77d  codep:0x7420 parp:0xe77d size:0x0003 C-string:'UNK_0xe77d'
// 1887:      UNK_0xe782  codep:0x7420 parp:0xe782 size:0x0003 C-string:'UNK_0xe782'
// 1888:      UNK_0xe787  codep:0x7420 parp:0xe787 size:0x0003 C-string:'UNK_0xe787'
// 1889:      UNK_0xe78c  codep:0x7420 parp:0xe78c size:0x0003 C-string:'UNK_0xe78c'
// 1890:      UNK_0xe791  codep:0x7420 parp:0xe791 size:0x0008 C-string:'UNK_0xe791'
// 1891:         #JUMPOS  codep:0x7420 parp:0xe7a5 size:0x0003 C-string:'_n_JUMPOS'
// 1892:        #BLASTOS  codep:0x7420 parp:0xe7b5 size:0x0003 C-string:'_n_BLASTOS'
// 1893:      UNK_0xe7ba  codep:0x1d29 parp:0xe7ba size:0x0002 C-string:'UNK_0xe7ba'
// 1894:      UNK_0xe7be  codep:0x224c parp:0xe7be size:0x0014 C-string:'UNK_0xe7be'
// 1895:      UNK_0xe7d4  codep:0x224c parp:0xe7d4 size:0x001a C-string:'UNK_0xe7d4'
// 1896:      UNK_0xe7f0  codep:0x224c parp:0xe7f0 size:0x0018 C-string:'UNK_0xe7f0'
// 1897:      UNK_0xe80a  codep:0x224c parp:0xe80a size:0x001a C-string:'UNK_0xe80a'
// 1898:      UNK_0xe826  codep:0x224c parp:0xe826 size:0x003e C-string:'UNK_0xe826'
// 1899:      UNK_0xe866  codep:0x224c parp:0xe866 size:0x0020 C-string:'UNK_0xe866'
// 1900:      UNK_0xe888  codep:0x224c parp:0xe888 size:0x002e C-string:'UNK_0xe888'
// 1901:      UNK_0xe8b8  codep:0x224c parp:0xe8b8 size:0x0032 C-string:'UNK_0xe8b8'
// 1902:      UNK_0xe8ec  codep:0x1d29 parp:0xe8ec size:0x0015 C-string:'UNK_0xe8ec'
// 1903:      UNK_0xe903  codep:0x1d29 parp:0xe903 size:0x0021 C-string:'UNK_0xe903'
// 1904:      UNK_0xe926  codep:0x224c parp:0xe926 size:0x0106 C-string:'UNK_0xe926'
// 1905:      UNK_0xea2e  codep:0x224c parp:0xea2e size:0x0046 C-string:'UNK_0xea2e'
// 1906:      UNK_0xea76  codep:0x1d29 parp:0xea76 size:0x0032 C-string:'UNK_0xea76'
// 1907:      UNK_0xeaaa  codep:0x224c parp:0xeaaa size:0x005b C-string:'UNK_0xeaaa'
// 1908:      UNK_0xeb07  codep:0x224c parp:0xeb07 size:0x003c C-string:'UNK_0xeb07'
// 1909:      UNK_0xeb45  codep:0x224c parp:0xeb45 size:0x0014 C-string:'UNK_0xeb45'
// 1910:      UNK_0xeb5b  codep:0x224c parp:0xeb5b size:0x002a C-string:'UNK_0xeb5b'
// 1911:      UNK_0xeb87  codep:0x224c parp:0xeb87 size:0x0042 C-string:'UNK_0xeb87'
// 1912:      UNK_0xebcb  codep:0x224c parp:0xebcb size:0x004e C-string:'UNK_0xebcb'
// 1913:             #>.  codep:0x4b3b parp:0xec21 size:0x0010 C-string:'_n__gt__dot_'
// 1914:      UNK_0xec33  codep:0x224c parp:0xec33 size:0x0012 C-string:'UNK_0xec33'
// 1915:      (PARTADDR)  codep:0x4b3b parp:0xec54 size:0x0014 C-string:'_ro_PARTADDR_rc_'
// 1916:      UNK_0xec6a  codep:0x224c parp:0xec6a size:0x0006 C-string:'UNK_0xec6a'
// 1917:           (PTS)  codep:0x4b3b parp:0xec7a size:0x000c C-string:'_ro_PTS_rc_'
// 1918:      UNK_0xec88  codep:0x224c parp:0xec88 size:0x0012 C-string:'UNK_0xec88'
// 1919:      UNK_0xec9c  codep:0x1d29 parp:0xec9c size:0x0004 C-string:'UNK_0xec9c'
// 1920:      UNK_0xeca2  codep:0x224c parp:0xeca2 size:0x007e C-string:'UNK_0xeca2'
// 1921:      UNK_0xed22  codep:0x224c parp:0xed22 size:0x0022 C-string:'UNK_0xed22'
// 1922:      UNK_0xed46  codep:0x224c parp:0xed46 size:0x004e C-string:'UNK_0xed46'
// 1923:         #>VALUE  codep:0x4b3b parp:0xeda0 size:0x0010 C-string:'_n__gt_VALUE'
// 1924:      UNK_0xedb2  codep:0x224c parp:0xedb2 size:0x001e C-string:'UNK_0xedb2'
// 1925:      UNK_0xedd2  codep:0x224c parp:0xedd2 size:0x000a C-string:'UNK_0xedd2'
// 1926:      UNK_0xedde  codep:0x224c parp:0xedde size:0x009a C-string:'UNK_0xedde'
// 1927:           #>BUY  codep:0x4b3b parp:0xee82 size:0x0010 C-string:'_n__gt_BUY'
// 1928:      UNK_0xee94  codep:0x224c parp:0xee94 size:0x00bc C-string:'UNK_0xee94'
// 1929:      UNK_0xef52  codep:0x224c parp:0xef52 size:0x0078 C-string:'UNK_0xef52'
// 1930:      UNK_0xefcc  codep:0x224c parp:0xefcc size:0x0079 C-string:'UNK_0xefcc'
// 1931:      UNK_0xf047  codep:0x224c parp:0xf047 size:0x0097 C-string:'UNK_0xf047'
// 1932:          #>SELL  codep:0x4b3b parp:0xf0e9 size:0x0010 C-string:'_n__gt_SELL'
// 1933:      UNK_0xf0fb  codep:0x224c parp:0xf0fb size:0x0072 C-string:'UNK_0xf0fb'
// 1934:      UNK_0xf16f  codep:0x1d29 parp:0xf16f size:0x0002 C-string:'UNK_0xf16f'
// 1935:      UNK_0xf173  codep:0x224c parp:0xf173 size:0x0088 C-string:'UNK_0xf173'
// 1936:      UNK_0xf1fd  codep:0x224c parp:0xf1fd size:0x004e C-string:'UNK_0xf1fd'
// 1937:      UNK_0xf24d  codep:0x224c parp:0xf24d size:0x0060 C-string:'UNK_0xf24d'
// 1938:      UNK_0xf2af  codep:0x224c parp:0xf2af size:0x003b C-string:'UNK_0xf2af'
// 1939:      UNK_0xf2ec  codep:0x224c parp:0xf2ec size:0x0033 C-string:'UNK_0xf2ec'
// 1940:      UNK_0xf321  codep:0x224c parp:0xf321 size:0x004a C-string:'UNK_0xf321'
// 1941:      UNK_0xf36d  codep:0x224c parp:0xf36d size:0x0070 C-string:'UNK_0xf36d'
// 1942:      UNK_0xf3df  codep:0x224c parp:0xf3df size:0x001d C-string:'UNK_0xf3df'
// 1943:      UNK_0xf3fe  codep:0x224c parp:0xf3fe size:0x0024 C-string:'UNK_0xf3fe'
// 1944:      UNK_0xf424  codep:0x224c parp:0xf424 size:0x006e C-string:'UNK_0xf424'
// 1945:      UNK_0xf494  codep:0x224c parp:0xf494 size:0x0008 C-string:'UNK_0xf494'
// 1946:      UNK_0xf49e  codep:0x224c parp:0xf49e size:0x0008 C-string:'UNK_0xf49e'
// 1947: CONFIG-FUNCTION  codep:0x4b3b parp:0xf4ba size:0x0018 C-string:'CONFIG_dash_FUNCTION'
// 1948:      (U-CONFIG)  codep:0x224c parp:0xf4e1 size:0x0000 C-string:'_ro_U_dash_CONFIG_rc_'

// =================================
// =========== VARIABLES ===========
// =================================
unsigned char UNK_0xe7ba[2] = {0x3a, 0x20}; // UNK_0xe7ba
unsigned char UNK_0xe8ec[21] = {0x04, 0x0a, 0x02, 0x09, 0x13, 0x0a, 0x16, 0x09, 0x25, 0x0a, 0x3c, 0x09, 0x27, 0x0a, 0x64, 0x09, 0x1b, 0x0a, 0x80, 0x09, 0x1e}; // UNK_0xe8ec
unsigned char UNK_0xe903[33] = {0x07, 0xb0, 0x06, 0x09, 0x29, 0xa6, 0x06, 0x09, 0x1d, 0x9c, 0x06, 0x09, 0x25, 0x92, 0x06, 0x09, 0x15, 0x88, 0x06, 0x09, 0x41, 0x7e, 0x06, 0x09, 0x31, 0x74, 0x06, 0x09, 0x2d, 0x6a, 0x06, 0x09, 0x25}; // UNK_0xe903
unsigned char UNK_0xea76[50] = {0xe8, 0x03, 0x90, 0x01, 0xc8, 0x00, 0x50, 0x00, 0x0a, 0x00, 0xe2, 0x04, 0xbc, 0x02, 0x40, 0x01, 0x78, 0x00, 0x28, 0x00, 0xfa, 0x00, 0x7d, 0x00, 0x3e, 0x00, 0x1f, 0x00, 0x0f, 0x00, 0xd0, 0x07, 0xb0, 0x04, 0x58, 0x02, 0x18, 0x01, 0x78, 0x00, 0xdc, 0x05, 0x84, 0x03, 0x1c, 0x02, 0xc8, 0x00, 0x50, 0x00}; // UNK_0xea76
unsigned char UNK_0xec9c[4] = {0x56, 0x3a, 0x20, 0x70}; // UNK_0xec9c
unsigned char UNK_0xf16f[2] = {0x3a, 0x20}; // UNK_0xf16f



// 0xe6f2: db 0xe7 0x00 '  '

// ================================================
// 0xe6f4: WORD 'UNK_0xe6f6' codep=0x224c parp=0xe6f6
// ================================================

void UNK_0xe6f6() // UNK_0xe6f6
{
  Push(0xc261);
  MODULE(); // MODULE
}


// ================================================
// 0xe6fe: WORD 'UNK_0xe700' codep=0x224c parp=0xe700
// ================================================

void UNK_0xe700() // UNK_0xe700
{
  Push(0xc273);
  MODULE(); // MODULE
}

// 0xe708: db 0x4c 0x22 0x5d 0x17 0x85 0xc2 0xd9 0x84 0x90 0x16 'L"]       '

// ================================================
// 0xe712: WORD 'UNK_0xe714' codep=0x224c parp=0xe714
// ================================================

void UNK_0xe714() // UNK_0xe714
{
  Push(0xc2a9);
  MODULE(); // MODULE
}


// ================================================
// 0xe71c: WORD 'UNK_0xe71e' codep=0x224c parp=0xe71e
// ================================================

void UNK_0xe71e() // UNK_0xe71e
{
  Push(0xc2ed);
  MODULE(); // MODULE
}


// ================================================
// 0xe726: WORD 'UNK_0xe728' codep=0x224c parp=0xe728
// ================================================

void UNK_0xe728() // UNK_0xe728
{
  Push(0xb6fd);
  MODULE(); // MODULE
}


// ================================================
// 0xe730: WORD 'UNK_0xe732' codep=0x224c parp=0xe732
// ================================================

void UNK_0xe732() // UNK_0xe732
{
  Push(0xb70e);
  MODULE(); // MODULE
}


// ================================================
// 0xe73a: WORD 'UNK_0xe73c' codep=0x224c parp=0xe73c
// ================================================

void UNK_0xe73c() // UNK_0xe73c
{
  Push(0xb71f);
  MODULE(); // MODULE
}


// ================================================
// 0xe744: WORD 'UNK_0xe746' codep=0x224c parp=0xe746
// ================================================

void UNK_0xe746() // UNK_0xe746
{
  Push(0xb730);
  MODULE(); // MODULE
}


// ================================================
// 0xe74e: WORD 'UNK_0xe750' codep=0x224c parp=0xe750
// ================================================

void UNK_0xe750() // UNK_0xe750
{
  Push(0xcc56);
  MODULE(); // MODULE
}


// ================================================
// 0xe758: WORD 'UNK_0xe75a' codep=0x7420 parp=0xe75a
// ================================================
// 0xe75a: db 0x14 0x11 0x02 '   '

// ================================================
// 0xe75d: WORD 'UNK_0xe75f' codep=0x7420 parp=0xe75f
// ================================================
// 0xe75f: db 0x14 0x13 0x02 '   '

// ================================================
// 0xe762: WORD 'UNK_0xe764' codep=0x7420 parp=0xe764
// ================================================
// 0xe764: db 0x14 0x15 0x02 '   '

// ================================================
// 0xe767: WORD 'UNK_0xe769' codep=0x7420 parp=0xe769
// ================================================
// 0xe769: db 0x14 0x17 0x02 '   '

// ================================================
// 0xe76c: WORD 'UNK_0xe76e' codep=0x7420 parp=0xe76e
// ================================================
// 0xe76e: db 0x14 0x19 0x02 '   '

// ================================================
// 0xe771: WORD 'UNK_0xe773' codep=0x7420 parp=0xe773
// ================================================
// 0xe773: db 0x14 0x1b 0x02 '   '

// ================================================
// 0xe776: WORD 'UNK_0xe778' codep=0x7420 parp=0xe778
// ================================================
// 0xe778: db 0x14 0x1d 0x02 '   '

// ================================================
// 0xe77b: WORD 'UNK_0xe77d' codep=0x7420 parp=0xe77d
// ================================================
// 0xe77d: db 0x14 0x1f 0x02 '   '

// ================================================
// 0xe780: WORD 'UNK_0xe782' codep=0x7420 parp=0xe782
// ================================================
// 0xe782: db 0x14 0x29 0x07 ' ) '

// ================================================
// 0xe785: WORD 'UNK_0xe787' codep=0x7420 parp=0xe787
// ================================================
// 0xe787: db 0x14 0x30 0x02 ' 0 '

// ================================================
// 0xe78a: WORD 'UNK_0xe78c' codep=0x7420 parp=0xe78c
// ================================================
// 0xe78c: db 0x14 0x32 0x02 ' 2 '

// ================================================
// 0xe78f: WORD 'UNK_0xe791' codep=0x7420 parp=0xe791
// ================================================
// 0xe791: db 0x14 0x43 0x02 0x20 0x74 0x14 0x45 0x04 ' C  t E '

// ================================================
// 0xe799: WORD '#JUMPOS' codep=0x7420 parp=0xe7a5
// ================================================
// 0xe7a5: db 0x14 0x56 0x01 ' V '

// ================================================
// 0xe7a8: WORD '#BLASTOS' codep=0x7420 parp=0xe7b5
// ================================================
// 0xe7b5: db 0x14 0x57 0x01 ' W '

// ================================================
// 0xe7b8: WORD 'UNK_0xe7ba' codep=0x1d29 parp=0xe7ba
// ================================================
// 0xe7ba: db 0x3a 0x20 ': '

// ================================================
// 0xe7bc: WORD 'UNK_0xe7be' codep=0x224c parp=0xe7be
// ================================================

void UNK_0xe7be() // UNK_0xe7be
{
  Push(pp_UNK_0xe7ba); // UNK_0xe7ba
  Push(Read16(Pop())); // @
  Push(Read16(sp)); // DUP
  if (Pop() == 0) Push(1); else Push(0); // 0=
  SWAP(); // SWAP
  Push(cc__6); // 6
  Push(cc__8); // 8
  WITHIN(); // WITHIN
  Push(Pop() | Pop()); // OR
}


// ================================================
// 0xe7d2: WORD 'UNK_0xe7d4' codep=0x224c parp=0xe7d4
// ================================================

void UNK_0xe7d4() // UNK_0xe7d4
{
  UNK_0xe7be(); // UNK_0xe7be
  if (Pop() == 0) goto label1;
  Pop(); // DROP
  Push(0x0064);
  return;

  label1:
  Push(Read8(Pop())&0xFF); // C@
  Push(0x007f);
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xe7ee: WORD 'UNK_0xe7f0' codep=0x224c parp=0xe7f0
// ================================================

void UNK_0xe7f0() // UNK_0xe7f0
{
  UNK_0xe7be(); // UNK_0xe7be
  if (Pop() == 0) goto label1;
  Pop(); // DROP
  Push(cc__7); // 7
  return;

  label1:
  Push(Pop()+1); // 1+
  Push(Read8(Pop())&0xFF); // C@
  Push(cc__7); // 7
  Push(Pop() & Pop()); // AND
}


// ================================================
// 0xe808: WORD 'UNK_0xe80a' codep=0x224c parp=0xe80a
// ================================================

void UNK_0xe80a() // UNK_0xe80a
{
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  Func8("UNK_0xe77d");
  Push(Read16(Pop())); // @
  _plus_BIT(); // +BIT
  Func8("#JUMPOS");
  Push(Read8(Pop())&0xFF); // C@
  Push(Pop() + Pop()); // +
  Func8("#BLASTOS");
  Push(Read8(Pop())&0xFF); // C@
  Push(Pop() + Pop()); // +
  ICLOSE(); // ICLOSE
}


// ================================================
// 0xe824: WORD 'UNK_0xe826' codep=0x224c parp=0xe826
// ================================================

void UNK_0xe826() // UNK_0xe826
{
  _ex_COLOR(); // !COLOR
  Push(2); // 2
  Push(0x00b5);
  Push(0x004f);
  OVER(); // OVER
  LLINE(); // LLINE
  Push(2); // 2
  Push(0x001b);
  Push(0x004f);
  OVER(); // OVER
  LLINE(); // LLINE
  Push(2); // 2
  Push(0x00b5);
  Push(2); // 2
  Push(0x001b);
  LLINE(); // LLINE
  Push(0x004f);
  Push(0x00b5);
  OVER(); // OVER
  Push(0x001b);
  LLINE(); // LLINE
}


// ================================================
// 0xe864: WORD 'UNK_0xe866' codep=0x224c parp=0xe866
// ================================================

void UNK_0xe866() // UNK_0xe866
{
  TIME(); // TIME
  _2_at_(); // 2@

  label1:
  TIME(); // TIME
  _2_at_(); // 2@
  _2OVER(); // 2OVER
  D_dash_(); // D-
  Push(0x09c4); Pust(0x0000);
  D_gt_(); // D>
  Func14("?TERMINAL"); // call of word 0x25bc
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label1;
  Pop(); Pop();// 2DROP
}


// ================================================
// 0xe886: WORD 'UNK_0xe888' codep=0x224c parp=0xe888
// ================================================

void UNK_0xe888() // UNK_0xe888
{
  _at_CRS(); // @CRS
  Push(2); // 2
  SetColor("BLACK");
  Push(0x00ae);
  Push(0x0085);
  _2DUP(); // 2DUP
  SWAP(); // SWAP
  POS_dot_(); // POS.
  POS_dot_PXT(); // POS.PXT
  CTINIT(); // CTINIT
  UNK_0xe80a(); // UNK_0xe80a
  Push(2); // 2
  _dot_R(); // .R
  _ex_CRS(); // !CRS
  Push(0xcc0f);
  MODULE(); // MODULE
  Push(0xcc20);
  MODULE(); // MODULE
}


// ================================================
// 0xe8b6: WORD 'UNK_0xe8b8' codep=0x224c parp=0xe8b8
// ================================================

void UNK_0xe8b8() // UNK_0xe8b8
{
  Push(1); // 1
  _0MESS(); // 0MESS
  Push(1); // 1
  Push(0x001a);
  CMESS(); // CMESS
  PRINT("SHIP CAN'T HANDLE THIS LOAD", 27); // (.")
  _ex_CRS(); // !CRS
  UNK_0xe866(); // UNK_0xe866
  UNK_0xe732(); // UNK_0xe732
}


// ================================================
// 0xe8ea: WORD 'UNK_0xe8ec' codep=0x1d29 parp=0xe8ec
// ================================================
// 0xe8ec: db 0x04 0x0a 0x02 0x09 0x13 0x0a 0x16 0x09 0x25 0x0a 0x3c 0x09 0x27 0x0a 0x64 0x09 0x1b 0x0a 0x80 0x09 0x1e '        % < ' d      '

// ================================================
// 0xe901: WORD 'UNK_0xe903' codep=0x1d29 parp=0xe903
// ================================================
// 0xe903: db 0x07 0xb0 0x06 0x09 0x29 0xa6 0x06 0x09 0x1d 0x9c 0x06 0x09 0x25 0x92 0x06 0x09 0x15 0x88 0x06 0x09 0x41 0x7e 0x06 0x09 0x31 0x74 0x06 0x09 0x2d 0x6a 0x06 0x09 0x25 '    )       %       A~  1t  -j  %'

// ================================================
// 0xe924: WORD 'UNK_0xe926' codep=0x224c parp=0xe926
// ================================================

void UNK_0xe926() // UNK_0xe926
{
  UNK_0xe80a(); // UNK_0xe80a
  Push(0x0010);
  _st_(); // <
  Push(0xc350); Pust(0x0000);
  UNK_0xe714(); // UNK_0xe714
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label1;
  Func8("#BLASTOS");
  Push(Read8(Pop())&0xFF); // C@
  Push(1); // 1
  _gt_(); // >
  if (Pop() == 0) goto label2;
  UNK_0xe8b8(); // UNK_0xe8b8
  goto label3;

  label2:
  Push(0x3cb0); Pust(0xffff);
  UNK_0xe71e(); // UNK_0xe71e
  UNK_0xe750(); // UNK_0xe750
  Push(1); // 1
  Func8("#BLASTOS");
  _plus__ex_(); // +!
  Push(0xcc32);
  MODULE(); // MODULE
  UNK_0xe888(); // UNK_0xe888

  label3:
  return;

  label1:
  Push(1); // 1
  _0MESS(); // 0MESS
  UNK_0xe80a(); // UNK_0xe80a
  Push(0x0010);
  _eq_(); // =
  if (Pop() == 0) goto label4;
  Push(1); // 1
  Push(0x001b);
  CMESS(); // CMESS
  PRINT("NO POD BAYS AVAILABLE", 21); // (.")
  _ex_CRS(); // !CRS
  goto label5;

  label4:
  UNK_0xe746(); // UNK_0xe746

  label5:
  UNK_0xe866(); // UNK_0xe866
  UNK_0xe732(); // UNK_0xe732
}

// 0xe9a8: db 0x4c 0x22 0x08 0xe8 0x5d 0x17 0x10 0x00 0x46 0x12 0x16 0x16 0x20 0x4e 0x00 0x00 0x12 0xe7 0xf5 0x12 0xfa 0x15 0x30 0x00 0xa3 0xe7 0x92 0x0c 0x7f 0x3b 0x2d 0x12 0xfa 0x15 0x08 0x00 0xb6 0xe8 0x60 0x16 0x1a 0x00 0x16 0x16 0xe0 0xb1 0xff 0xff 0x1c 0xe7 0x4e 0xe7 0x2e 0x0f 0xa3 0xe7 0x23 0x6d 0x5d 0x17 0x32 0xcc 0xd9 0x84 0x86 0xe8 0x60 0x16 0x3e 0x00 0x2e 0x0f 0x0f 0xab 0x08 0xe8 0x5d 0x17 0x10 0x00 0x5f 0x12 0xfa 0x15 0x28 0x00 0x2e 0x0f 0x5d 0x17 0x1b 0x00 0xa4 0xaa 0xdc 0x1b 0x15 0x4e 0x4f 0x20 0x50 0x4f 0x44 0x20 0x42 0x41 0x59 0x53 0x20 0x41 0x56 0x41 0x49 0x4c 0x41 0x42 0x4c 0x45 0xbd 0x9d 0x60 0x16 0x04 0x00 0x44 0xe7 0x64 0xe8 0x30 0xe7 0x90 0x16 'L"  ]   F    N        0     ;-       `           N .   #m] 2     ` > .     ]   _   ( . ]        NO POD BAYS AVAILABLE  `   D d 0   '

// ================================================
// 0xea2c: WORD 'UNK_0xea2e' codep=0x224c parp=0xea2e
// ================================================

void UNK_0xea2e() // UNK_0xea2e
{
  Func8("#BLASTOS");
  Push(Read8(Pop())&0xFF); // C@
  if (Pop() == 0) return;
  Push(cc__dash_1); // -1
  Func8("#BLASTOS");
  _plus__ex_(); // +!
  Push(0xafc8); Pust(0x0000);
  UNK_0xe71e(); // UNK_0xe71e
  Push(0xcc32);
  MODULE(); // MODULE
  UNK_0xe888(); // UNK_0xe888
  UNK_0xe750(); // UNK_0xe750
}

// 0xea50: db 0x4c 0x22 0xa3 0xe7 0x92 0x0c 0xfa 0x15 0x1a 0x00 0xb8 0x3b 0xa3 0xe7 0x23 0x6d 0x16 0x16 0x94 0x11 0x00 0x00 0x1c 0xe7 0x5d 0x17 0x32 0xcc 0xd9 0x84 0x86 0xe8 0x4e 0xe7 0x90 0x16 'L"         ;  #m        ] 2     N   '

// ================================================
// 0xea74: WORD 'UNK_0xea76' codep=0x1d29 parp=0xea76
// ================================================
// 0xea76: db 0xe8 0x03 0x90 0x01 0xc8 0x00 0x50 0x00 0x0a 0x00 0xe2 0x04 0xbc 0x02 0x40 0x01 0x78 0x00 0x28 0x00 0xfa 0x00 0x7d 0x00 0x3e 0x00 0x1f 0x00 0x0f 0x00 0xd0 0x07 0xb0 0x04 0x58 0x02 0x18 0x01 0x78 0x00 0xdc 0x05 0x84 0x03 0x1c 0x02 0xc8 0x00 0x50 0x00 '      P       @ x (   } >         X   x         P '

// ================================================
// 0xeaa8: WORD 'UNK_0xeaaa' codep=0x224c parp=0xeaaa
// ================================================

void UNK_0xeaaa() // UNK_0xeaaa
{
  Push(cc__7); // 7
  SetColor("BLACK");
  ROT(); // ROT
  Push(0x000a);
  Push(Pop() * Pop()); // *
  Push(0x007c);
  Push(Pop() + Pop()); // +
  Push(0x007d);
  _2DUP(); // 2DUP
  SWAP(); // SWAP
  POS_dot_(); // POS.
  POS_dot_PXT(); // POS.PXT
  CTINIT(); // CTINIT
  Push(cc__7); // 7
  Push(Pop() & Pop()); // AND
  if (Read16(sp) != 0) Push(Read16(sp)); // ?DUP
  if (Pop() == 0) goto label1;
  Push(Read16(sp)); // DUP
  Push(cc__6); // 6
  _eq_(); // =
  if (Pop() == 0) goto label2;
  PRINT("PLASMA", 6); // (.")
  Pop(); // DROP
  goto label3;

  label2:
  PRINT("CLASS ", 6); // (.")
  _dot_(); // .

  label3:
  return;

  label1:
  PRINT("NONE", 4); // (.")
}


// ================================================
// 0xeb05: WORD 'UNK_0xeb07' codep=0x224c parp=0xeb07
// ================================================

void UNK_0xeb07() // UNK_0xeb07
{
  _at_CRS(); // @CRS
  CTINIT(); // CTINIT
  Func8("UNK_0xe75f");
  Push(Pop()+1); // 1+
  Push(Read8(Pop())&0xFF); // C@
  Push(cc__4); // 4
  UNK_0xeaaa(); // UNK_0xeaaa
  Func8("UNK_0xe76e");
  Push(Pop()+1); // 1+
  Push(Read8(Pop())&0xFF); // C@
  Push(cc__3); // 3
  UNK_0xeaaa(); // UNK_0xeaaa
  Func8("UNK_0xe75a");
  Push(Pop()+1); // 1+
  Push(Read8(Pop())&0xFF); // C@
  Push(2); // 2
  UNK_0xeaaa(); // UNK_0xeaaa
  Func8("UNK_0xe773");
  Push(Pop()+1); // 1+
  Push(Read8(Pop())&0xFF); // C@
  Push(1); // 1
  UNK_0xeaaa(); // UNK_0xeaaa
  Func8("UNK_0xe778");
  Push(Pop()+1); // 1+
  Push(Read8(Pop())&0xFF); // C@
  Push(0); // 0
  UNK_0xeaaa(); // UNK_0xeaaa
  UNK_0xe888(); // UNK_0xe888
  _ex_CRS(); // !CRS
}


// ================================================
// 0xeb43: WORD 'UNK_0xeb45' codep=0x224c parp=0xeb45
// ================================================

void UNK_0xeb45() // UNK_0xeb45
{
  Pop(); // DROP
  Push(0x003b);
  Push(0x00ae);
  POS_dot_(); // POS.
  Push(0x01f4);
  _dot_(); // .
}


// ================================================
// 0xeb59: WORD 'UNK_0xeb5b' codep=0x224c parp=0xeb5b
// ================================================

void UNK_0xeb5b() // UNK_0xeb5b
{
  Pop(); // DROP
  Push(0x003b);
  Push(0x0072);
  POS_dot_(); // POS.
  Push(0xc350);
  U_dot_(); // U.
}

// 0xeb6f: db 0x4c 0x22 0x32 0x0e 0x5d 0x17 0x3b 0x00 0x5d 0x17 0x68 0x00 0x7b 0x9a 0x5d 0x17 0x20 0x4e 0xc2 0x29 0x90 0x16 'L"2 ] ; ] h { ]  N )  '

// ================================================
// 0xeb85: WORD 'UNK_0xeb87' codep=0x224c parp=0xeb87
// ================================================

void UNK_0xeb87() // UNK_0xeb87
{
  Push(Pop()-1); // 1-
  Push(cc__5); // 5
  Push(Pop() * Pop()); // *
  Push(cc__5); // 5
  OVER(); // OVER
  Push(Pop() + Pop()); // +
  SWAP(); // SWAP

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(0x0037);
  Push(i); // I
  Push(cc__5); // 5
  MOD(); // MOD
  Push(0x000a);
  Push(Pop() * Pop()); // *
  Push(0x002c);
  Push(Pop() + Pop()); // +
  POS_dot_(); // POS.
  Push(pp_UNK_0xea76); // UNK_0xea76
  Push(i); // I
  Push(Pop()*2); // 2*
  Push(Pop() + Pop()); // +
  Push(Read16(Pop())); // @
  Push(0x0064);
  M_star_(); // M*
  Push(cc__6); // 6
  D_dot_R(); // D.R
  i++;
  } while(i<imax); // (LOOP) 0xffd2

}


// ================================================
// 0xebc9: WORD 'UNK_0xebcb' codep=0x224c parp=0xebcb
// ================================================

void UNK_0xebcb() // UNK_0xebcb
{
  Push(cc__5); // 5
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(cc__6); // 6
  SetColor("BLACK");
  Push(0x002c);
  Push(i); // I
  Push(0x000a);
  Push(Pop() * Pop()); // *
  Push(Pop() + Pop()); // +
  Push(0x0036);
  POS_dot_PXT(); // POS.PXT
  i++;
  } while(i<imax); // (LOOP) 0xffe6

  Push(cc__4); // 4
  SetColor("BLACK");
  Push(0x00ae);
  Push(0x0037);
  POS_dot_PXT(); // POS.PXT
  Push(cc__6); // 6
  SetColor("BLACK");
  Push(0x0072);
  Push(0x0036);
  POS_dot_PXT(); // POS.PXT
  Push(cc__6); // 6
  SetColor("BLACK");
  Push(0x0068);
  Push(0x0036);
  POS_dot_PXT(); // POS.PXT
}


// ================================================
// 0xec19: WORD '#>.' codep=0x4b3b parp=0xec21
// ================================================
// 0xec21: db 0x03 0x00 0x87 0xeb 0x00 0x00 0x45 0xeb 0x06 0x00 0x5b 0xeb 0x07 0x00 0x71 0xeb '      E   [   q '

// ================================================
// 0xec31: WORD 'UNK_0xec33' codep=0x224c parp=0xec33
// ================================================

void UNK_0xec33() // UNK_0xec33
{
  _gt_R(); // >R
  _at_CRS(); // @CRS
  R_gt_(); // R>
  CTINIT(); // CTINIT
  UNK_0xebcb(); // UNK_0xebcb
  Push(Read16(sp)); // DUP
  switch(Pop()) // #>.
  {
  case 0:
    UNK_0xeb87(); // UNK_0xeb87
    break;
  case 6:
    UNK_0xeb45(); // UNK_0xeb45
    break;
  case 7:
    UNK_0xeb5b(); // UNK_0xeb5b
    break;
  }
  _ex_CRS(); // !CRS
}


// ================================================
// 0xec45: WORD '(PARTADDR)' codep=0x4b3b parp=0xec54
// ================================================
// 0xec54: db 0x04 0x00 0x78 0xe7 0x01 0x00 0x5f 0xe7 0x02 0x00 0x6e 0xe7 0x03 0x00 0x5a 0xe7 0x04 0x00 0x73 0xe7 '  x   _   n   Z   s '

// ================================================
// 0xec68: WORD 'UNK_0xec6a' codep=0x224c parp=0xec6a
// ================================================

void UNK_0xec6a() // UNK_0xec6a
{
  Push(Read16(sp)); // DUP
  switch(Pop()) // (PARTADDR)
  {
  case 1:
    UNK_0xe778(); // UNK_0xe778
    break;
  case 2:
    UNK_0xe75f(); // UNK_0xe75f
    break;
  case 3:
    UNK_0xe76e(); // UNK_0xe76e
    break;
  case 4:
    UNK_0xe75a(); // UNK_0xe75a
    break;
  }
}


// ================================================
// 0xec70: WORD '(PTS)' codep=0x4b3b parp=0xec7a
// ================================================
// 0xec7a: db 0x02 0x00 0x22 0x0f 0x02 0x00 0x87 0xe7 0x03 0x00 0x8c 0xe7 '  "         '

// ================================================
// 0xec86: WORD 'UNK_0xec88' codep=0x224c parp=0xec88
// ================================================

void UNK_0xec88() // UNK_0xec88
{
  switch(Pop()) // (PTS)
  {
  case 2:
    Push(0); // 0
    break;
  case 3:
    UNK_0xe787(); // UNK_0xe787
    break;
  }
  if (Read16(sp) != 0) Push(Read16(sp)); // ?DUP
  if (Pop() == 0) goto label1;
  _ex_(); // !
  return;

  label1:
  Pop(); // DROP
}


// ================================================
// 0xec9a: WORD 'UNK_0xec9c' codep=0x1d29 parp=0xec9c
// ================================================
// 0xec9c: db 0x56 0x3a 0x20 0x70 'V: p'

// ================================================
// 0xeca0: WORD 'UNK_0xeca2' codep=0x224c parp=0xeca2
// ================================================

void UNK_0xeca2() // UNK_0xeca2
{
  UNK_0xec6a(); // UNK_0xec6a
  Push(Read16(sp)); // DUP
  UNK_0xe7f0(); // UNK_0xe7f0
  Push(Read16(sp)); // DUP
  Push(Read16(sp)); // DUP
  Push(cc__6); // 6
  _st_(); // <
  SWAP(); // SWAP
  _gt_FLAG(); // >FLAG
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label1;
  Push(cc__5); // 5
  SWAP(); // SWAP
  _dash_(); // -
  Push(0x000a);
  Push(Pop() * Pop()); // *
  Push(0x002c);
  Push(Pop() + Pop()); // +
  Push(pp_YBLT); // YBLT
  _ex_(); // !
  SWAP(); // SWAP
  Push(Pop()-1); // 1-
  Push(0x000a);
  Push(Pop() * Pop()); // *
  OVER(); // OVER
  UNK_0xe7f0(); // UNK_0xe7f0
  Push(cc__5); // 5
  SWAP(); // SWAP
  _dash_(); // -
  Push(Pop()*2); // 2*
  Push(Pop() + Pop()); // +
  Push(pp_UNK_0xea76); // UNK_0xea76
  Push(Pop() + Pop()); // +
  Push(Read16(Pop())); // @
  SWAP(); // SWAP
  UNK_0xe7d4(); // UNK_0xe7d4
  Push(0x0069);
  _star__slash_(); // */
  Push(0x0064);
  U_star_(); // U*
  Push(0x0005); Pust(0x0000);
  DMAX(); // DMAX
  _2DUP(); // 2DUP
  Push(pp_UNK_0xec9c); // UNK_0xec9c
  D_ex_(); // D!
  Push(cc__6); // 6
  D_dot_R(); // D.R
  return;

  label1:
  Pop(); // DROP
  Pop(); Pop();// 2DROP
  Push2Words("NULL");
  Push(pp_UNK_0xec9c); // UNK_0xec9c
  D_ex_(); // D!
}


// ================================================
// 0xed20: WORD 'UNK_0xed22' codep=0x224c parp=0xed22
// ================================================

void UNK_0xed22() // UNK_0xed22
{
  Pop(); // DROP
  Push(0x00ae);
  Push(pp_YBLT); // YBLT
  _ex_(); // !
  Func8("UNK_0xe77d");
  Push(Read16(Pop())); // @
  if (Read16(sp) != 0) Push(Read16(sp)); // ?DUP
  if (Pop() == 0) return;
  _plus_BIT(); // +BIT
  Push(0x01f4);
  Push(Pop() * Pop()); // *
  Push(cc__4); // 4
  _dot_R(); // .R
}


// ================================================
// 0xed44: WORD 'UNK_0xed46' codep=0x224c parp=0xed46
// ================================================

void UNK_0xed46() // UNK_0xed46
{
  Pop(); // DROP
  Push(0x0072);
  Push(pp_YBLT); // YBLT
  _ex_(); // !
  Push(0xfffc);
  Push(pp_XBLT); // XBLT
  _plus__ex_(); // +!
  Func8("#BLASTOS");
  Push(Read8(Pop())&0xFF); // C@
  if (Read16(sp) != 0) Push(Read16(sp)); // ?DUP
  if (Pop() == 0) return;
  Push(0x1194);
  M_star_(); // M*
  Push(cc__6); // 6
  D_dot_R(); // D.R
  PRINT("0", 1); // (.")
}

// 0xed72: db 0x4c 0x22 0x32 0x0e 0x5d 0x17 0x68 0x00 0x3b 0x5a 0x16 0x6d 0xa3 0xe7 0x92 0x0c 0xc8 0x0d 0xfa 0x15 0x0c 0x00 0x5d 0x17 0x94 0x11 0xcd 0x10 0x97 0x3b 0xa3 0x28 0x90 0x16 'L"2 ] h ;Z m          ]      ; (  '

// ================================================
// 0xed94: WORD '#>VALUE' codep=0x4b3b parp=0xeda0
// ================================================
// 0xeda0: db 0x03 0x00 0xa2 0xec 0x00 0x00 0x22 0xed 0x06 0x00 0x46 0xed 0x07 0x00 0x74 0xed '      "   F   t '

// ================================================
// 0xedb0: WORD 'UNK_0xedb2' codep=0x224c parp=0xedb2
// ================================================

void UNK_0xedb2() // UNK_0xedb2
{
  _gt_R(); // >R
  _at_CRS(); // @CRS
  R_gt_(); // R>
  _gt_1FONT(); // >1FONT
  Push(pp_XORMODE); // XORMODE
  _099(); // 099
  UNK_0xebcb(); // UNK_0xebcb
  Push(0x0037);
  Push(pp_XBLT); // XBLT
  _ex_(); // !
  Push(Read16(sp)); // DUP
  switch(Pop()) // #>VALUE
  {
  case 0:
    UNK_0xeca2(); // UNK_0xeca2
    break;
  case 6:
    UNK_0xed22(); // UNK_0xed22
    break;
  case 7:
    UNK_0xed46(); // UNK_0xed46
    break;
  }
  _ex_CRS(); // !CRS
}


// ================================================
// 0xedd0: WORD 'UNK_0xedd2' codep=0x224c parp=0xedd2
// ================================================

void UNK_0xedd2() // UNK_0xedd2
{
  UNK_0xec6a(); // UNK_0xec6a
  UNK_0xe7f0(); // UNK_0xe7f0
  SWAP(); // SWAP
  Pop(); // DROP
}


// ================================================
// 0xeddc: WORD 'UNK_0xedde' codep=0x224c parp=0xedde
// ================================================

void UNK_0xedde() // UNK_0xedde
{
  UNK_0xe80a(); // UNK_0xe80a
  Push(0x0010);
  _st_(); // <
  Push(0x01f4); Pust(0x0000);
  UNK_0xe714(); // UNK_0xe714
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label1;
  Push(0xfe0c); Pust(0xffff);
  UNK_0xe71e(); // UNK_0xe71e
  UNK_0xe750(); // UNK_0xe750
  Push(1); // 1
  Push(0x0010);
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(Read16(sp)); // DUP
  Func8("UNK_0xe77d");
  Push(Read16(Pop())); // @
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label2;
  Func8("UNK_0xe77d");
  _plus__ex_(); // +!
  Push(0x01f4);
  Func8("UNK_0xe791");
  _plus__ex_(); // +!
  LEAVE(); // LEAVE
  goto label3;

  label2:
  Push(Pop()*2); // 2*

  label3:
  i++;
  } while(i<imax); // (LOOP) 0xffdc

  Push(0xcc32);
  MODULE(); // MODULE
  UNK_0xe888(); // UNK_0xe888
  return;

  label1:
  Push(1); // 1
  _0MESS(); // 0MESS
  UNK_0xe80a(); // UNK_0xe80a
  Push(0x0010);
  _eq_(); // =
  if (Pop() == 0) goto label4;
  Push(1); // 1
  Push(0x001b);
  CMESS(); // CMESS
  PRINT("NO POD BAYS AVAILABLE", 21); // (.")
  _ex_CRS(); // !CRS
  goto label5;

  label4:
  UNK_0xe746(); // UNK_0xe746

  label5:
  UNK_0xe866(); // UNK_0xe866
  UNK_0xe732(); // UNK_0xe732
}


// ================================================
// 0xee78: WORD '#>BUY' codep=0x4b3b parp=0xee82
// ================================================
// 0xee82: db 0x03 0x00 0x48 0x3a 0x00 0x00 0xde 0xed 0x06 0x00 0x26 0xe9 0x07 0x00 0xaa 0xe9 '  H:      &     '

// ================================================
// 0xee92: WORD 'UNK_0xee94' codep=0x224c parp=0xee94
// ================================================

void UNK_0xee94() // UNK_0xee94
{
  Push(pp_UNK_0xea76); // UNK_0xea76
  Push(pp_UNK_0xe7ba); // UNK_0xe7ba
  Push(Read16(Pop())); // @
  Push(Pop()-1); // 1-
  Push(0x000a);
  Push(Pop() * Pop()); // *
  Push(Pop() + Pop()); // +
  Push(cc__4); // 4
  Push(pp_OCRS); // OCRS
  Push(Read16(Pop())); // @
  _dash_(); // -
  Push(Pop()*2); // 2*
  Push(Pop() + Pop()); // +
  Push(Read16(Pop())); // @
  Push(Read16(sp)); // DUP
  Push(0x0064);
  U_star_(); // U*
  UNK_0xe714(); // UNK_0xe714
  if (Pop() == 0) goto label1;
  Push(0x0064);
  U_star_(); // U*
  DNEGATE(); // DNEGATE
  UNK_0xe71e(); // UNK_0xe71e
  Push(pp_OCRS); // OCRS
  Push(Read16(Pop())); // @
  Push(Pop()+1); // 1+
  Push(pp_UNK_0xe7ba); // UNK_0xe7ba
  Push(Read16(Pop())); // @
  UNK_0xec6a(); // UNK_0xec6a
  SWAP(); // SWAP
  Pop(); // DROP
  Push(0x0064);
  OVER(); // OVER
  C_ex_(); // C!
  Push(Pop()+1); // 1+
  C_ex_(); // C!
  Push(pp_OCRS); // OCRS
  Push(Read16(Pop())); // @
  Push(Pop()+1); // 1+
  Push(0x01f4);
  Push(Pop() * Pop()); // *
  Push(pp_UNK_0xe7ba); // UNK_0xe7ba
  Push(Read16(Pop())); // @
  _gt_R(); // >R
  Push(h); // I
  Push(cc__3); // 3
  _eq_(); // =
  if (Pop() == 0) goto label2;
  Func8("UNK_0xe78c");
  Push(Read16(Pop())); // @
  Push(0x00fa);
  MAX(); // MAX
  Func8("UNK_0xe78c");
  _ex_(); // !
  Push(Pop()>>1); // 2/
  Func8("UNK_0xe78c");
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  Push(Read16(sp)); // DUP
  Func8("UNK_0xe75a");
  UNK_0xe7f0(); // UNK_0xe7f0
  Push(Read16(sp)); // DUP
  Push(Pop()+1); // 1+
  Push(0x00fa);
  Push(Pop() * Pop()); // *
  _star__slash_(); // */
  Func8("UNK_0xe75a");
  Push(Pop()+1); // 1+
  C_ex_(); // C!

  label2:
  R_gt_(); // R>
  UNK_0xec88(); // UNK_0xec88
  Push(0xcc44);
  MODULE(); // MODULE
  UNK_0xeb07(); // UNK_0xeb07
  UNK_0xe750(); // UNK_0xe750
  Push(1); // 1
  return;

  label1:
  Pop(); // DROP
  UNK_0xe746(); // UNK_0xe746
  Push(pp_XORMODE); // XORMODE
  ON(); // ON
  Push(0); // 0
}


// ================================================
// 0xef50: WORD 'UNK_0xef52' codep=0x224c parp=0xef52
// ================================================

void UNK_0xef52() // UNK_0xef52
{

  label6:
  XYSCAN(); // XYSCAN
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label1;
  Push(cc__dash_1); // -1
  Push(Pop() * Pop()); // *
  Push(pp_NCRS); // NCRS
  _plus__ex_(); // +!
  Push(pp_NCRS); // NCRS
  Push(Read16(Pop())); // @
  Push(pp_OCRS); // OCRS
  Push(Read16(Pop())); // @
  _eq_(); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(pp_NCRS); // NCRS
  Push(Read16(Pop())); // @
  Push(0); // 0
  Push(cc__5); // 5
  WITHIN(); // WITHIN
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label2;
  BLT(); // BLT
  Push(0x0056);
  Push(pp_NCRS); // NCRS
  Push(Read16(Pop())); // @
  Push(Read16(sp)); // DUP
  Push(pp_OCRS); // OCRS
  _ex_(); // !
  Push(0x000a);
  Push(Pop() * Pop()); // *
  _dash_(); // -
  Push(pp_YBLT); // YBLT
  _ex_(); // !
  BLT(); // BLT
  goto label3;

  label2:
  Push(pp_OCRS); // OCRS
  Push(Read16(Pop())); // @
  Push(pp_NCRS); // NCRS
  _ex_(); // !

  label3:
  Push(0); // 0
  goto label4;

  label1:
  Pop(); // DROP
  Push(1); // 1

  label4:
  _ask_TRIG(); // ?TRIG
  if (Pop() == 0) goto label5;
  Pop(); // DROP
  UNK_0xee94(); // UNK_0xee94

  label5:
  if (Pop() == 0) goto label6;
  Push(pp_XORMODE); // XORMODE
  ON(); // ON
  Push(pp_FQUIT); // FQUIT
  _099(); // 099
}


// ================================================
// 0xefca: WORD 'UNK_0xefcc' codep=0x224c parp=0xefcc
// ================================================

void UNK_0xefcc() // UNK_0xefcc
{
  Push(pp_OCRS); // OCRS
  Push(Read16(Pop())); // @
  Push(Read16(sp)); // DUP
  Push(1); // 1
  Push(cc__6); // 6
  WITHIN(); // WITHIN
  if (Pop() == 0) goto label1;
  Push(Read16(sp)); // DUP
  Push(pp_UNK_0xe7ba); // UNK_0xe7ba
  _ex_(); // !
  UNK_0xedd2(); // UNK_0xedd2
  if (Pop() == 0) goto label2;
  Push(1); // 1
  _0MESS(); // 0MESS
  Push(1); // 1
  Push(0x000e);
  CMESS(); // CMESS
  PRINT("DE-EQUIP FIRST", 14); // (.")
  _ex_CRS(); // !CRS
  UNK_0xe866(); // UNK_0xe866
  UNK_0xe732(); // UNK_0xe732
  goto label3;

  label2:
  _at_CRS(); // @CRS
  Push(0x000e);
  Push(0x0056);
  POS_dot_(); // POS.
  Push(0x001d);
  Push(pp_WBLT); // WBLT
  _ex_(); // !
  Push(pp_NCRS); // NCRS
  _099(); // 099
  Push(pp_OCRS); // OCRS
  _099(); // 099
  Push(pp_XORMODE); // XORMODE
  ON(); // ON
  Push(pp_CRSCOLO); // CRSCOLO
  Push(Read16(Pop())); // @
  _ex_COLOR(); // !COLOR
  BLT(); // BLT
  UNK_0xef52(); // UNK_0xef52
  BLT(); // BLT
  _ex_CRS(); // !CRS

  label3:
  return;

  label1:
  switch(Pop()) // #>BUY
  {
  case 0:
    NOP(); // NOP
    break;
  case 6:
    UNK_0xedde(); // UNK_0xedde
    break;
  case 7:
    UNK_0xe926(); // UNK_0xe926
    break;
  }
}


// ================================================
// 0xf045: WORD 'UNK_0xf047' codep=0x224c parp=0xf047
// ================================================

void UNK_0xf047() // UNK_0xf047
{
  Func8("UNK_0xe791");
  Push(Read16(Pop())); // @
  Push(0x01f3);
  _gt_(); // >
  Func8("UNK_0xe77d");
  Push(Read16(Pop())); // @
  Push(Pop() & Pop()); // AND
  if (Pop() == 0) goto label1;
  Push(1); // 1
  Push(0x0010);

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(i); // I
  BIT(); // BIT
  Func8("UNK_0xe77d");
  Push(Read16(Pop())); // @
  Push(Pop() & Pop()); // AND
  Func8("UNK_0xe791");
  Push(Read16(Pop())); // @
  Push(0x01f3);
  _gt_(); // >
  Push(Pop() * Pop()); // *
  if (Pop() == 0) goto label2;
  Push(i); // I
  BIT(); // BIT
  Push(cc__dash_1); // -1
  Push(Pop() * Pop()); // *
  Func8("UNK_0xe77d");
  _plus__ex_(); // +!
  Push(0x01f4); Pust(0x0000);
  UNK_0xe71e(); // UNK_0xe71e
  Push(0xcc32);
  MODULE(); // MODULE
  UNK_0xe888(); // UNK_0xe888
  UNK_0xe750(); // UNK_0xe750
  LEAVE(); // LEAVE
  Push(0xfe0c);
  Func8("UNK_0xe791");
  _plus__ex_(); // +!

  label2:
  Push(cc__dash_1); // -1
  int step = Pop();
  i += step;
  } while(((step>=0) && (i<imax)) || ((step<0) && (i>imax))); // (+LOOP) 0xffba

  return;

  label1:
  Func8("UNK_0xe77d");
  Push(Read16(Pop())); // @
  if (Pop() == 0) return;
  Push(1); // 1
  _0MESS(); // 0MESS
  Push(1); // 1
  Push(0x0010);
  CMESS(); // CMESS
  PRINT("POD IS NOT EMPTY", 16); // (.")
  _ex_CRS(); // !CRS
  UNK_0xe866(); // UNK_0xe866
  UNK_0xe732(); // UNK_0xe732
}


// ================================================
// 0xf0de: WORD '#>SELL' codep=0x4b3b parp=0xf0e9
// ================================================
// 0xf0e9: db 0x03 0x00 0x48 0x3a 0x00 0x00 0x47 0xf0 0x06 0x00 0x2e 0xea 0x07 0x00 0x52 0xea '  H:  G   .   R '

// ================================================
// 0xf0f9: WORD 'UNK_0xf0fb' codep=0x224c parp=0xf0fb
// ================================================

void UNK_0xf0fb() // UNK_0xf0fb
{
  Push(pp_OCRS); // OCRS
  Push(Read16(Pop())); // @
  Push(Read16(sp)); // DUP
  Push(1); // 1
  Push(cc__6); // 6
  WITHIN(); // WITHIN
  if (Pop() == 0) goto label1;
  Push(pp_UNK_0xec9c); // UNK_0xec9c
  _2_at_(); // 2@
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label2;
  UNK_0xec6a(); // UNK_0xec6a
  Push(Read16(sp)); // DUP
  Func8("UNK_0xe75a");
  _eq_(); // =
  OVER(); // OVER
  Push(Read8(Pop())&0xFF); // C@
  Push(Pop() * Pop()); // *
  SWAP(); // SWAP
  _ex_(); // !
  Pop(); // DROP
  Push(pp_OCRS); // OCRS
  Push(Read16(Pop())); // @
  Push(cc__3); // 3
  _eq_(); // =
  Push(0x00fa);
  Push(Pop() * Pop()); // *
  Func8("UNK_0xe78c");
  Push(Read16(Pop())); // @
  MIN(); // MIN
  Push(pp_OCRS); // OCRS
  Push(Read16(Pop())); // @
  UNK_0xec88(); // UNK_0xec88
  Push(pp_UNK_0xec9c); // UNK_0xec9c
  _2_at_(); // 2@
  UNK_0xe71e(); // UNK_0xe71e
  Push(0xcc44);
  MODULE(); // MODULE
  UNK_0xeb07(); // UNK_0xeb07
  UNK_0xe750(); // UNK_0xe750
  Push(pp_OCRS); // OCRS
  Push(Read16(Pop())); // @
  UNK_0xedb2(); // UNK_0xedb2
  goto label3;

  label2:
  Pop(); // DROP

  label3:
  return;

  label1:
  switch(Pop()) // #>SELL
  {
  case 0:
    NOP(); // NOP
    break;
  case 6:
    UNK_0xf047(); // UNK_0xf047
    break;
  case 7:
    UNK_0xea2e(); // UNK_0xea2e
    break;
  }
  Push(pp_OCRS); // OCRS
  Push(Read16(Pop())); // @
  UNK_0xedb2(); // UNK_0xedb2
}


// ================================================
// 0xf16d: WORD 'UNK_0xf16f' codep=0x1d29 parp=0xf16f
// ================================================
// 0xf16f: db 0x3a 0x20 ': '

// ================================================
// 0xf171: WORD 'UNK_0xf173' codep=0x224c parp=0xf173
// ================================================

void UNK_0xf173() // UNK_0xf173
{
  UNK_0xe732(); // UNK_0xe732
  SetColor("BLUE");
  UNK_0xe826(); // UNK_0xe826
  _at_CRS(); // @CRS
  Push(pp_NCRS); // NCRS
  _099(); // 099
  Push(pp_OCRS); // OCRS
  _099(); // 099
  Push(pp_UNK_0xe903); // UNK_0xe903
  BLD_dash_CRS(); // BLD-CRS
  Push(0); // 0
  Push(pp_UNK_0xf16f); // UNK_0xf16f
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  UNK_0xec33(); // UNK_0xec33
  goto label2;

  label1:
  UNK_0xedb2(); // UNK_0xedb2

  label2:
  XYSCAN(); // XYSCAN
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label3;
  Push(cc__dash_1); // -1
  Push(Pop() * Pop()); // *
  Push(pp_NCRS); // NCRS
  _plus__ex_(); // +!
  Push(pp_UNK_0xe903); // UNK_0xe903
  SET_dash_CRS(); // SET-CRS
  if (Pop() == 0) goto label4;
  Push(pp_OCRS); // OCRS
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xf16f); // UNK_0xf16f
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label5;
  UNK_0xec33(); // UNK_0xec33
  goto label4;

  label5:
  UNK_0xedb2(); // UNK_0xedb2

  label4:
  _ask_TRIG(); // ?TRIG
  if (Pop() == 0) goto label6;
  Push(pp_UNK_0xf16f); // UNK_0xf16f
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label7;
  UNK_0xefcc(); // UNK_0xefcc
  goto label6;

  label7:
  UNK_0xf0fb(); // UNK_0xf0fb

  label6:
  goto label8;

  label3:
  Pop(); // DROP

  label8:
  _ask_QUIT(); // ?QUIT
  if (Pop() == 0) goto label2;
  _gt_1FONT(); // >1FONT
  UNK_0xebcb(); // UNK_0xebcb
  SetColor("BLACK");
  UNK_0xe826(); // UNK_0xe826
  Push(pp_UNK_0xe903); // UNK_0xe903
  BLD_dash_CRS(); // BLD-CRS
  _ex_CRS(); // !CRS
  Push(1); // 1
  _0MESS(); // 0MESS
}


// ================================================
// 0xf1fb: WORD 'UNK_0xf1fd' codep=0x224c parp=0xf1fd
// ================================================

void UNK_0xf1fd() // UNK_0xf1fd
{
  _gt_R(); // >R
  Push(h); // I
  switch(Pop()) // (PARTADDR)
  {
  case 1:
    UNK_0xe778(); // UNK_0xe778
    break;
  case 2:
    UNK_0xe75f(); // UNK_0xe75f
    break;
  case 3:
    UNK_0xe76e(); // UNK_0xe76e
    break;
  case 4:
    UNK_0xe75a(); // UNK_0xe75a
    break;
  }
  UNK_0xe7f0(); // UNK_0xe7f0
  if (Read16(sp) != 0) Push(Read16(sp)); // ?DUP
  if (Pop() == 0) goto label1;
  Push(0x000a);
  SWAP(); // SWAP
  Push(Pop()*2); // 2*
  _dash_(); // -
  Push(pp_UNK_0xea76); // UNK_0xea76
  Push(Pop() + Pop()); // +
  Push(h); // I
  Push(Pop()-1); // 1-
  Push(0x000a);
  Push(Pop() * Pop()); // *
  Push(Pop() + Pop()); // +
  Push(Read16(Pop())); // @
  Push(0x0064);
  Push(h); // I
  switch(Pop()) // (PARTADDR)
  {
  case 1:
    UNK_0xe778(); // UNK_0xe778
    break;
  case 2:
    UNK_0xe75f(); // UNK_0xe75f
    break;
  case 3:
    UNK_0xe76e(); // UNK_0xe76e
    break;
  case 4:
    UNK_0xe75a(); // UNK_0xe75a
    break;
  }
  UNK_0xe7d4(); // UNK_0xe7d4
  _dash_(); // -
  Push(0x0019);
  Push(0x0064);
  _star__slash_(); // */
  U_star_(); // U*
  goto label2;

  label1:
  Push2Words("NULL");

  label2:
  R_gt_(); // R>
  Pop(); // DROP
}


// ================================================
// 0xf24b: WORD 'UNK_0xf24d' codep=0x224c parp=0xf24d
// ================================================

void UNK_0xf24d() // UNK_0xf24d
{
  Push2Words("NULL");
  Push(cc__6); // 6
  Push(1); // 1

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(i); // I
  UNK_0xf1fd(); // UNK_0xf1fd
  D_plus_(); // D+
  i++;
  } while(i<imax); // (LOOP) 0xfff8

  Push(cc__3); // 3
  UNK_0xf1fd(); // UNK_0xf1fd
  D_dash_(); // D-
  Push(0x0064);
  Func8("UNK_0xe75a");
  UNK_0xe7d4(); // UNK_0xe7d4
  _dash_(); // -
  Push(0x003c);
  U_star_(); // U*
  D_plus_(); // D+
  Push(0x00c8);
  Func8("UNK_0xe764");
  UNK_0xe7d4(); // UNK_0xe7d4
  Func8("UNK_0xe769");
  UNK_0xe7d4(); // UNK_0xe7d4
  Push(Pop() + Pop()); // +
  _dash_(); // -
  Push(0x0019);
  U_star_(); // U*
  D_plus_(); // D+
  Func8("UNK_0xe75a");
  UNK_0xe7f0(); // UNK_0xe7f0
  Push(Pop()+1); // 1+
  Push(0x003c);
  Push(Pop() * Pop()); // *
  Func8("UNK_0xe78c");
  Push(Read16(Pop())); // @
  _dash_(); // -
  Push(0); // 0
  MAX(); // MAX
  Push(2); // 2
  U_star_(); // U*
  D_plus_(); // D+
}


// ================================================
// 0xf2ad: WORD 'UNK_0xf2af' codep=0x224c parp=0xf2af
// ================================================

void UNK_0xf2af() // UNK_0xf2af
{
  _gt_R(); // >R
  _gt_R(); // >R
  Push(0); // 0
  Push(0x0026);
  CMESS(); // CMESS
  PRINT("COST TO REPAIR ENTIRE SHIP: ", 28); // (.")
  R_gt_(); // R>
  R_gt_(); // R>
  D_dot_(); // D.
  PRINT(" SP", 3); // (.")
  _ex_CRS(); // !CRS
}


// ================================================
// 0xf2ea: WORD 'UNK_0xf2ec' codep=0x224c parp=0xf2ec
// ================================================

void UNK_0xf2ec() // UNK_0xf2ec
{
  UNK_0xf2af(); // UNK_0xf2af
  Push(1); // 1
  Push(0x0021);
  CMESS(); // CMESS
  PRINT("SHALL WE REPAIR THE SHIP?  [N Y]", 32); // (.")
  _ex_CRS(); // !CRS
  Y_slash_N(); // Y/N
}


// ================================================
// 0xf31f: WORD 'UNK_0xf321' codep=0x224c parp=0xf321
// ================================================

void UNK_0xf321() // UNK_0xf321
{
  DNEGATE(); // DNEGATE
  UNK_0xe71e(); // UNK_0xe71e
  Func8("UNK_0xe782");
  Push(cc__7); // 7
  Push(0); // 0
  FILL(); // FILL
  Push(pp__ask_REPAIR); // ?REPAIR
  _099(); // 099
  Push(0x000e);
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Func8("UNK_0xe75a");
  Push(i); // I
  Push(Pop() + Pop()); // +
  _gt_R(); // >R
  Push(i); // I
  UNK_0xe7f0(); // UNK_0xe7f0
  Push(i); // I
  Push(Pop()+1); // 1+
  C_ex_(); // C!
  Push(0x0064);
  R_gt_(); // R>
  C_ex_(); // C!
  Push(2); // 2
  int step = Pop();
  i += step;
  } while(((step>=0) && (i<imax)) || ((step<0) && (i>imax))); // (+LOOP) 0xffe2

  Func8("UNK_0xe75a");
  UNK_0xe7f0(); // UNK_0xe7f0
  Push(Pop()+1); // 1+
  Push(0x00fa);
  Push(Pop() * Pop()); // *
  Func8("UNK_0xe78c");
  _ex_(); // !
}


// ================================================
// 0xf36b: WORD 'UNK_0xf36d' codep=0x224c parp=0xf36d
// ================================================

void UNK_0xf36d() // UNK_0xf36d
{
  Push(0); // 0
  _0MESS(); // 0MESS
  Push(1); // 1
  _0MESS(); // 0MESS
  UNK_0xf24d(); // UNK_0xf24d
  _2DUP(); // 2DUP
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label1;
  _2DUP(); // 2DUP
  UNK_0xe714(); // UNK_0xe714
  if (Pop() == 0) goto label2;
  _2DUP(); // 2DUP
  UNK_0xf2ec(); // UNK_0xf2ec
  if (Pop() == 0) goto label3;
  UNK_0xf321(); // UNK_0xf321
  goto label4;

  label3:
  Pop(); Pop();// 2DROP

  label4:
  goto label5;

  label2:
  UNK_0xf2af(); // UNK_0xf2af
  Push(1); // 1
  Push(0x0012);
  CMESS(); // CMESS
  UNK_0xe73c(); // UNK_0xe73c
  _ex_CRS(); // !CRS
  UNK_0xe866(); // UNK_0xe866

  label5:
  goto label6;

  label1:
  Pop(); Pop();// 2DROP
  Push(0); // 0
  Push(0x0015);
  CMESS(); // CMESS
  PRINT("NO REPAIRS ARE NEEDED", 21); // (.")
  _ex_CRS(); // !CRS
  UNK_0xe866(); // UNK_0xe866

  label6:
  Push(1); // 1
  _0MESS(); // 0MESS
  UNK_0xe750(); // UNK_0xe750
}


// ================================================
// 0xf3dd: WORD 'UNK_0xf3df' codep=0x224c parp=0xf3df
// ================================================

void UNK_0xf3df() // UNK_0xf3df
{
  PRINT("TYPE", 4); // (.")
  Func14("TYPE"); // call of word 0x2690
  PRINT("SHIP NAME: ISS ", 15); // (.")
}


// ================================================
// 0xf3fc: WORD 'UNK_0xf3fe' codep=0x224c parp=0xf3fe
// ================================================

void UNK_0xf3fe() // UNK_0xf3fe
{
  Push(0); // 0
  SWAP(); // SWAP
  CMESS(); // CMESS
  PRINT("SHIP IS NAMED: ISS ", 19); // (.")
  Func8("%NAME");
  _do__dot_(); // $.
  _ex_CRS(); // !CRS
}


// ================================================
// 0xf422: WORD 'UNK_0xf424' codep=0x224c parp=0xf424
// ================================================

void UNK_0xf424() // UNK_0xf424
{
  Push(pp__dash_AIN); // -AIN
  _099(); // 099
  Push(0); // 0
  _0MESS(); // 0MESS
  Push(1); // 1
  _0MESS(); // 0MESS
  Func8("%NAME");
  Push(Read8(Pop())&0xFF); // C@
  if (Read16(sp) != 0) Push(Read16(sp)); // ?DUP
  if (Pop() == 0) goto label1;
  Push(0x0013);
  Push(Pop() + Pop()); // +
  UNK_0xf3fe(); // UNK_0xf3fe
  Push(1); // 1
  Push(0x0026);
  CMESS(); // CMESS

  UNK_0x3f09(" NEW ");
  goto label2;

  label1:
  Push(0); // 0
  Push(0x0022);
  CMESS(); // CMESS

  UNK_0x3f09(" ");

  label2:
  UNK_0xf3df(); // UNK_0xf3df
  Push(pp_XORMODE); // XORMODE
  ON(); // ON
  Push(pp__dash_AIN); // -AIN
  _099(); // 099
  Push(0x000d);
  UNK_0xe728(); // UNK_0xe728
  Func8("%NAME");
  _do__ex_(); // $!
  _ex_CRS(); // !CRS
  Push(0); // 0
  _0MESS(); // 0MESS
  Push(1); // 1
  _0MESS(); // 0MESS
  Func8("%NAME");
  Push(Read8(Pop())&0xFF); // C@
  Push(0x0013);
  Push(Pop() + Pop()); // +
  UNK_0xf3fe(); // UNK_0xf3fe
  UNK_0xe866(); // UNK_0xe866
  UNK_0xe750(); // UNK_0xe750
}


// ================================================
// 0xf492: WORD 'UNK_0xf494' codep=0x224c parp=0xf494
// ================================================

void UNK_0xf494() // UNK_0xf494
{
  Push(pp_UNK_0xf16f); // UNK_0xf16f
  ON(); // ON
  UNK_0xf173(); // UNK_0xf173
}


// ================================================
// 0xf49c: WORD 'UNK_0xf49e' codep=0x224c parp=0xf49e
// ================================================

void UNK_0xf49e() // UNK_0xf49e
{
  Push(pp_UNK_0xf16f); // UNK_0xf16f
  _099(); // 099
  UNK_0xf173(); // UNK_0xf173
}


// ================================================
// 0xf4a6: WORD 'CONFIG-FUNCTION' codep=0x4b3b parp=0xf4ba
// ================================================
// 0xf4ba: db 0x05 0x00 0x48 0x3a 0x00 0x00 0x94 0xf4 0x01 0x00 0x9e 0xf4 0x02 0x00 0x6d 0xf3 0x03 0x00 0x24 0xf4 0x04 0x00 0x09 0x13 '  H:          m   $     '

// ================================================
// 0xf4d2: WORD '(U-CONFIG)' codep=0x224c parp=0xf4e1
// ================================================
// entry

void _ro_U_dash_CONFIG_rc_() // (U-CONFIG)
{
  Push(0xc8c3);
  MODULE(); // MODULE
  Push2Words("*SHIP");
  _gt_C_plus_S(); // >C+S
  UNK_0xe6f6(); // UNK_0xe6f6
  SetColor("WHITE");
  SetColor("GREY1");
  SetColor("DK-GREE");
  _ask_MRC(); // ?MRC
  Push(pp_CRSCOLO); // CRSCOLO
  _ex_(); // !
  Push(pp_OCRS); // OCRS
  _099(); // 099
  Push(pp_NCRS); // NCRS
  _099(); // 099
  _gt_HIDDEN(); // >HIDDEN
  DARK(); // DARK
  Push(0xcc68);
  MODULE(); // MODULE
  UNK_0xeb07(); // UNK_0xeb07
  Push(pp_UNK_0xe8ec); // UNK_0xe8ec
  BLD_dash_CRS(); // BLD-CRS
  _gt_DISPLA(); // >DISPLA
  SCR_dash_RES(); // SCR-RES

  label3:
  XYSCAN(); // XYSCAN
  Push(pp_NCRS); // NCRS
  _plus__ex_(); // +!
  Pop(); // DROP
  Push(pp_UNK_0xe8ec); // UNK_0xe8ec
  SET_dash_CRS(); // SET-CRS
  Pop(); // DROP
  _ask_TRIG(); // ?TRIG
  if (Pop() == 0) goto label1;
  Push(0); // 0
  Push(pp_OCRS); // OCRS
  Push(Read16(Pop())); // @
  switch(Pop()) // CONFIG-FUNCTION
  {
  case 0:
    NOP(); // NOP
    break;
  case 1:
    UNK_0xf494(); // UNK_0xf494
    break;
  case 2:
    UNK_0xf49e(); // UNK_0xf49e
    break;
  case 3:
    UNK_0xf36d(); // UNK_0xf36d
    break;
  case 4:
    UNK_0xf424(); // UNK_0xf424
    break;
  }
  goto label2;

  label1:
  Push(0); // 0

  label2:
  if (Pop() == 0) goto label3;
  Push(1); // 1
  UNK_0xe700(); // UNK_0xe700
  ICLOSE(); // ICLOSE
}

// 0xf543: db 0x43 0x4f 0x4e 0x46 0x49 0x47 0x2d 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x00 'CONFIG-______________________ '
  