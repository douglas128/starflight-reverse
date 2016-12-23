// ====== OVERLAY 'MODGAME' ======
// store offset = 0xdcf0
// overlay size   = 0x1870

#include"cpu.h"
#include"starflt2.h"


// =================================
// =========== DICTIONARY ==========
// =================================
// 1869:      UNK_0x3f09  codep:0x224c parp:0x3f09 size:0x9dff C-string:'UNK_0x3f09'
// 1870:      UNK_0xdd0a  codep:0x2214 parp:0xdd0a size:0x0002 C-string:'UNK_0xdd0a'
// 1871:      UNK_0xdd0e  codep:0x2214 parp:0xdd0e size:0x0002 C-string:'UNK_0xdd0e'
// 1872:      UNK_0xdd12  codep:0x2214 parp:0xdd12 size:0x0002 C-string:'UNK_0xdd12'
// 1873:      UNK_0xdd16  codep:0x2214 parp:0xdd16 size:0x0002 C-string:'UNK_0xdd16'
// 1874:      UNK_0xdd1a  codep:0x2214 parp:0xdd1a size:0x000a C-string:'UNK_0xdd1a'
// 1875:      UNK_0xdd26  codep:0x2214 parp:0xdd26 size:0x0002 C-string:'UNK_0xdd26'
// 1876:      UNK_0xdd2a  codep:0x2214 parp:0xdd2a size:0x0002 C-string:'UNK_0xdd2a'
// 1877:      UNK_0xdd2e  codep:0x1d29 parp:0xdd2e size:0x0002 C-string:'UNK_0xdd2e'
// 1878:      UNK_0xdd32  codep:0x1d29 parp:0xdd32 size:0x00e2 C-string:'UNK_0xdd32'
// 1879:      UNK_0xde16  codep:0x1d29 parp:0xde16 size:0x0002 C-string:'UNK_0xde16'
// 1880:      UNK_0xde1a  codep:0x1d29 parp:0xde1a size:0x0002 C-string:'UNK_0xde1a'
// 1881:      UNK_0xde1e  codep:0x224c parp:0xde1e size:0x000c C-string:'UNK_0xde1e'
// 1882:      UNK_0xde2c  codep:0x224c parp:0xde2c size:0x0010 C-string:'UNK_0xde2c'
// 1883:      UNK_0xde3e  codep:0x1d29 parp:0xde3e size:0x0002 C-string:'UNK_0xde3e'
// 1884:      UNK_0xde42  codep:0x1d29 parp:0xde42 size:0x0002 C-string:'UNK_0xde42'
// 1885:      UNK_0xde46  codep:0x1d29 parp:0xde46 size:0x0002 C-string:'UNK_0xde46'
// 1886:      UNK_0xde4a  codep:0x1d29 parp:0xde4a size:0x0002 C-string:'UNK_0xde4a'
// 1887:      UNK_0xde4e  codep:0x1d29 parp:0xde4e size:0x0002 C-string:'UNK_0xde4e'
// 1888:      UNK_0xde52  codep:0x1d29 parp:0xde52 size:0x0002 C-string:'UNK_0xde52'
// 1889:      UNK_0xde56  codep:0x1d29 parp:0xde56 size:0x0002 C-string:'UNK_0xde56'
// 1890:      UNK_0xde5a  codep:0x1d29 parp:0xde5a size:0x0002 C-string:'UNK_0xde5a'
// 1891:      UNK_0xde5e  codep:0x1d29 parp:0xde5e size:0x0002 C-string:'UNK_0xde5e'
// 1892:      UNK_0xde62  codep:0x1d29 parp:0xde62 size:0x0006 C-string:'UNK_0xde62'
// 1893:      UNK_0xde6a  codep:0x1d29 parp:0xde6a size:0x0002 C-string:'UNK_0xde6a'
// 1894:      UNK_0xde6e  codep:0x1d29 parp:0xde6e size:0x0002 C-string:'UNK_0xde6e'
// 1895:      UNK_0xde72  codep:0x1d29 parp:0xde72 size:0x0002 C-string:'UNK_0xde72'
// 1896:      UNK_0xde76  codep:0x1d29 parp:0xde76 size:0x0002 C-string:'UNK_0xde76'
// 1897:      UNK_0xde7a  codep:0x1d29 parp:0xde7a size:0x0002 C-string:'UNK_0xde7a'
// 1898:      UNK_0xde7e  codep:0x224c parp:0xde7e size:0x007a C-string:'UNK_0xde7e'
// 1899:      UNK_0xdefa  codep:0x2214 parp:0xdefa size:0x0002 C-string:'UNK_0xdefa'
// 1900:            HOST  codep:0x53f7 parp:0xdf05 size:0x001e C-string:'HOST'
// 1901:      UNK_0xdf25  codep:0x2214 parp:0xdf25 size:0x0002 C-string:'UNK_0xdf25'
// 1902:         VECTORS  codep:0x53f7 parp:0xdf33 size:0x0024 C-string:'VECTORS'
// 1903:      UNK_0xdf59  codep:0x224c parp:0xdf59 size:0x002c C-string:'UNK_0xdf59'
// 1904:      UNK_0xdf87  codep:0x224c parp:0xdf87 size:0x0032 C-string:'UNK_0xdf87'
// 1905:      UNK_0xdfbb  codep:0x224c parp:0xdfbb size:0x0022 C-string:'UNK_0xdfbb'
// 1906:      UNK_0xdfdf  codep:0x224c parp:0xdfdf size:0x0022 C-string:'UNK_0xdfdf'
// 1907:      UNK_0xe003  codep:0x224c parp:0xe003 size:0x0026 C-string:'UNK_0xe003'
// 1908:      UNK_0xe02b  codep:0x1d29 parp:0xe02b size:0x0026 C-string:'UNK_0xe02b'
// 1909:           STARE  codep:0x2214 parp:0xe05b size:0x000d C-string:'STARE'
// 1910:           STARV  codep:0x2214 parp:0xe072 size:0x000d C-string:'STARV'
// 1911:      UNK_0xe081  codep:0x224c parp:0xe081 size:0x005e C-string:'UNK_0xe081'
// 1912:      UNK_0xe0e1  codep:0x224c parp:0xe0e1 size:0x0044 C-string:'UNK_0xe0e1'
// 1913:      UNK_0xe127  codep:0x224c parp:0xe127 size:0x001a C-string:'UNK_0xe127'
// 1914:      UNK_0xe143  codep:0x224c parp:0xe143 size:0x001d C-string:'UNK_0xe143'
// 1915:      UNK_0xe162  codep:0x224c parp:0xe162 size:0x0018 C-string:'UNK_0xe162'
// 1916:      UNK_0xe17c  codep:0x224c parp:0xe17c size:0x001b C-string:'UNK_0xe17c'
// 1917:      UNK_0xe199  codep:0x224c parp:0xe199 size:0x000a C-string:'UNK_0xe199'
// 1918:      UNK_0xe1a5  codep:0x224c parp:0xe1a5 size:0x0008 C-string:'UNK_0xe1a5'
// 1919:      UNK_0xe1af  codep:0x224c parp:0xe1af size:0x0094 C-string:'UNK_0xe1af'
// 1920:      UNK_0xe245  codep:0x224c parp:0xe245 size:0x000a C-string:'UNK_0xe245'
// 1921:      UNK_0xe251  codep:0x224c parp:0xe251 size:0x0016 C-string:'UNK_0xe251'
// 1922:      UNK_0xe269  codep:0x224c parp:0xe269 size:0x001c C-string:'UNK_0xe269'
// 1923:      UNK_0xe287  codep:0x224c parp:0xe287 size:0x0016 C-string:'UNK_0xe287'
// 1924:      UNK_0xe29f  codep:0x224c parp:0xe29f size:0x0040 C-string:'UNK_0xe29f'
// 1925:      UNK_0xe2e1  codep:0x224c parp:0xe2e1 size:0x0028 C-string:'UNK_0xe2e1'
// 1926:      UNK_0xe30b  codep:0x224c parp:0xe30b size:0x0042 C-string:'UNK_0xe30b'
// 1927:      UNK_0xe34f  codep:0x224c parp:0xe34f size:0x000e C-string:'UNK_0xe34f'
// 1928:      UNK_0xe35f  codep:0x224c parp:0xe35f size:0x006c C-string:'UNK_0xe35f'
// 1929:      UNK_0xe3cd  codep:0x224c parp:0xe3cd size:0x000a C-string:'UNK_0xe3cd'
// 1930:      UNK_0xe3d9  codep:0x224c parp:0xe3d9 size:0x0034 C-string:'UNK_0xe3d9'
// 1931:      UNK_0xe40f  codep:0x224c parp:0xe40f size:0x0020 C-string:'UNK_0xe40f'
// 1932:      UNK_0xe431  codep:0x224c parp:0xe431 size:0x001e C-string:'UNK_0xe431'
// 1933:      UNK_0xe451  codep:0x224c parp:0xe451 size:0x000c C-string:'UNK_0xe451'
// 1934:      UNK_0xe45f  codep:0x224c parp:0xe45f size:0x00de C-string:'UNK_0xe45f'
// 1935:      UNK_0xe53f  codep:0x224c parp:0xe53f size:0x0030 C-string:'UNK_0xe53f'
// 1936:      UNK_0xe571  codep:0x224c parp:0xe571 size:0x0099 C-string:'UNK_0xe571'
// 1937:      UNK_0xe60c  codep:0x224c parp:0xe60c size:0x0044 C-string:'UNK_0xe60c'
// 1938:      UNK_0xe652  codep:0x224c parp:0xe652 size:0x0020 C-string:'UNK_0xe652'
// 1939:      UNK_0xe674  codep:0x224c parp:0xe674 size:0x0006 C-string:'UNK_0xe674'
// 1940:      UNK_0xe67c  codep:0x224c parp:0xe67c size:0x0006 C-string:'UNK_0xe67c'
// 1941:      UNK_0xe684  codep:0x224c parp:0xe684 size:0x0008 C-string:'UNK_0xe684'
// 1942:      UNK_0xe68e  codep:0x224c parp:0xe68e size:0x0014 C-string:'UNK_0xe68e'
// 1943:      UNK_0xe6a4  codep:0x224c parp:0xe6a4 size:0x011b C-string:'UNK_0xe6a4'
// 1944:      UNK_0xe7c1  codep:0x224c parp:0xe7c1 size:0x0062 C-string:'UNK_0xe7c1'
// 1945:      UNK_0xe825  codep:0x224c parp:0xe825 size:0x0028 C-string:'UNK_0xe825'
// 1946:      UNK_0xe84f  codep:0x224c parp:0xe84f size:0x003c C-string:'UNK_0xe84f'
// 1947:      UNK_0xe88d  codep:0x224c parp:0xe88d size:0x0034 C-string:'UNK_0xe88d'
// 1948:      UNK_0xe8c3  codep:0x224c parp:0xe8c3 size:0x0047 C-string:'UNK_0xe8c3'
// 1949:      UNK_0xe90c  codep:0x224c parp:0xe90c size:0x0014 C-string:'UNK_0xe90c'
// 1950:      UNK_0xe922  codep:0x224c parp:0xe922 size:0x002d C-string:'UNK_0xe922'
// 1951:      UNK_0xe951  codep:0x224c parp:0xe951 size:0x0008 C-string:'UNK_0xe951'
// 1952:      UNK_0xe95b  codep:0x224c parp:0xe95b size:0x0078 C-string:'UNK_0xe95b'
// 1953:      UNK_0xe9d5  codep:0x224c parp:0xe9d5 size:0x001e C-string:'UNK_0xe9d5'
// 1954:           PRESE  codep:0x224c parp:0xe9fd size:0x0018 C-string:'PRESE'
// 1955:      UNK_0xea17  codep:0x224c parp:0xea17 size:0x0006 C-string:'UNK_0xea17'
// 1956:      UNK_0xea1f  codep:0x224c parp:0xea1f size:0x0006 C-string:'UNK_0xea1f'
// 1957:      UNK_0xea27  codep:0x224c parp:0xea27 size:0x0008 C-string:'UNK_0xea27'
// 1958:      UNK_0xea31  codep:0x224c parp:0xea31 size:0x000c C-string:'UNK_0xea31'
// 1959:      UNK_0xea3f  codep:0x224c parp:0xea3f size:0x001a C-string:'UNK_0xea3f'
// 1960:      UNK_0xea5b  codep:0x224c parp:0xea5b size:0x0012 C-string:'UNK_0xea5b'
// 1961:      UNK_0xea6f  codep:0x224c parp:0xea6f size:0x0008 C-string:'UNK_0xea6f'
// 1962:      UNK_0xea79  codep:0x224c parp:0xea79 size:0x001c C-string:'UNK_0xea79'
// 1963:      UNK_0xea97  codep:0x224c parp:0xea97 size:0x0014 C-string:'UNK_0xea97'
// 1964:      UNK_0xeaad  codep:0x224c parp:0xeaad size:0x0028 C-string:'UNK_0xeaad'
// 1965:      UNK_0xead7  codep:0x224c parp:0xead7 size:0x0034 C-string:'UNK_0xead7'
// 1966:      UNK_0xeb0d  codep:0x224c parp:0xeb0d size:0x003c C-string:'UNK_0xeb0d'
// 1967:      UNK_0xeb4b  codep:0x224c parp:0xeb4b size:0x0025 C-string:'UNK_0xeb4b'
// 1968:      UNK_0xeb72  codep:0x224c parp:0xeb72 size:0x004f C-string:'UNK_0xeb72'
// 1969:           PRMSA  codep:0xebcb parp:0xebcb size:0x001d C-string:'PRMSA'
// 1970:           PRMLO  codep:0xebf2 parp:0xebf2 size:0x002d C-string:'PRMLO'
// 1971:           RETSA  codep:0xec29 parp:0xec29 size:0x001d C-string:'RETSA'
// 1972:           RETJM  codep:0xec50 parp:0xec50 size:0x0028 C-string:'RETJM'
// 1973:      UNK_0xec7a  codep:0x224c parp:0xec7a size:0x0082 C-string:'UNK_0xec7a'
// 1974:      UNK_0xecfe  codep:0x224c parp:0xecfe size:0x0006 C-string:'UNK_0xecfe'
// 1975:      UNK_0xed06  codep:0x224c parp:0xed06 size:0x0006 C-string:'UNK_0xed06'
// 1976:      UNK_0xed0e  codep:0x224c parp:0xed0e size:0x0006 C-string:'UNK_0xed0e'
// 1977:      UNK_0xed16  codep:0x224c parp:0xed16 size:0x0014 C-string:'UNK_0xed16'
// 1978:      UNK_0xed2c  codep:0x224c parp:0xed2c size:0x000c C-string:'UNK_0xed2c'
// 1979:      UNK_0xed3a  codep:0x224c parp:0xed3a size:0x000c C-string:'UNK_0xed3a'
// 1980:      UNK_0xed48  codep:0x224c parp:0xed48 size:0x0014 C-string:'UNK_0xed48'
// 1981:      UNK_0xed5e  codep:0x224c parp:0xed5e size:0x0014 C-string:'UNK_0xed5e'
// 1982:      UNK_0xed74  codep:0x224c parp:0xed74 size:0x0006 C-string:'UNK_0xed74'
// 1983:      UNK_0xed7c  codep:0x224c parp:0xed7c size:0x001e C-string:'UNK_0xed7c'
// 1984:      UNK_0xed9c  codep:0x224c parp:0xed9c size:0x000a C-string:'UNK_0xed9c'
// 1985:      UNK_0xeda8  codep:0x224c parp:0xeda8 size:0x000c C-string:'UNK_0xeda8'
// 1986:      UNK_0xedb6  codep:0x224c parp:0xedb6 size:0x000c C-string:'UNK_0xedb6'
// 1987:      UNK_0xedc4  codep:0x224c parp:0xedc4 size:0x0024 C-string:'UNK_0xedc4'
// 1988:      UNK_0xedea  codep:0x224c parp:0xedea size:0x000a C-string:'UNK_0xedea'
// 1989:      UNK_0xedf6  codep:0x224c parp:0xedf6 size:0x000e C-string:'UNK_0xedf6'
// 1990:      UNK_0xee06  codep:0x224c parp:0xee06 size:0x000a C-string:'UNK_0xee06'
// 1991:      UNK_0xee12  codep:0x224c parp:0xee12 size:0x0008 C-string:'UNK_0xee12'
// 1992:      UNK_0xee1c  codep:0x224c parp:0xee1c size:0x0022 C-string:'UNK_0xee1c'
// 1993:      UNK_0xee40  codep:0x224c parp:0xee40 size:0x000e C-string:'UNK_0xee40'
// 1994:      UNK_0xee50  codep:0x224c parp:0xee50 size:0x0014 C-string:'UNK_0xee50'
// 1995:      UNK_0xee66  codep:0x224c parp:0xee66 size:0x001a C-string:'UNK_0xee66'
// 1996:      UNK_0xee82  codep:0x224c parp:0xee82 size:0x002e C-string:'UNK_0xee82'
// 1997:           LOAD.  codep:0x224c parp:0xeeba size:0x004a C-string:'LOAD_dot_'
// 1998:      UNK_0xef06  codep:0x224c parp:0xef06 size:0x0016 C-string:'UNK_0xef06'
// 1999:      UNK_0xef1e  codep:0x224c parp:0xef1e size:0x001c C-string:'UNK_0xef1e'
// 2000:      UNK_0xef3c  codep:0x224c parp:0xef3c size:0x0016 C-string:'UNK_0xef3c'
// 2001:      UNK_0xef54  codep:0x224c parp:0xef54 size:0x0032 C-string:'UNK_0xef54'
// 2002:      UNK_0xef88  codep:0x224c parp:0xef88 size:0x0012 C-string:'UNK_0xef88'
// 2003:      UNK_0xef9c  codep:0x224c parp:0xef9c size:0x003f C-string:'UNK_0xef9c'
// 2004:      UNK_0xefdd  codep:0x224c parp:0xefdd size:0x003a C-string:'UNK_0xefdd'
// 2005:      UNK_0xf019  codep:0x224c parp:0xf019 size:0x0121 C-string:'UNK_0xf019'
// 2006:      UNK_0xf13c  codep:0x224c parp:0xf13c size:0x002a C-string:'UNK_0xf13c'
// 2007:      UNK_0xf168  codep:0x224c parp:0xf168 size:0x002a C-string:'UNK_0xf168'
// 2008:      UNK_0xf194  codep:0x224c parp:0xf194 size:0x002f C-string:'UNK_0xf194'
// 2009:      UNK_0xf1c5  codep:0x224c parp:0xf1c5 size:0x002c C-string:'UNK_0xf1c5'
// 2010:           KEY>O  codep:0x4b3b parp:0xf1fb size:0x0014 C-string:'KEY_gt_O'
// 2011:           OPTIO  codep:0x1d29 parp:0xf219 size:0x0002 C-string:'OPTIO'
// 2012:      UNK_0xf21d  codep:0x224c parp:0xf21d size:0x001a C-string:'UNK_0xf21d'
// 2013:           NEW.G  codep:0x224c parp:0xf241 size:0x0016 C-string:'NEW_dot_G'
// 2014:      UNK_0xf259  codep:0x224c parp:0xf259 size:0x00fd C-string:'UNK_0xf259'
// 2015:      UNK_0xf358  codep:0x224c parp:0xf358 size:0x0016 C-string:'UNK_0xf358'
// 2016:      UNK_0xf370  codep:0x224c parp:0xf370 size:0x001c C-string:'UNK_0xf370'
// 2017:      UNK_0xf38e  codep:0x224c parp:0xf38e size:0x0006 C-string:'UNK_0xf38e'
// 2018:      UNK_0xf396  codep:0x224c parp:0xf396 size:0x001c C-string:'UNK_0xf396'
// 2019:         GAMEO_2  codep:0x4b3b parp:0xf3bc size:0x0014 C-string:'GAMEO_2'
// 2020:      UNK_0xf3d2  codep:0x224c parp:0xf3d2 size:0x000e C-string:'UNK_0xf3d2'
// 2021:      UNK_0xf3e2  codep:0x224c parp:0xf3e2 size:0x0006 C-string:'UNK_0xf3e2'
// 2022:      UNK_0xf3ea  codep:0x224c parp:0xf3ea size:0x0016 C-string:'UNK_0xf3ea'
// 2023:      UNK_0xf402  codep:0x224c parp:0xf402 size:0x0025 C-string:'UNK_0xf402'
// 2024:      UNK_0xf429  codep:0x224c parp:0xf429 size:0x0020 C-string:'UNK_0xf429'
// 2025:            ERR!  codep:0x224c parp:0xf452 size:0x002c C-string:'ERR_ex_'
// 2026:         GAMEO_1  codep:0x224c parp:0xf488 size:0x0030 C-string:'GAMEO_1'
// 2027:            BOSS  codep:0x224c parp:0xf4c1 size:0x003a C-string:'BOSS'
// 2028:           START  codep:0x224c parp:0xf505 size:0x0000 C-string:'START'

// =================================
// =========== VARIABLES ===========
// =================================
unsigned char UNK_0xdd2e[2] = {0x3a, 0x20}; // UNK_0xdd2e
unsigned char UNK_0xdd32[226] = {0x3a, 0x20, 0x05, 0x41, 0x4c, 0x4c, 0x4f, 0x54, 0x20, 0xc7, 0x3f, 0x52, 0x45, 0x43, 0x41, 0x4c, 0xcc, 0xac, 0x3c, 0x32, 0x35, 0x34, 0xdd, 0xc8, 0x41, 0x52, 0x54, 0x2d, 0x54, 0x45, 0x58, 0xd4, 0xac, 0x3c, 0xa5, 0xe4, 0xed, 0xdc, 0xc9, 0x41, 0x52, 0x54, 0x2d, 0x41, 0x4e, 0x4c, 0x59, 0xda, 0xac, 0x3c, 0x00, 0x00, 0xcd, 0x3f, 0x45, 0x4e, 0x43, 0x35, 0x36, 0x32, 0x35, 0x35, 0x52, 0x2d, 0x4f, 0xce, 0xac, 0x3c, 0x54, 0xe3, 0x66, 0xdd, 0xc8, 0x45, 0x4e, 0x43, 0x2d, 0x50, 0x41, 0x53, 0xd4, 0xac, 0x3c, 0x59, 0xe3, 0x00, 0x00, 0xcb, 0x45, 0x4e, 0x43, 0x2d, 0x50, 0x52, 0x45, 0x53, 0x45, 0x4e, 0xd4, 0xac, 0x3c, 0x5e, 0xe3, 0x7a, 0xdd, 0xca, 0x43, 0x41, 0x4e, 0x2d, 0x53, 0x57, 0x49, 0x54, 0x43, 0xc8, 0xac, 0x3c, 0x63, 0xe3, 0x89, 0xdd, 0xc6, 0x4b, 0x45, 0x59, 0x49, 0x4e, 0xc3, 0xac, 0x3c, 0x68, 0xe3, 0xac, 0xdd, 0xc5, 0x53, 0x43, 0x41, 0x4e, 0xd2, 0xac, 0x3c, 0x6c, 0xe3, 0xb9, 0xdd, 0xc5, 0x44, 0x58, 0x43, 0x52, 0xd3, 0xac, 0x3c, 0x70, 0xe3, 0xc5, 0xdd, 0xc5, 0x44, 0x59, 0x43, 0x52, 0xd3, 0xac, 0x3c, 0x74, 0xe3, 0x9b, 0xdd, 0xc4, 0x58, 0x43, 0x52, 0xd3, 0xac, 0x3c, 0x78, 0xe3, 0xdd, 0xdd, 0xc4, 0x59, 0x43, 0x52, 0xd3, 0xac, 0x3c, 0x7c, 0xe3, 0xe8, 0xdd, 0xc4, 0x58, 0x53, 0x48, 0xd0, 0xac, 0x3c, 0x80, 0xe3, 0xf3, 0xdd, 0xc4, 0x59, 0x53, 0x48, 0xd0, 0xac, 0x3c, 0x84, 0xe3, 0xfe, 0xdd, 0xc8, 0x44, 0x49, 0x53, 0x54, 0x41, 0x4e, 0x29, 0x1d, 0x3a, 0x20}; // UNK_0xdd32
unsigned char UNK_0xde16[2] = {0x3a, 0x20}; // UNK_0xde16
unsigned char UNK_0xde1a[2] = {0x37, 0x6f}; // UNK_0xde1a
unsigned char UNK_0xde3e[2] = {0x3a, 0x20}; // UNK_0xde3e
unsigned char UNK_0xde42[2] = {0x3a, 0x20}; // UNK_0xde42
unsigned char UNK_0xde46[2] = {0x3a, 0x20}; // UNK_0xde46
unsigned char UNK_0xde4a[2] = {0x3a, 0x20}; // UNK_0xde4a
unsigned char UNK_0xde4e[2] = {0x3a, 0x20}; // UNK_0xde4e
unsigned char UNK_0xde52[2] = {0x3a, 0x20}; // UNK_0xde52
unsigned char UNK_0xde56[2] = {0x3a, 0x20}; // UNK_0xde56
unsigned char UNK_0xde5a[2] = {0x3a, 0x20}; // UNK_0xde5a
unsigned char UNK_0xde5e[2] = {0x3a, 0x20}; // UNK_0xde5e
unsigned char UNK_0xde62[6] = {0x3a, 0x20, 0x29, 0x1d, 0x3a, 0x20}; // UNK_0xde62
unsigned char UNK_0xde6a[2] = {0x3a, 0x20}; // UNK_0xde6a
unsigned char UNK_0xde6e[2] = {0x3a, 0x20}; // UNK_0xde6e
unsigned char UNK_0xde72[2] = {0x3a, 0x20}; // UNK_0xde72
unsigned char UNK_0xde76[2] = {0x3a, 0x20}; // UNK_0xde76
unsigned char UNK_0xde7a[2] = {0x3a, 0x20}; // UNK_0xde7a
unsigned char UNK_0xe02b[38] = {0x3a, 0x20, 0x4c, 0x22, 0x25, 0xe0, 0x16, 0x6d, 0x29, 0xe0, 0x65, 0x6d, 0x90, 0x16, 0x4c, 0x22, 0x25, 0xe0, 0xae, 0x0b, 0x29, 0xe0, 0xae, 0x0b, 0x72, 0x0f, 0xf2, 0x0e, 0x41, 0x0e, 0x29, 0xe0, 0x23, 0x6d, 0x8a, 0x6d, 0x90, 0x16}; // UNK_0xe02b
unsigned char OPTIO[2] = {0x20, 0x20}; // OPTIO

const unsigned short int cc_UNK_0xdd0a = 0x004b; // UNK_0xdd0a
const unsigned short int cc_UNK_0xdd0e = 0x007e; // UNK_0xdd0e
const unsigned short int cc_UNK_0xdd12 = 0x00ae; // UNK_0xdd12
const unsigned short int cc_UNK_0xdd16 = 0x00af; // UNK_0xdd16
const unsigned short int cc_UNK_0xdd1a = 0x00b0; // UNK_0xdd1a
const unsigned short int cc_UNK_0xdd26 = 0x0400; // UNK_0xdd26
const unsigned short int cc_UNK_0xdd2a = 0x3a48; // UNK_0xdd2a
const unsigned short int cc_UNK_0xdefa = 0x000f; // UNK_0xdefa
const unsigned short int cc_UNK_0xdf25 = 0x0012; // UNK_0xdf25
const unsigned short int cc_STARE = 0xe05e; // STARE
const unsigned short int cc_STARV = 0xe075; // STARV


// 0xdd02: db 0x85 0x01 0x14 0x22 0x4b 0x00 '   "K '

// ================================================
// 0xdd08: WORD 'UNK_0xdd0a' codep=0x2214 parp=0xdd0a
// ================================================
// 0xdd0a: db 0x4b 0x00 'K '

// ================================================
// 0xdd0c: WORD 'UNK_0xdd0e' codep=0x2214 parp=0xdd0e
// ================================================
// 0xdd0e: db 0x7e 0x00 '~ '

// ================================================
// 0xdd10: WORD 'UNK_0xdd12' codep=0x2214 parp=0xdd12
// ================================================
// 0xdd12: db 0xae 0x00 '  '

// ================================================
// 0xdd14: WORD 'UNK_0xdd16' codep=0x2214 parp=0xdd16
// ================================================
// 0xdd16: db 0xaf 0x00 '  '

// ================================================
// 0xdd18: WORD 'UNK_0xdd1a' codep=0x2214 parp=0xdd1a
// ================================================
// 0xdd1a: db 0xb0 0x00 0x14 0x22 0x04 0x00 0x14 0x22 0x00 0x00 '   "   "  '

// ================================================
// 0xdd24: WORD 'UNK_0xdd26' codep=0x2214 parp=0xdd26
// ================================================
// 0xdd26: db 0x00 0x04 '  '

// ================================================
// 0xdd28: WORD 'UNK_0xdd2a' codep=0x2214 parp=0xdd2a
// ================================================
// 0xdd2a: db 0x48 0x3a 'H:'

// ================================================
// 0xdd2c: WORD 'UNK_0xdd2e' codep=0x1d29 parp=0xdd2e
// ================================================
// 0xdd2e: db 0x3a 0x20 ': '

// ================================================
// 0xdd30: WORD 'UNK_0xdd32' codep=0x1d29 parp=0xdd32
// ================================================
// 0xdd32: db 0x3a 0x20 0x05 0x41 0x4c 0x4c 0x4f 0x54 0x20 0xc7 0x3f 0x52 0x45 0x43 0x41 0x4c 0xcc 0xac 0x3c 0x32 0x35 0x34 0xdd 0xc8 0x41 0x52 0x54 0x2d 0x54 0x45 0x58 0xd4 0xac 0x3c 0xa5 0xe4 0xed 0xdc 0xc9 0x41 0x52 0x54 0x2d 0x41 0x4e 0x4c 0x59 0xda 0xac 0x3c 0x00 0x00 0xcd 0x3f 0x45 0x4e 0x43 0x35 0x36 0x32 0x35 0x35 0x52 0x2d 0x4f 0xce 0xac 0x3c 0x54 0xe3 0x66 0xdd 0xc8 0x45 0x4e 0x43 0x2d 0x50 0x41 0x53 0xd4 0xac 0x3c 0x59 0xe3 0x00 0x00 0xcb 0x45 0x4e 0x43 0x2d 0x50 0x52 0x45 0x53 0x45 0x4e 0xd4 0xac 0x3c 0x5e 0xe3 0x7a 0xdd 0xca 0x43 0x41 0x4e 0x2d 0x53 0x57 0x49 0x54 0x43 0xc8 0xac 0x3c 0x63 0xe3 0x89 0xdd 0xc6 0x4b 0x45 0x59 0x49 0x4e 0xc3 0xac 0x3c 0x68 0xe3 0xac 0xdd 0xc5 0x53 0x43 0x41 0x4e 0xd2 0xac 0x3c 0x6c 0xe3 0xb9 0xdd 0xc5 0x44 0x58 0x43 0x52 0xd3 0xac 0x3c 0x70 0xe3 0xc5 0xdd 0xc5 0x44 0x59 0x43 0x52 0xd3 0xac 0x3c 0x74 0xe3 0x9b 0xdd 0xc4 0x58 0x43 0x52 0xd3 0xac 0x3c 0x78 0xe3 0xdd 0xdd 0xc4 0x59 0x43 0x52 0xd3 0xac 0x3c 0x7c 0xe3 0xe8 0xdd 0xc4 0x58 0x53 0x48 0xd0 0xac 0x3c 0x80 0xe3 0xf3 0xdd 0xc4 0x59 0x53 0x48 0xd0 0xac 0x3c 0x84 0xe3 0xfe 0xdd 0xc8 0x44 0x49 0x53 0x54 0x41 0x4e 0x29 0x1d 0x3a 0x20 ':  ALLOT  ?RECAL  <254  ART-TEX  <     ART-ANLY  <   ?ENC56255R-O  <T f  ENC-PAS  <Y    ENC-PRESEN  <^ z  CAN-SWITC  <c    KEYIN  <h    SCAN  <l    DXCR  <p    DYCR  <t    XCR  <x    YCR  <|    XSH  <     YSH  <     DISTAN) : '

// ================================================
// 0xde14: WORD 'UNK_0xde16' codep=0x1d29 parp=0xde16
// ================================================
// 0xde16: db 0x3a 0x20 ': '

// ================================================
// 0xde18: WORD 'UNK_0xde1a' codep=0x1d29 parp=0xde1a
// ================================================
// 0xde1a: db 0x37 0x6f '7o'

// ================================================
// 0xde1c: WORD 'UNK_0xde1e' codep=0x224c parp=0xde1e
// ================================================

void UNK_0xde1e() // UNK_0xde1e
{
  Push(cc_DX); // DX
  _ex__2(); // !_2
  Push(0x001a);
  DOSCALL(); // DOSCALL
}


// ================================================
// 0xde2a: WORD 'UNK_0xde2c' codep=0x224c parp=0xde2c
// ================================================

void UNK_0xde2c() // UNK_0xde2c
{
  Push(pp_FONTSEG); // FONTSEG
  Push(Read16(Pop())); // @
  Push(0x008f);
  Func6("FILE-#R");
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
}


// ================================================
// 0xde3c: WORD 'UNK_0xde3e' codep=0x1d29 parp=0xde3e
// ================================================
// 0xde3e: db 0x3a 0x20 ': '

// ================================================
// 0xde40: WORD 'UNK_0xde42' codep=0x1d29 parp=0xde42
// ================================================
// 0xde42: db 0x3a 0x20 ': '

// ================================================
// 0xde44: WORD 'UNK_0xde46' codep=0x1d29 parp=0xde46
// ================================================
// 0xde46: db 0x3a 0x20 ': '

// ================================================
// 0xde48: WORD 'UNK_0xde4a' codep=0x1d29 parp=0xde4a
// ================================================
// 0xde4a: db 0x3a 0x20 ': '

// ================================================
// 0xde4c: WORD 'UNK_0xde4e' codep=0x1d29 parp=0xde4e
// ================================================
// 0xde4e: db 0x3a 0x20 ': '

// ================================================
// 0xde50: WORD 'UNK_0xde52' codep=0x1d29 parp=0xde52
// ================================================
// 0xde52: db 0x3a 0x20 ': '

// ================================================
// 0xde54: WORD 'UNK_0xde56' codep=0x1d29 parp=0xde56
// ================================================
// 0xde56: db 0x3a 0x20 ': '

// ================================================
// 0xde58: WORD 'UNK_0xde5a' codep=0x1d29 parp=0xde5a
// ================================================
// 0xde5a: db 0x3a 0x20 ': '

// ================================================
// 0xde5c: WORD 'UNK_0xde5e' codep=0x1d29 parp=0xde5e
// ================================================
// 0xde5e: db 0x3a 0x20 ': '

// ================================================
// 0xde60: WORD 'UNK_0xde62' codep=0x1d29 parp=0xde62
// ================================================
// 0xde62: db 0x3a 0x20 0x29 0x1d 0x3a 0x20 ': ) : '

// ================================================
// 0xde68: WORD 'UNK_0xde6a' codep=0x1d29 parp=0xde6a
// ================================================
// 0xde6a: db 0x3a 0x20 ': '

// ================================================
// 0xde6c: WORD 'UNK_0xde6e' codep=0x1d29 parp=0xde6e
// ================================================
// 0xde6e: db 0x3a 0x20 ': '

// ================================================
// 0xde70: WORD 'UNK_0xde72' codep=0x1d29 parp=0xde72
// ================================================
// 0xde72: db 0x3a 0x20 ': '

// ================================================
// 0xde74: WORD 'UNK_0xde76' codep=0x1d29 parp=0xde76
// ================================================
// 0xde76: db 0x3a 0x20 ': '

// ================================================
// 0xde78: WORD 'UNK_0xde7a' codep=0x1d29 parp=0xde7a
// ================================================
// 0xde7a: db 0x3a 0x20 ': '

// ================================================
// 0xde7c: WORD 'UNK_0xde7e' codep=0x224c parp=0xde7e
// ================================================

void UNK_0xde7e() // UNK_0xde7e
{
  USING(); // USING
  DOS(); // DOS
  Push(Read16(sp)); // DUP
  RECSIZE(); // RECSIZE
  _ex__2(); // !_2
  SYSUTIL(); // SYSUTIL
  MAKE_st_NA(); // MAKE<NA
  RECSIZE(); // RECSIZE
  _ex__2(); // !_2
  Push(pp_UNK_0xde7a); // UNK_0xde7a
  _099(); // 099
  SYSTEM(); // SYSTEM
  SWAP(); // SWAP
  if (Read16(sp) != 0) Push(Read16(sp)); // ?DUP
  if (Pop() == 0) goto label1;
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  PAD(); // PAD
  UNK_0xde1e(); // UNK_0xde1e
  READNEX(); // READNEX
  Push(Read16(sp)); // DUP
  Push(pp_UNK_0xde7a); // UNK_0xde7a
  _ex__2(); // !_2
  if (Pop() == 0) goto label2;
  LEAVE(); // LEAVE

  label2:
  i++;
  } while(i<imax); // (LOOP) 0xffec


  label1:
  Push(pp_UNK_0xde7a); // UNK_0xde7a
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label3;
  Pop(); // DROP
  goto label4;

  label3:
  Push(0); // 0

  signed short int j = Pop();
  signed short int jmax = Pop();
  do // (DO)
  {
  PAD(); // PAD
  UNK_0xde1e(); // UNK_0xde1e
  SYSTEM(); // SYSTEM
  READNEX(); // READNEX
  Push(Read16(sp)); // DUP
  Push(pp_UNK_0xde7a); // UNK_0xde7a
  _ex__2(); // !_2
  if (Pop() == 0) goto label5;
  LEAVE(); // LEAVE
  goto label6;

  label5:
  SYSUTIL(); // SYSUTIL
  PAD(); // PAD
  UNK_0xde1e(); // UNK_0xde1e
  WRITENE(); // WRITENE
  _ask_UNRAVEL(); // ?UNRAVEL

  label6:
  j++;
  } while(j<jmax); // (LOOP) 0xffdc


  label4:
  SYSUTIL(); // SYSUTIL
  CLOSE(); // CLOSE
  Pop(); // DROP
}


// ================================================
// 0xdef8: WORD 'UNK_0xdefa' codep=0x2214 parp=0xdefa
// ================================================
// 0xdefa: db 0x0f 0x00 '  '

// ================================================
// 0xdefc: WORD 'HOST' codep=0x53f7 parp=0xdf05
// ================================================
// 0xdf05: db 0xa8 0x2c 0xd4 0x40 0xef 0x09 0xc0 0x5e 0x3b 0x57 0x2d 0x57 0x2b 0x54 0xfe 0x59 0xa9 0x53 0xb8 0x51 0x1b 0x5f 0x08 0x52 0x36 0x54 0xc8 0x84 0x10 0x54 ' , @   ^;W-W+T Y S Q _ R6T   T'

// ================================================
// 0xdf23: WORD 'UNK_0xdf25' codep=0x2214 parp=0xdf25
// ================================================
// 0xdf25: db 0x12 0x00 '  '

// ================================================
// 0xdf27: WORD 'VECTORS' codep=0x53f7 parp=0xdf33
// ================================================
// 0xdf33: db 0x47 0x57 0x54 0x57 0x77 0x5a 0x6c 0x5a 0x61 0x5a 0x56 0x5a 0x48 0x5a 0x3d 0x5a 0x8f 0x57 0x0e 0x46 0xe6 0x07 0xfa 0x07 0x5b 0x6c 0x88 0x01 0x8a 0x01 0x12 0x64 0x14 0x64 0x84 0x5a 'GWTWwZlZaZVZHZ=Z W F    [l     d d Z'

// ================================================
// 0xdf57: WORD 'UNK_0xdf59' codep=0x224c parp=0xdf59
// ================================================

void UNK_0xdf59() // UNK_0xdf59
{
  Push(pp_ICON_h_); // ICON^
  Push(Read16(Pop())); // @
  _gt_R(); // >R
  R_at_(); // R@
  Push(0x003e);
  FILE_st_(); // FILE<
  R_at_(); // R@
  Push(0x0043);
  Push(Pop() + Pop()); // +
  Push(0x003f);
  FILE_st_(); // FILE<
  R_gt_(); // R>
  Push(0x0086);
  Push(Pop() + Pop()); // +
  Push(0x0040);
  FILE_st_(); // FILE<
}


// ================================================
// 0xdf85: WORD 'UNK_0xdf87' codep=0x224c parp=0xdf87
// ================================================

void UNK_0xdf87() // UNK_0xdf87
{
  Push(0); // 0
  Push(cc_DX); // DX
  C_ex__2(); // C!_2
  Push(0x0036);
  DOSCALL(); // DOSCALL
  Push(cc_DX); // DX
  Push(Read16(Pop())); // @
  Push(0); // 0
  Push(cc_AX); // AX
  Push(Read16(Pop())); // @
  Push(0x0400);
  Push(cc_CX); // CX
  Push(Read16(Pop())); // @
  _slash_(); // /
  M_star__slash_(); // M*/
  Push(0x05dc); Pust(0x0000);
  D_gt_(); // D>
}

// 0xdfb3: db 0x29 0x1d 0x3a 0x20 0x05 0x41 ') :  A'

// ================================================
// 0xdfb9: WORD 'UNK_0xdfbb' codep=0x224c parp=0xdfbb
// ================================================

void UNK_0xdfbb() // UNK_0xdfbb
{
  Push(pp_XBUF_dash_SE); // XBUF-SE
  Push(Read16(Pop())); // @
  Push(Read16(sp)); // DUP
  Push(0x004b);
  FILE_st_(); // FILE<
  Push(0); // 0
  Push(0x6b04);
  Push(cc__6); // 6
  Push(Pop() + Pop()); // +
  Push(Read16(Pop())); // @
  Push(0); // 0
  Push(0x0164);
  LCMOVE(); // LCMOVE
}


// ================================================
// 0xdfdd: WORD 'UNK_0xdfdf' codep=0x224c parp=0xdfdf
// ================================================

void UNK_0xdfdf() // UNK_0xdfdf
{
  Push(pp_XBUF_dash_SE); // XBUF-SE
  Push(Read16(Pop())); // @
  Push(Read16(sp)); // DUP
  Push(0x004c);
  FILE_st_(); // FILE<
  Push(0); // 0
  Push(0x6abb);
  Push(cc__6); // 6
  Push(Pop() + Pop()); // +
  Push(Read16(Pop())); // @
  Push(0); // 0
  Push(0x0120);
  LCMOVE(); // LCMOVE
}


// ================================================
// 0xe001: WORD 'UNK_0xe003' codep=0x224c parp=0xe003
// ================================================

void UNK_0xe003() // UNK_0xe003
{
  Push(pp_XBUF_dash_SE); // XBUF-SE
  Push(Read16(Pop())); // @
  Push(Read16(sp)); // DUP
  Push(0x004d);
  FILE_st_(); // FILE<
  Push(0); // 0
  Push(0x6aa9);
  Push(cc__6); // 6
  Push(Pop() + Pop()); // +
  Push(Read16(Pop())); // @
  Push(0); // 0
  Push(0x0192);
  LCMOVE(); // LCMOVE
}

// 0xe025: db 0x29 0x1d 0x3a 0x20 ') : '

// ================================================
// 0xe029: WORD 'UNK_0xe02b' codep=0x1d29 parp=0xe02b
// ================================================
// 0xe02b: db 0x3a 0x20 0x4c 0x22 0x25 0xe0 0x16 0x6d 0x29 0xe0 0x65 0x6d 0x90 0x16 0x4c 0x22 0x25 0xe0 0xae 0x0b 0x29 0xe0 0xae 0x0b 0x72 0x0f 0xf2 0x0e 0x41 0x0e 0x29 0xe0 0x23 0x6d 0x8a 0x6d 0x90 0x16 ': L"%  m) em  L"%   )   r   A ) #m m  '

// ================================================
// 0xe051: WORD 'STARE' codep=0x2214 parp=0xe05b
// ================================================
// 0xe05b: db 0x5e 0xe0 0x00 0x73 0x74 0x61 0x72 0x73 0x2e 0x65 0x67 0x61 0x00 '^  stars.ega '

// ================================================
// 0xe068: WORD 'STARV' codep=0x2214 parp=0xe072
// ================================================
// 0xe072: db 0x75 0xe0 0x00 0x73 0x74 0x61 0x72 0x73 0x2e 0x76 0x67 0x61 0x00 'u  stars.vga '

// ================================================
// 0xe07f: WORD 'UNK_0xe081' codep=0x224c parp=0xe081
// ================================================

void UNK_0xe081() // UNK_0xe081
{
  Push(pp_XBUF_dash_SE); // XBUF-SE
  Push(Read16(Pop())); // @
  Push(0); // 0
  Push(0x060d);
  LCMOVE(); // LCMOVE
  Push(0xb603);
  MODULE(); // MODULE
  _gt_R(); // >R
  Push(0x0012);
  BMOFF(); // BMOFF
  _ex__2(); // !_2
  R_at_(); // R@
  BMSEG(); // BMSEG
  _ex__2(); // !_2
  Push(0); // 0
  BMPAL(); // BMPAL
  Push(Pop()-1); // 1-
  _ex__2(); // !_2
  _at_DS(); // @DS
  Push(pp_BMAP); // BMAP
  R_at_(); // R@
  Push(0); // 0
  Push(0x000e);
  LCMOVE(); // LCMOVE
  Push(pp__ask_EGA); // ?EGA
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  UNK_0xde2c(); // UNK_0xde2c
  Push(2); // 2
  goto label2;

  label1:
  Push(pp_XBUF_dash_SE); // XBUF-SE
  Push(Read16(Pop())); // @
  Push(0x000d);

  label2:
  R_gt_(); // R>
  Push(0x0012);
  Push(0x078a);
  LCMOVE(); // LCMOVE
}


// ================================================
// 0xe0df: WORD 'UNK_0xe0e1' codep=0x224c parp=0xe0e1
// ================================================

void UNK_0xe0e1() // UNK_0xe0e1
{
  _ask_VGA(); // ?VGA
  if (Pop() == 0) goto label1;
  Push(cc_STARV); // STARV
  goto label2;

  label1:
  Push(cc_STARE); // STARE

  label2:
  Push(pp_SSYSEG); // SSYSEG
  Push(Read16(Pop())); // @
  _ro_LDS_rc_(); // (LDS)
  MOUNTA(); // MOUNTA
  Push(pp_LSYSEG); // LSYSEG
  Push(Read16(Pop())); // @
  Push(pp_SSYSEG); // SSYSEG
  Push(Read16(Pop())); // @
  Push(0x04e2);
  UNK_0xe081(); // UNK_0xe081
  Push(pp_MSYSEG); // MSYSEG
  Push(Read16(Pop())); // @
  Push(pp_SSYSEG); // SSYSEG
  Push(Read16(Pop())); // @
  Push(0x018d);
  UNK_0xe081(); // UNK_0xe081
  Push(pp_SSYSEG); // SSYSEG
  Push(Read16(Pop())); // @
  Push(Read16(sp)); // DUP
  Push(0); // 0
  UNK_0xe081(); // UNK_0xe081
  UNK_0xdfbb(); // UNK_0xdfbb
  UNK_0xdfdf(); // UNK_0xdfdf
  UNK_0xe003(); // UNK_0xe003
}


// ================================================
// 0xe125: WORD 'UNK_0xe127' codep=0x224c parp=0xe127
// ================================================

void UNK_0xe127() // UNK_0xe127
{
  PRINT("1. SAVE GAME & RESUME", 21); // (.")
}


// ================================================
// 0xe141: WORD 'UNK_0xe143' codep=0x224c parp=0xe143
// ================================================

void UNK_0xe143() // UNK_0xe143
{
  PRINT("3. RESUME WITHOUT SAVING", 24); // (.")
}


// ================================================
// 0xe160: WORD 'UNK_0xe162' codep=0x224c parp=0xe162
// ================================================

void UNK_0xe162() // UNK_0xe162
{
  PRINT("2. SAVE GAME & QUIT", 19); // (.")
}


// ================================================
// 0xe17a: WORD 'UNK_0xe17c' codep=0x224c parp=0xe17c
// ================================================

void UNK_0xe17c() // UNK_0xe17c
{
  PRINT("7. QUIT WITHOUT SAVING", 22); // (.")
}


// ================================================
// 0xe197: WORD 'UNK_0xe199' codep=0x224c parp=0xe199
// ================================================

void UNK_0xe199() // UNK_0xe199
{
  _at_DS(); // @DS
  Push(0x1000);
  Push(Pop() + Pop()); // +
}


// ================================================
// 0xe1a3: WORD 'UNK_0xe1a5' codep=0x224c parp=0xe1a5
// ================================================

void UNK_0xe1a5() // UNK_0xe1a5
{
  UNK_0xe199(); // UNK_0xe199
  Push(pp_UNK_0xde1a); // UNK_0xde1a
  _ex__2(); // !_2
}


// ================================================
// 0xe1ad: WORD 'UNK_0xe1af' codep=0x224c parp=0xe1af
// ================================================

void UNK_0xe1af() // UNK_0xe1af
{
  PAD(); // PAD
  Push(0x000e);
  Push(0); // 0
  FILL_2(); // FILL_2
  _at_DS(); // @DS
  PAD(); // PAD
  Push(pp_UNK_0xde1a); // UNK_0xde1a
  Push(Read16(Pop())); // @
  Push(0); // 0
  Push(0x000e);
  LCMOVE(); // LCMOVE
  Push(0x000c);
  SWAP(); // SWAP
  Push(Read16(sp)); // DUP
  Push(0x0064);
  _dash_(); // -
  SWAP(); // SWAP

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(0x0140);
  Push(0); // 0

  signed short int j = Pop();
  signed short int jmax = Pop();
  do // (DO)
  {
  Push(Pop()+1); // 1+
  Push(Read16(sp)); // DUP
  Push(j); // I
  Push(i); // J
  L_at_PIXEL(); // L@PIXEL
  Push(0x000f);
  Push(Pop() & Pop()); // AND
  Push(Pop()<<4); // 16*
  Push(j); // I
  Push(Pop()+1); // 1+
  Push(i); // J
  L_at_PIXEL(); // L@PIXEL
  Push(0x000f);
  Push(Pop() & Pop()); // AND
  Push(Pop() + Pop()); // +
  Push(pp_UNK_0xde1a); // UNK_0xde1a
  Push(Read16(Pop())); // @
  ROT(); // ROT
  LC_ex_(); // LC!
  Push(2); // 2
  int step = Pop();
  j += step;
  } while(((step>=0) && (j<jmax)) || ((step<0) && (j>jmax))); // (+LOOP) 0xffd2

  Push(cc__dash_1); // -1
  int step = Pop();
  i += step;
  } while(((step>=0) && (i<imax)) || ((step<0) && (i>imax))); // (+LOOP) 0xffc4

  Pop(); // DROP
  Push(0x0140);
  Push(Read16(sp)); // DUP
  Push(pp_UNK_0xde1a); // UNK_0xde1a
  Push(Read16(Pop())); // @
  Push(cc__3); // 3
  L_ex_(); // L!
  Push(Pop()>>1); // 2/
  Push(pp_UNK_0xde1a); // UNK_0xde1a
  Push(Read16(Pop())); // @
  Push(cc__9); // 9
  LC_ex_(); // LC!
  Push(0x0064);
  Push(pp_UNK_0xde1a); // UNK_0xde1a
  Push(Read16(Pop())); // @
  Push(0x000a);
  LC_ex_(); // LC!
}


// ================================================
// 0xe243: WORD 'UNK_0xe245' codep=0x224c parp=0xe245
// ================================================

void UNK_0xe245() // UNK_0xe245
{
  Push(pp_UNK_0xe02b); // UNK_0xe02b
  _ex__2(); // !_2
  Push(pp_UNK_0xde62); // UNK_0xde62
  _ex__2(); // !_2
}


// ================================================
// 0xe24f: WORD 'UNK_0xe251' codep=0x224c parp=0xe251
// ================================================

void UNK_0xe251() // UNK_0xe251
{
  Push(pp_UNK_0xde42); // UNK_0xde42
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xde3e); // UNK_0xde3e
  Push(Read16(Pop())); // @
  _dash_(); // -
  Push(pp_UNK_0xde52); // UNK_0xde52
  Push(Read16(Pop())); // @
  _slash_(); // /
  Push(pp_UNK_0xde5a); // UNK_0xde5a
  _ex__2(); // !_2
}


// ================================================
// 0xe267: WORD 'UNK_0xe269' codep=0x224c parp=0xe269
// ================================================

void UNK_0xe269() // UNK_0xe269
{
  Push(pp_UNK_0xde46); // UNK_0xde46
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xde4a); // UNK_0xde4a
  Push(Read16(Pop())); // @
  _dash_(); // -
  Push(pp_UNK_0xde4e); // UNK_0xde4e
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xde56); // UNK_0xde56
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  _slash_(); // /
  Push(pp_UNK_0xde5e); // UNK_0xde5e
  _ex__2(); // !_2
}


// ================================================
// 0xe285: WORD 'UNK_0xe287' codep=0x224c parp=0xe287
// ================================================

void UNK_0xe287() // UNK_0xe287
{

  label1:
  Push(Read16(sp)); // DUP
  Push(Read8(Pop())&0xFF); // C@
  Push(cc_BL); // BL
  _eq_(); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) return;
  Push(Pop()-1); // 1-
  goto label1;
}


// ================================================
// 0xe29d: WORD 'UNK_0xe29f' codep=0x224c parp=0xe29f
// ================================================

void UNK_0xe29f() // UNK_0xe29f
{
  Push(pp_UNK_0xde62); // UNK_0xde62
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xde6e); // UNK_0xde6e
  _ex__2(); // !_2
  Push(1); // 1
  Push(pp_UNK_0xde6a); // UNK_0xde6a
  _ex__2(); // !_2

  label2:
  Push(pp_UNK_0xde6e); // UNK_0xde6e
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xde5a); // UNK_0xde5a
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  Push(Read16(sp)); // DUP
  Push(pp_UNK_0xde62); // UNK_0xde62
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xe02b); // UNK_0xe02b
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  U_st_(); // U<
  if (Pop() == 0) goto label1;
  UNK_0xe287(); // UNK_0xe287
  Push(Pop()+1); // 1+
  Push(pp_UNK_0xde6e); // UNK_0xde6e
  _ex__2(); // !_2
  Push(1); // 1
  Push(pp_UNK_0xde6a); // UNK_0xde6a
  _plus__ex__2(); // +!_2
  goto label2;

  label1:
  Pop(); // DROP
}


// ================================================
// 0xe2df: WORD 'UNK_0xe2e1' codep=0x224c parp=0xe2e1
// ================================================

void UNK_0xe2e1() // UNK_0xe2e1
{
  UNK_0xe29f(); // UNK_0xe29f
  Push(pp_UNK_0xde5e); // UNK_0xde5e
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xde6a); // UNK_0xde6a
  Push(Read16(Pop())); // @
  _dash_(); // -
  Push(Pop()>>1); // 2/
  Push(pp_UNK_0xde4e); // UNK_0xde4e
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xde56); // UNK_0xde56
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  Push(Pop() * Pop()); // *
  Push(-Pop()); // NEGATE
  Push(pp_UNK_0xde46); // UNK_0xde46
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  Push(pp_YBLT); // YBLT
  _ex__2(); // !_2
}


// ================================================
// 0xe309: WORD 'UNK_0xe30b' codep=0x224c parp=0xe30b
// ================================================

void UNK_0xe30b() // UNK_0xe30b
{
  _gt_HIDDEN(); // >HIDDEN
  Push(pp_YBLT); // YBLT
  Push(Read16(Pop())); // @
  Push(0x0384);
  Push(pp_YBLT); // YBLT
  _ex__2(); // !_2
  Push(0); // 0
  Push(pp_XBLT); // XBLT
  _ex__2(); // !_2
  Push(pp_UNK_0xde6e); // UNK_0xde6e
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xde72); // UNK_0xde72
  Push(Read16(Pop())); // @
  Exec(TYPE); // call of word 0x2690 '(TYPE)'
  Push(pp_YBLT); // YBLT
  _ex__2(); // !_2
  Push(pp_UNK_0xde42); // UNK_0xde42
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xde3e); // UNK_0xde3e
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  Push(Pop()>>1); // 2/
  Push(pp_XBLT); // XBLT
  Push(Read16(Pop())); // @
  Push(Pop()>>1); // 2/
  Push(-Pop()); // NEGATE
  Push(Pop() + Pop()); // +
  Push(pp_XBLT); // XBLT
  _ex__2(); // !_2
  DARK(); // DARK
  _gt_DISPLA(); // >DISPLA
}


// ================================================
// 0xe34d: WORD 'UNK_0xe34f' codep=0x224c parp=0xe34f
// ================================================

void UNK_0xe34f() // UNK_0xe34f
{
  UNK_0xe30b(); // UNK_0xe30b
  Push(pp_UNK_0xde6e); // UNK_0xde6e
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xde72); // UNK_0xde72
  Push(Read16(Pop())); // @
  Exec(TYPE); // call of word 0x2690 '(TYPE)'
}


// ================================================
// 0xe35d: WORD 'UNK_0xe35f' codep=0x224c parp=0xe35f
// ================================================

void UNK_0xe35f() // UNK_0xe35f
{
  UNK_0xe2e1(); // UNK_0xe2e1
  Push(pp_UNK_0xde62); // UNK_0xde62
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xde6e); // UNK_0xde6e
  _ex__2(); // !_2

  label2:
  Push(pp_UNK_0xde6e); // UNK_0xde6e
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xde5a); // UNK_0xde5a
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  Push(Read16(sp)); // DUP
  Push(pp_UNK_0xde62); // UNK_0xde62
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xe02b); // UNK_0xe02b
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  U_st_(); // U<
  if (Pop() == 0) goto label1;
  UNK_0xe287(); // UNK_0xe287
  Push(pp_UNK_0xde6e); // UNK_0xde6e
  Push(Read16(Pop())); // @
  _dash_(); // -
  Push(pp_UNK_0xde72); // UNK_0xde72
  _ex__2(); // !_2
  UNK_0xe34f(); // UNK_0xe34f
  Push(pp_UNK_0xde4e); // UNK_0xde4e
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xde56); // UNK_0xde56
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  Push(-Pop()); // NEGATE
  Push(pp_YBLT); // YBLT
  _plus__ex__2(); // +!_2
  Push(pp_UNK_0xde72); // UNK_0xde72
  Push(Read16(Pop())); // @
  Push(Pop()+1); // 1+
  Push(pp_UNK_0xde6e); // UNK_0xde6e
  _plus__ex__2(); // +!_2
  goto label2;

  label1:
  Pop(); // DROP
  Push(pp_UNK_0xde62); // UNK_0xde62
  Push(Read16(Pop())); // @
  Push(pp_UNK_0xe02b); // UNK_0xe02b
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
  Push(pp_UNK_0xde6e); // UNK_0xde6e
  Push(Read16(Pop())); // @
  _dash_(); // -
  Push(pp_UNK_0xde72); // UNK_0xde72
  _ex__2(); // !_2
  UNK_0xe34f(); // UNK_0xe34f
}


// ================================================
// 0xe3cb: WORD 'UNK_0xe3cd' codep=0x224c parp=0xe3cd
// ================================================

void UNK_0xe3cd() // UNK_0xe3cd
{
  UNK_0xe245(); // UNK_0xe245
  UNK_0xe251(); // UNK_0xe251
  UNK_0xe269(); // UNK_0xe269
  UNK_0xe35f(); // UNK_0xe35f
}


// ================================================
// 0xe3d7: WORD 'UNK_0xe3d9' codep=0x224c parp=0xe3d9
// ================================================

void UNK_0xe3d9() // UNK_0xe3d9
{
  Push(0x0014);
  Push(pp_UNK_0xde3e); // UNK_0xde3e
  _ex__2(); // !_2
  Push(0x008c);
  Push(pp_UNK_0xde42); // UNK_0xde42
  _ex__2(); // !_2
  Push(0x0028);
  Push(pp_UNK_0xde4a); // UNK_0xde4a
  _ex__2(); // !_2
  Push(0x0096);
  Push(pp_UNK_0xde46); // UNK_0xde46
  _ex__2(); // !_2
  Push(cc__3); // 3
  Push(pp_UNK_0xde56); // UNK_0xde56
  _ex__2(); // !_2
  Push(cc__9); // 9
  Push(pp_UNK_0xde4e); // UNK_0xde4e
  _ex__2(); // !_2
  Push(cc__6); // 6
  Push(pp_UNK_0xde52); // UNK_0xde52
  _ex__2(); // !_2
}


// ================================================
// 0xe40d: WORD 'UNK_0xe40f' codep=0x224c parp=0xe40f
// ================================================

void UNK_0xe40f() // UNK_0xe40f
{
  Push(pp_XORMODE); // XORMODE
  _099(); // 099
  Push(pp_COLOR); // COLOR
  Push(Read16(Pop())); // @
  Push(0x0096);
  Push(0x0014);
  Push(0x001e);
  Push(0x0099);
  SetColor("BLACK");
  POLY_dash_WI(); // POLY-WI
  _ex_COLOR(); // !COLOR
}


// ================================================
// 0xe42f: WORD 'UNK_0xe431' codep=0x224c parp=0xe431
// ================================================

void UNK_0xe431() // UNK_0xe431
{
  Push(pp_XORMODE); // XORMODE
  _099(); // 099
  Push(pp_COLOR); // COLOR
  Push(Read16(Pop())); // @
  Push(0x0011);
  Push(0x0014);
  Push(cc__5); // 5
  Push(0x009f);
  SetColor("BLACK");
  POLY_dash_WI(); // POLY-WI
  _ex_COLOR(); // !COLOR
}


// ================================================
// 0xe44f: WORD 'UNK_0xe451' codep=0x224c parp=0xe451
// ================================================

void UNK_0xe451() // UNK_0xe451
{
  UNK_0xe3d9(); // UNK_0xe3d9
  _gt_DISPLA(); // >DISPLA
  UNK_0xe40f(); // UNK_0xe40f
  _gt_2FONT(); // >2FONT
  UNK_0xe3cd(); // UNK_0xe3cd
}


// ================================================
// 0xe45d: WORD 'UNK_0xe45f' codep=0x224c parp=0xe45f
// ================================================

void UNK_0xe45f() // UNK_0xe45f
{
  SetColor("WHITE");
  _ex_COLOR(); // !COLOR
  Push(cc__5); // 5
  Push(0x009b);
  Push(0x000a);
  Push(0x00a0);
  LLINE(); // LLINE
  Push(0x000a);
  Push(0x00a0);
  Push(0x0096);
  Push(0x00a0);
  LLINE(); // LLINE
  Push(0x0096);
  Push(0x00a0);
  Push(0x009b);
  Push(0x009b);
  LLINE(); // LLINE
  Push(0x009b);
  Push(0x009b);
  Push(0x009b);
  Push(0x0019);
  LLINE(); // LLINE
  Push(0x009b);
  Push(0x0019);
  Push(0x0096);
  Push(0x0014);
  LLINE(); // LLINE
  Push(0x0096);
  Push(0x0014);
  Push(0x0014);
  Push(0x0014);
  LLINE(); // LLINE
  Push(0x0014);
  Push(0x0014);
  Push(0x0011);
  Push(0x0017);
  LLINE(); // LLINE
  Push(0x0011);
  Push(0x0017);
  Push(0x0011);
  Push(0x001e);
  LLINE(); // LLINE
  Push(0x0011);
  Push(0x001e);
  Push(0x000e);
  Push(0x0021);
  LLINE(); // LLINE
  Push(0x000e);
  Push(0x0021);
  Push(cc__8); // 8
  Push(0x0021);
  LLINE(); // LLINE
  Push(cc__8); // 8
  Push(0x0021);
  Push(cc__5); // 5
  Push(0x0024);
  LLINE(); // LLINE
  Push(cc__5); // 5
  Push(0x0024);
  Push(cc__5); // 5
  Push(0x009b);
  LLINE(); // LLINE
  Push(cc__5); // 5
  Push(0x001d);
  Push(pp_COLOR); // COLOR
  Push(Read16(Pop())); // @
  _dot_1LOGO(); // .1LOGO
}


// ================================================
// 0xe53d: WORD 'UNK_0xe53f' codep=0x224c parp=0xe53f
// ================================================

void UNK_0xe53f() // UNK_0xe53f
{
  _gt_2FONT(); // >2FONT
  Push(0x0014);
  Push(0x0011);
  POS_dot_(); // POS.
  UNK_0xe431(); // UNK_0xe431
  PRINT("PRESS ANY KEY TO CONTINUE", 25); // (.")
  KEY_2(); // KEY_2
  Pop(); // DROP
}


// ================================================
// 0xe56f: WORD 'UNK_0xe571' codep=0x224c parp=0xe571
// ================================================

void UNK_0xe571() // UNK_0xe571
{
  _gt_DISPLA(); // >DISPLA
  DARK(); // DARK
  UNK_0xe45f(); // UNK_0xe45f
  BEEPOFF(); // BEEPOFF
  _gt_3FONT(); // >3FONT
  Push(0x002e);
  Push(0x00ab);
  POS_dot_(); // POS.
  PRINT("GAME", 4); // (.")
  Push(0x000a);
  Push(pp_XBLT); // XBLT
  _plus__ex__2(); // +!_2
  PRINT("OPTIONS", 7); // (.")
  _gt_2FONT(); // >2FONT
  Push(0x0027);
  Push(0x0011);
  POS_dot_(); // POS.
  PRINT("SELECT AN OPTION", 16); // (.")
  UNK_0xdf87(); // UNK_0xdf87
  if (Pop() == 0) goto label1;
  Push(0x0021);
  Push(0x0082);
  POS_dot_(); // POS.
  UNK_0xe127(); // UNK_0xe127

  label1:
  Push(0x0021);
  Push(0x006e);
  POS_dot_(); // POS.
  UNK_0xe162(); // UNK_0xe162
  Push(0x0021);
  Push(0x005a);
  POS_dot_(); // POS.
  UNK_0xe143(); // UNK_0xe143
  Push(0x0021);
  Push(0x0046);
  POS_dot_(); // POS.
  UNK_0xe17c(); // UNK_0xe17c
}

// 0xe5f5: db 0x4c 0x22 0x07 0x3f 0x0c 0x4c 0x4f 0x41 0x44 0x49 0x4e 0x47 0x20 0x47 0x41 0x4d 0x45 0x4f 0xe4 0x90 0x16 'L" ? LOADING GAMEO   '

// ================================================
// 0xe60a: WORD 'UNK_0xe60c' codep=0x224c parp=0xe60c
// ================================================

void UNK_0xe60c() // UNK_0xe60c
{
  _gt_2FONT(); // >2FONT

  UNK_0x3f09("COMPLETED");
  UNK_0xe451(); // UNK_0xe451
  Push(0x001e);
  Push(0x0011);
  POS_dot_(); // POS.
  UNK_0xe431(); // UNK_0xe431
  PRINT("PRESS ANY KEY TO EXIT", 21); // (.")
  _i_KEY(); // 'KEY
  Pop(); // DROP
  KEY_2(); // KEY_2
  Pop(); // DROP
  _gt_A(); // >A
  Exec(PAGE); // call of word 0x274c '(PAGE)'
  BYE_2(); // BYE_2
}


// ================================================
// 0xe650: WORD 'UNK_0xe652' codep=0x224c parp=0xe652
// ================================================

void UNK_0xe652() // UNK_0xe652
{
  TIME(); // TIME
  _2_at_(); // 2@
  D_plus_(); // D+

  label1:
  TIME(); // TIME
  _2_at_(); // 2@
  _2OVER(); // 2OVER
  D_gt_(); // D>
  _i_KEY(); // 'KEY
  Push(Read16(sp)); // DUP
  Push(pp_UNK_0xde76); // UNK_0xde76
  _ex__2(); // !_2
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label1;
  Pop(); Pop();// 2DROP
}


// ================================================
// 0xe672: WORD 'UNK_0xe674' codep=0x224c parp=0xe674
// ================================================

void UNK_0xe674() // UNK_0xe674
{
  Push(pp_TIMESTA); // TIMESTA
  _ex__2(); // !_2
}


// ================================================
// 0xe67a: WORD 'UNK_0xe67c' codep=0x224c parp=0xe67c
// ================================================

void UNK_0xe67c() // UNK_0xe67c
{
  Push(pp_TIMESTA); // TIMESTA
  Push(Read16(Pop())); // @
}


// ================================================
// 0xe682: WORD 'UNK_0xe684' codep=0x224c parp=0xe684
// ================================================

void UNK_0xe684() // UNK_0xe684
{
  Push(Read16(sp)); // DUP
  Func3(":TIMEST");
  _ex__2(); // !_2
}


// ================================================
// 0xe68c: WORD 'UNK_0xe68e' codep=0x224c parp=0xe68e
// ================================================

void UNK_0xe68e() // UNK_0xe68e
{
  TIME(); // TIME
  Push(Pop()+2); // 2+
  Push(Read16(Pop())); // @
  if (Read16(sp) != 0) Push(Read16(sp)); // ?DUP
  if (Pop() == 0) Push(1); else Push(0); // 0=
  if (Pop() == 0) goto label1;
  Push(2); // 2

  label1:
  UNK_0xe674(); // UNK_0xe674
}


// ================================================
// 0xe6a2: WORD 'UNK_0xe6a4' codep=0x224c parp=0xe6a4
// ================================================

void UNK_0xe6a4() // UNK_0xe6a4
{
  UNK_0xe67c(); // UNK_0xe67c
  UNK_0xe68e(); // UNK_0xe68e
  UNK_0xe67c(); // UNK_0xe67c
  SWAP(); // SWAP
  UNK_0xe674(); // UNK_0xe674
  MOUNTA(); // MOUNTA
  UNK_0xe684(); // UNK_0xe684
  MOUNTB(); // MOUNTB
  UNK_0xe684(); // UNK_0xe684
  UNK_0xe674(); // UNK_0xe674
}

// 0xe6ba: db 0x4c 0x22 0x02 0x3c 0xae 0x0b 0x5d 0x17 0xf4 0x01 0x92 0x0f 0x90 0x16 0x4c 0x22 0xba 0xe6 0x5d 0x17 0x32 0x00 0x72 0x0f 0x2d 0xe0 0xb8 0x88 0x5d 0xe4 0x07 0x3f 0x1b 0x50 0x4c 0x41 0x43 0x45 0x20 0x44 0x49 0x53 0x4b 0x20 0x43 0x4f 0x4e 0x54 0x41 0x49 0x4e 0x49 0x4e 0x47 0x20 0x46 0x49 0x4c 0x45 0x20 0x39 0xe0 0x23 0x41 0xa7 0x3b 0x8e 0x27 0x39 0xe0 0x5d 0x17 0x2e 0x00 0xba 0xe6 0x0a 0x6d 0x33 0x41 0xba 0xe6 0xe7 0x0f 0x7f 0x3b 0x8a 0x6d 0xba 0xe6 0x87 0x3b 0x39 0xe0 0x07 0x3f 0x06 0x20 0x49 0x4e 0x54 0x4f 0x20 0x39 0xe0 0x15 0x41 0x92 0x0c 0xc8 0x0d 0xfa 0x15 0x27 0x00 0x07 0x3f 0x06 0x44 0x52 0x49 0x56 0x45 0x20 0xba 0xe6 0xf2 0x0e 0x8a 0x6d 0x5d 0x17 0x40 0x00 0x72 0x0f 0xba 0xe6 0x9f 0x3b 0x72 0x0f 0x0a 0x6d 0xba 0xe6 0x9f 0x3b 0x60 0x16 0x0e 0x00 0x07 0x3f 0x09 0x41 0x4e 0x59 0x20 0x44 0x52 0x49 0x56 0x45 0x39 0xe0 0x25 0xe0 0xae 0x0b 0x29 0xe0 0xae 0x0b 0x4f 0xe4 0x3d 0xe5 0x90 0x16 0x4c 0x22 0xba 0xe6 0x5d 0x17 0x32 0x00 0x72 0x0f 0x2d 0xe0 0xb8 0x88 0x5d 0xe4 0x07 0x3f 0x22 0x50 0x4c 0x41 0x43 0x45 0x20 0x44 0x49 0x53 0x4b 0x20 0x43 0x4f 0x4e 0x54 0x41 0x49 0x4e 0x49 0x4e 0x47 0x20 0x54 0x48 0x45 0x20 0x43 0x4f 0x52 0x52 0x45 0x43 0x54 0x20 0x39 0xe0 0x39 0xe0 0x07 0x3f 0x05 0x20 0x46 0x49 0x4c 0x45 0x39 0xe0 0x25 0xe0 0xae 0x0b 0x29 0xe0 0xae 0x0b 0x4f 0xe4 0x3d 0xe5 0x90 0x16 'L" <  ]       L"  ] 2 r -   ]  ? PLACE DISK CONTAINING FILE 9 #A ; '9 ] .    m3A    ; m   ;9  ?  INTO 9  A      '  ? DRIVE      m] @ r    ;r  m   ;`    ? ANY DRIVE9 %   )   O =   L"  ] 2 r -   ]  ?"PLACE DISK CONTAINING THE CORRECT 9 9  ?  FILE9 %   )   O =   '

// ================================================
// 0xe7bf: WORD 'UNK_0xe7c1' codep=0x224c parp=0xe7c1
// ================================================

void UNK_0xe7c1() // UNK_0xe7c1
{
  Push(pp_PIC_n_); // PIC#
  Push(Read16(Pop())); // @
  _gt_R(); // >R
  R_at_(); // R@
  if (Pop() == 0) goto label1;
  R_at_(); // R@
  Push(0x000e);
  _gt_(); // >
  if (Pop() == 0) goto label2;
  Push(0xba0a);
  MODULE(); // MODULE

  label2:
  _ask_VGA(); // ?VGA
  if (Pop() == 0) goto label1;
  R_at_(); // R@
  Push(0x000f);
  Push(0x0022);
  WITHIN(); // WITHIN
  if (Pop() == 0) goto label3;
  R_at_(); // R@
  Push(0x000f);
  _dash_(); // -
  Push(0xb9e8);
  MODULE(); // MODULE
  goto label1;

  label3:
  R_at_(); // R@
  Push(0); // 0
  Push(0x000f);
  WITHIN(); // WITHIN
  if (Pop() == 0) goto label1;
  R_at_(); // R@
  Push(0xb9c8);
  MODULE(); // MODULE

  label1:
  R_gt_(); // R>
  Pop(); // DROP
}


// ================================================
// 0xe823: WORD 'UNK_0xe825' codep=0x224c parp=0xe825
// ================================================

void UNK_0xe825() // UNK_0xe825
{
  UNK_0xe431(); // UNK_0xe431
  BEEP(); // BEEP

  UNK_0x3f09("SAVED GAME INTEGRITY ERROR.");
  UNK_0xe451(); // UNK_0xe451
  UNK_0xe60c(); // UNK_0xe60c
}


// ================================================
// 0xe84d: WORD 'UNK_0xe84f' codep=0x224c parp=0xe84f
// ================================================

void UNK_0xe84f() // UNK_0xe84f
{
  Func3(":SAVE");
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) return;
  UNK_0xe431(); // UNK_0xe431
  BEEP(); // BEEP

  UNK_0x3f09("GAME IN PROGRESS WAS NOT SAVED.");
  UNK_0xe451(); // UNK_0xe451
  _i_KEY(); // 'KEY
  Pop(); // DROP
  UNK_0xe53f(); // UNK_0xe53f
  UNK_0xe60c(); // UNK_0xe60c
}


// ================================================
// 0xe88b: WORD 'UNK_0xe88d' codep=0x224c parp=0xe88d
// ================================================

void UNK_0xe88d() // UNK_0xe88d
{
  Push(0x00ff);
  Push(pp_DERROR); // DERROR
  _ex__2(); // !_2
  _at_DS(); // @DS
  PAD(); // PAD
  Push(0x0032);
  Push(Pop() + Pop()); // +
  Push(pp_DTA_1); // DTA_1
  _2_ex__2(); // 2!_2
  DOS_dash_DTA(); // DOS-DTA
  Push(0); // 0
  RELREC(); // RELREC
  _ex__2(); // !_2
  Push(1); // 1
  RECSIZE(); // RECSIZE
  _ex__2(); // !_2
  READ_dash_RA(); // READ-RA
  WRITE_dash_R(); // WRITE-R
  Pop(); Pop();// 2DROP
  INIT(); // INIT
  Push(pp_DERROR); // DERROR
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // 0=
}


// ================================================
// 0xe8c1: WORD 'UNK_0xe8c3' codep=0x224c parp=0xe8c3
// ================================================

void UNK_0xe8c3() // UNK_0xe8c3
{
  CTINIT(); // CTINIT

  UNK_0x3f09("MUST PLAY ON A WRITABLE COPY.");
  _dot_TTY(); // .TTY

  UNK_0x3f09("PRESS ANY KEY TO EXIT.");
  _dot_TTY(); // .TTY
  KEY_2(); // KEY_2
  Pop(); // DROP
  BYE_2(); // BYE_2
}


// ================================================
// 0xe90a: WORD 'UNK_0xe90c' codep=0x224c parp=0xe90c
// ================================================

void UNK_0xe90c() // UNK_0xe90c
{
  CTINIT(); // CTINIT
  Push(0xaa3b);
  Push(pp_ASKMOUN); // ASKMOUN
  _ex__2(); // !_2
  Push(0xaa1d);
  Push(pp__i_VERSIO); // 'VERSIO
  _ex__2(); // !_2
}


// ================================================
// 0xe920: WORD 'UNK_0xe922' codep=0x224c parp=0xe922
// ================================================

void UNK_0xe922() // UNK_0xe922
{

  UNK_0x3f09("RESUMING THE GAME IN PROGRESS...");
  UNK_0xe451(); // UNK_0xe451
  Push(0x03e8);
  MS(); // MS
}


// ================================================
// 0xe94f: WORD 'UNK_0xe951' codep=0x224c parp=0xe951
// ================================================

void UNK_0xe951() // UNK_0xe951
{
  if (Pop() == 0) return;
  _2SWAP(); // 2SWAP
}


// ================================================
// 0xe959: WORD 'UNK_0xe95b' codep=0x224c parp=0xe95b
// ================================================

void UNK_0xe95b() // UNK_0xe95b
{
  MOUNTA(); // MOUNTA
  Push(pp__ask_EGA); // ?EGA
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  _gt_HIDDEN(); // >HIDDEN
  goto label2;

  label1:
  _gt_HIDDEN(); // >HIDDEN
  DARK(); // DARK
  _gt_DISPLA(); // >DISPLA

  label2:
  DARK(); // DARK
  UNK_0xe1a5(); // UNK_0xe1a5
  Push(pp_UNK_0xde1a); // UNK_0xde1a
  Push(Read16(Pop())); // @
  Push(0); // 0
  Push(pp_XBUF_dash_SE); // XBUF-SE
  Push(Read16(Pop())); // @
  OVER(); // OVER
  Push(cc__16K); // 16K
  Push(0x0032);
  Push(Pop() + Pop()); // +
  LCMOVE(); // LCMOVE
  Push(0xb603);
  MODULE(); // MODULE
  Push(0); // 0
  Push(0x00c7);
  _dot_RAW(); // .RAW
  UNK_0xe90c(); // UNK_0xe90c
  Push(pp_UNK_0xde1a); // UNK_0xde1a
  Push(Read16(Pop())); // @
  Push(0x0400);
  Push(Pop() + Pop()); // +
  Push(0); // 0
  Push(pp_XBUF_dash_SE); // XBUF-SE
  Push(Read16(Pop())); // @
  OVER(); // OVER
  Push(cc__16K); // 16K
  Push(0x0032);
  Push(Pop() + Pop()); // +
  LCMOVE(); // LCMOVE
  Push(0xb603);
  MODULE(); // MODULE
  Push(0); // 0
  Push(0x0063);
  _dot_RAW(); // .RAW
  Push(pp__ask_EGA); // ?EGA
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label3;
  SCR_dash_RES(); // SCR-RES

  label3:
  UNK_0xe7c1(); // UNK_0xe7c1
}


// ================================================
// 0xe9d3: WORD 'UNK_0xe9d5' codep=0x224c parp=0xe9d5
// ================================================

void UNK_0xe9d5() // UNK_0xe9d5
{
  Push(pp_HUB); // HUB
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  MOUNTB(); // MOUNTB
  Push(0xd516);
  MODULE(); // MODULE
  UNK_0xe90c(); // UNK_0xe90c
  goto label2;

  label1:
  UNK_0xe95b(); // UNK_0xe95b

  label2:
  H_gt_D(); // H>D
  _gt_DISPLA(); // >DISPLA
}


// ================================================
// 0xe9f3: WORD 'PRESE' codep=0x224c parp=0xe9fd
// ================================================

void PRESE() // PRESE
{
  UNK_0xe1a5(); // UNK_0xe1a5
  Push(0x00c7);
  UNK_0xe1af(); // UNK_0xe1af
  Push(0x0400);
  Push(pp_UNK_0xde1a); // UNK_0xde1a
  _plus__ex__2(); // +!_2
  Push(0x0063);
  UNK_0xe1af(); // UNK_0xe1af
}


// ================================================
// 0xea15: WORD 'UNK_0xea17' codep=0x224c parp=0xea17
// ================================================

void UNK_0xea17() // UNK_0xea17
{
  Push(pp_ESC_dash_EN); // ESC-EN
  _099(); // 099
}


// ================================================
// 0xea1d: WORD 'UNK_0xea1f' codep=0x224c parp=0xea1f
// ================================================

void UNK_0xea1f() // UNK_0xea1f
{
  Push(pp_ESC_dash_EN); // ESC-EN
  ON_2(); // ON_2
}


// ================================================
// 0xea25: WORD 'UNK_0xea27' codep=0x224c parp=0xea27
// ================================================

void UNK_0xea27() // UNK_0xea27
{
  Push(pp__n_CACHE); // #CACHE
  _099(); // 099
  AUTO_dash_CACHE(); // AUTO-CACHE
}


// ================================================
// 0xea2f: WORD 'UNK_0xea31' codep=0x224c parp=0xea31
// ================================================

void UNK_0xea31() // UNK_0xea31
{
  Push(pp__bo__n_CACHE); // [#CACHE
  Push(Read16(Pop())); // @
  Push(pp__n_CACHE); // #CACHE
  _ex__2(); // !_2
  AUTO_dash_CACHE(); // AUTO-CACHE
}


// ================================================
// 0xea3d: WORD 'UNK_0xea3f' codep=0x224c parp=0xea3f
// ================================================

void UNK_0xea3f() // UNK_0xea3f
{
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(Read16(sp)); // DUP
  Push(i); // I
  Push(Pop() + Pop()); // +
  Push(Read8(Pop())&0xFF); // C@
  Push(pp_UNK_0xde16); // UNK_0xde16
  _plus__ex__2(); // +!_2
  Push(1); // 1
  i += Pop();
  } while(i<imax); // (/LOOP) 0xfff0

  Pop(); // DROP
}


// ================================================
// 0xea59: WORD 'UNK_0xea5b' codep=0x224c parp=0xea5b
// ================================================

void UNK_0xea5b() // UNK_0xea5b
{
  Push(0xe6ca);
  Push(pp_ASKMOUN); // ASKMOUN
  _ex__2(); // !_2
  Push(0xe770);
  Push(pp__i_VERSIO); // 'VERSIO
  _ex__2(); // !_2
}


// ================================================
// 0xea6d: WORD 'UNK_0xea6f' codep=0x224c parp=0xea6f
// ================================================

void UNK_0xea6f() // UNK_0xea6f
{
  UNK_0xe199(); // UNK_0xe199
  _gt_(); // >
  if (Pop() == 0) Push(1); else Push(0); // NOT
}


// ================================================
// 0xea77: WORD 'UNK_0xea79' codep=0x224c parp=0xea79
// ================================================

void UNK_0xea79() // UNK_0xea79
{
  Push(Read16(sp)); // DUP
  UNK_0xea6f(); // UNK_0xea6f
  if (Pop() == 0) goto label1;
  _at_DS(); // @DS
  _dash_(); // -
  Push(1); // 1
  return;

  label1:
  Push(pp_LFSEG); // LFSEG
  Push(Read16(Pop())); // @
  _dash_(); // -
  Push(0); // 0
}


// ================================================
// 0xea95: WORD 'UNK_0xea97' codep=0x224c parp=0xea97
// ================================================

void UNK_0xea97() // UNK_0xea97
{
  if (Pop() == 0) goto label1;
  _at_DS(); // @DS
  Push(Pop() + Pop()); // +
  return;

  label1:
  Push(pp_LFSEG); // LFSEG
  Push(Read16(Pop())); // @
  Push(Pop() + Pop()); // +
}


// ================================================
// 0xeaab: WORD 'UNK_0xeaad' codep=0x224c parp=0xeaad
// ================================================

void UNK_0xeaad() // UNK_0xeaad
{
  Push(pp_BUF_dash_SEG); // BUF-SEG
  Push(Read16(Pop())); // @
  Push(pp_DBUF_dash_SE); // DBUF-SE
  Push(Read16(Pop())); // @
  _eq_(); // =
  Push(pp_BLTSEG); // BLTSEG
  Push(Read16(Pop())); // @
  UNK_0xea79(); // UNK_0xea79
  Push(pp__3DSEG); // 3DSEG
  Push(Read16(Pop())); // @
  UNK_0xea79(); // UNK_0xea79
  Push(cc_UNK_0xdf25); // UNK_0xdf25
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(i); // I
  Func1("VECTORS");
  Push(Read16(Pop())); // @
  i++;
  } while(i<imax); // (LOOP) 0xfff8

}


// ================================================
// 0xead5: WORD 'UNK_0xead7' codep=0x224c parp=0xead7
// ================================================

void UNK_0xead7() // UNK_0xead7
{
  Push(0); // 0
  Push(cc_UNK_0xdf25); // UNK_0xdf25
  Push(Pop()-1); // 1-

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(i); // I
  Func1("VECTORS");
  _ex__2(); // !_2
  Push(cc__dash_1); // -1
  int step = Pop();
  i += step;
  } while(((step>=0) && (i<imax)) || ((step<0) && (i>imax))); // (+LOOP) 0xfff6

  UNK_0xea97(); // UNK_0xea97
  Push(pp__3DSEG); // 3DSEG
  _ex__2(); // !_2
  UNK_0xea97(); // UNK_0xea97
  Push(pp_BLTSEG); // BLTSEG
  _ex__2(); // !_2
  if (Pop() == 0) goto label1;
  Push(pp_DBUF_dash_SE); // DBUF-SE
  goto label2;

  label1:
  Push(pp_HBUF_dash_SE); // HBUF-SE

  label2:
  Push(Read16(Pop())); // @
  Push(pp_BUF_dash_SEG); // BUF-SEG
  _ex__2(); // !_2
}


// ================================================
// 0xeb0b: WORD 'UNK_0xeb0d' codep=0x224c parp=0xeb0d
// ================================================

void UNK_0xeb0d() // UNK_0xeb0d
{
  UNK_0xe431(); // UNK_0xe431

  UNK_0x3f09("LOADING GAME IN PROGRESS...");
  UNK_0xe451(); // UNK_0xe451
  Push(0x0037);
  Push(0x0011);
  POS_dot_(); // POS.
  PRINT("PLEASE WAIT", 11); // (.")
}


// ================================================
// 0xeb49: WORD 'UNK_0xeb4b' codep=0x224c parp=0xeb4b
// ================================================

void UNK_0xeb4b() // UNK_0xeb4b
{
  UNK_0xe431(); // UNK_0xe431

  UNK_0x3f09("...GAME LOAD COMPLETE.");
  UNK_0xe451(); // UNK_0xe451
  Push(0x05dc);
  MS(); // MS
}


// ================================================
// 0xeb70: WORD 'UNK_0xeb72' codep=0x224c parp=0xeb72
// ================================================

void UNK_0xeb72() // UNK_0xeb72
{
  UNK_0xe431(); // UNK_0xe431

  UNK_0x3f09("SAVING GAME...");
  UNK_0xe451(); // UNK_0xe451
  Push(0x0037);
  Push(0x0011);
  POS_dot_(); // POS.
  PRINT("PLEASE WAIT", 11); // (.")
}

// 0xeba1: db 0x4c 0x22 0x2f 0xe4 0x07 0x3f 0x13 0x47 0x41 0x4d 0x45 0x20 0x53 0x41 0x56 0x45 0x20 0x43 0x4f 0x4d 0x50 0x4c 0x45 0x54 0x45 0x2e 0x4f 0xe4 0x0a 0xe6 0x90 0x16 'L"/  ? GAME SAVE COMPLETE.O     '

// ================================================
// 0xebc1: WORD 'PRMSA' codep=0xebcb parp=0xebcb
// ================================================
// 0xebcb: pop    bx
// 0xebcc: mov    [bx],sp
// 0xebce: inc    bx
// 0xebcf: inc    bx
// 0xebd0: push   si
// 0xebd1: push   di
// 0xebd2: mov    di,bx
// 0xebd4: mov    si,[078C]
// 0xebd8: sub    si,03E8
// 0xebdc: mov    cx,03E8
// 0xebdf: repz   
// 0xebe0: movsb
// 0xebe1: pop    di
// 0xebe2: pop    si
// 0xebe3: lodsw
// 0xebe4: mov    bx,ax
// 0xebe6: jmp    word ptr [bx]

// ================================================
// 0xebe8: WORD 'PRMLO' codep=0xebf2 parp=0xebf2
// ================================================
// 0xebf2: pop    bx
// 0xebf3: mov    sp,[bx]
// 0xebf5: inc    bx
// 0xebf6: inc    bx
// 0xebf7: mov    [bp-02],si
// 0xebfa: mov    [bp-04],di
// 0xebfd: mov    si,bx
// 0xebff: cli    
// 0xec00: push   ds
// 0xec01: pop    es
// 0xec02: mov    di,[078C]
// 0xec06: sub    di,03E8
// 0xec0a: mov    cx,03E8
// 0xec0d: repz   
// 0xec0e: movsb
// 0xec0f: add    sp,[DD22]
// 0xec13: mov    si,[bp-02]
// 0xec16: mov    di,[bp-04]
// 0xec19: sti    
// 0xec1a: lodsw
// 0xec1b: mov    bx,ax
// 0xec1d: jmp    word ptr [bx]

// ================================================
// 0xec1f: WORD 'RETSA' codep=0xec29 parp=0xec29
// ================================================
// 0xec29: pop    bx
// 0xec2a: mov    [bx],bp
// 0xec2c: inc    bx
// 0xec2d: inc    bx
// 0xec2e: push   si
// 0xec2f: push   di
// 0xec30: mov    di,bx
// 0xec32: mov    si,[078E]
// 0xec36: sub    si,00DC
// 0xec3a: mov    cx,00DC
// 0xec3d: repz   
// 0xec3e: movsb
// 0xec3f: pop    di
// 0xec40: pop    si
// 0xec41: lodsw
// 0xec42: mov    bx,ax
// 0xec44: jmp    word ptr [bx]

// ================================================
// 0xec46: WORD 'RETJM' codep=0xec50 parp=0xec50
// ================================================
// 0xec50: cli    
// 0xec51: push   ds
// 0xec52: pop    es
// 0xec53: pop    bx
// 0xec54: mov    bp,[bx]
// 0xec56: inc    bx
// 0xec57: inc    bx
// 0xec58: mov    si,bx
// 0xec5a: push   di
// 0xec5b: mov    di,[078E]
// 0xec5f: sub    di,00DC
// 0xec63: mov    cx,00DC
// 0xec66: repz   
// 0xec67: movsb
// 0xec68: pop    di
// 0xec69: add    bp,[DD1E]
// 0xec6d: mov    si,[bp+00]
// 0xec70: inc    bp
// 0xec71: inc    bp
// 0xec72: sti    
// 0xec73: lodsw
// 0xec74: mov    bx,ax
// 0xec76: jmp    word ptr [bx]

// ================================================
// 0xec78: WORD 'UNK_0xec7a' codep=0x224c parp=0xec7a
// ================================================

void UNK_0xec7a() // UNK_0xec7a
{
  _gt_R(); // >R
  Push(Read16(sp)); // DUP
  Push(0); // 0
  Push(0x0400);
  U_slash_MOD(); // U/MOD
  SWAP(); // SWAP
  if (Pop() == 0) goto label1;
  Push(Pop()+1); // 1+

  label1:
  if (Read16(sp) != 0) Push(Read16(sp)); // ?DUP
  if (Pop() == 0) goto label2;
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(cc__4); // 4
  PICK(); // PICK
  Push(i); // I
  Push(0x0040);
  Push(Pop() * Pop()); // *
  Push(Pop() + Pop()); // +
  Push(cc__4); // 4
  PICK(); // PICK
  _at_DS(); // @DS
  Push(cc__5); // 5
  PICK(); // PICK
  Push(i); // I
  Push(Pop() + Pop()); // +
  BLOCK_2(); // BLOCK_2
  _2OVER(); // 2OVER
  _2OVER(); // 2OVER
  Push(h); // J
  if (Pop() == 0) Push(1); else Push(0); // NOT
  UNK_0xe951(); // UNK_0xe951
  Push(cc__9); // 9
  PICK(); // PICK
  Push(cc_UNK_0xdd26); // UNK_0xdd26
  UMIN(); // UMIN
  LCMOVE(); // LCMOVE
  Push(h); // J
  if (Pop() == 0) goto label3;
  UPDATE(); // UPDATE

  label3:
  Push(cc__5); // 5
  PICK(); // PICK
  Push(cc_UNK_0xdd26); // UNK_0xdd26
  UMIN(); // UMIN
  UNK_0xea3f(); // UNK_0xea3f
  Pop(); // DROP
  Pop(); Pop();// 2DROP
  Push(0x0400);
  _dash_(); // -
  i++;
  } while(i<imax); // (LOOP) 0xffb0

  Push(i); // I
  if (Pop() == 0) goto label2;
  SAVE_dash_BU(); // SAVE-BU

  label2:
  R_gt_(); // R>
  Pop(); // DROP
  Pop(); Pop();// 2DROP
  Pop(); Pop();// 2DROP
}


// ================================================
// 0xecfc: WORD 'UNK_0xecfe' codep=0x224c parp=0xecfe
// ================================================

void UNK_0xecfe() // UNK_0xecfe
{
  Push(0); // 0
  UNK_0xec7a(); // UNK_0xec7a
}


// ================================================
// 0xed04: WORD 'UNK_0xed06' codep=0x224c parp=0xed06
// ================================================

void UNK_0xed06() // UNK_0xed06
{
  Push(1); // 1
  UNK_0xec7a(); // UNK_0xec7a
}


// ================================================
// 0xed0c: WORD 'UNK_0xed0e' codep=0x224c parp=0xed0e
// ================================================

void UNK_0xed0e() // UNK_0xed0e
{
  Push(pp_SSYSEG); // SSYSEG
  Push(Read16(Pop())); // @
}


// ================================================
// 0xed14: WORD 'UNK_0xed16' codep=0x224c parp=0xed16
// ================================================

void UNK_0xed16() // UNK_0xed16
{
  Push(pp_SYSK); // SYSK
  Push(Read16(Pop())); // @
  Push(0x0040);
  Push(Pop() * Pop()); // *
  Push(Pop()-1); // 1-
  UNK_0xed0e(); // UNK_0xed0e
  _dash_(); // -
  Push(Pop()<<4); // 16*
}


// ================================================
// 0xed2a: WORD 'UNK_0xed2c' codep=0x224c parp=0xed2c
// ================================================

void UNK_0xed2c() // UNK_0xed2c
{
  UNK_0xed0e(); // UNK_0xed0e
  Push(0); // 0
  Push(cc_UNK_0xdd1a); // UNK_0xdd1a
  UNK_0xed16(); // UNK_0xed16
  UNK_0xed06(); // UNK_0xed06
}


// ================================================
// 0xed38: WORD 'UNK_0xed3a' codep=0x224c parp=0xed3a
// ================================================

void UNK_0xed3a() // UNK_0xed3a
{
  UNK_0xed0e(); // UNK_0xed0e
  Push(0); // 0
  Push(cc_UNK_0xdd1a); // UNK_0xdd1a
  UNK_0xed16(); // UNK_0xed16
  UNK_0xecfe(); // UNK_0xecfe
}


// ================================================
// 0xed46: WORD 'UNK_0xed48' codep=0x224c parp=0xed48
// ================================================

void UNK_0xed48() // UNK_0xed48
{
  UNK_0xe199(); // UNK_0xe199
  Push(0); // 0
  Push(cc_UNK_0xdd0e); // UNK_0xdd0e
  Push(cc__16K); // 16K
  Push(Pop()*2); // 2*
  Push(0x0064);
  Push(Pop() + Pop()); // +
  UNK_0xed06(); // UNK_0xed06
}


// ================================================
// 0xed5c: WORD 'UNK_0xed5e' codep=0x224c parp=0xed5e
// ================================================

void UNK_0xed5e() // UNK_0xed5e
{
  UNK_0xe199(); // UNK_0xe199
  Push(0); // 0
  Push(cc_UNK_0xdd0e); // UNK_0xdd0e
  Push(cc__16K); // 16K
  Push(Pop()*2); // 2*
  Push(0x0064);
  Push(Pop() + Pop()); // +
  UNK_0xecfe(); // UNK_0xecfe
}


// ================================================
// 0xed72: WORD 'UNK_0xed74' codep=0x224c parp=0xed74
// ================================================

void UNK_0xed74() // UNK_0xed74
{
  Func3(":SAVE");
  _ex__2(); // !_2
}


// ================================================
// 0xed7a: WORD 'UNK_0xed7c' codep=0x224c parp=0xed7c
// ================================================

void UNK_0xed7c() // UNK_0xed7c
{
  UNK_0xe67c(); // UNK_0xe67c
  UNK_0xe68e(); // UNK_0xe68e
  UNK_0xe67c(); // UNK_0xe67c
  UNK_0xe684(); // UNK_0xe684
  Push(1); // 1
  UNK_0xed74(); // UNK_0xed74
  SWAP(); // SWAP
  UNK_0xe674(); // UNK_0xe674
  MOUNTA(); // MOUNTA
  UNK_0xe684(); // UNK_0xe684
  Push(1); // 1
  UNK_0xed74(); // UNK_0xed74
  UNK_0xe674(); // UNK_0xe674
  SAVE_dash_BU(); // SAVE-BU
}


// ================================================
// 0xed9a: WORD 'UNK_0xed9c' codep=0x224c parp=0xed9c
// ================================================

void UNK_0xed9c() // UNK_0xed9c
{
  Push(pp_OVA); // OVA
  Push(Read16(Pop())); // @
  Push(cc_UNK_0xdd2a); // UNK_0xdd2a
  _dash_(); // -
}


// ================================================
// 0xeda6: WORD 'UNK_0xeda8' codep=0x224c parp=0xeda8
// ================================================

void UNK_0xeda8() // UNK_0xeda8
{
  _at_DS(); // @DS
  Push(cc_UNK_0xdd2a); // UNK_0xdd2a
  Push(cc_UNK_0xdd0a); // UNK_0xdd0a
  UNK_0xed9c(); // UNK_0xed9c
  UNK_0xecfe(); // UNK_0xecfe
}


// ================================================
// 0xedb4: WORD 'UNK_0xedb6' codep=0x224c parp=0xedb6
// ================================================

void UNK_0xedb6() // UNK_0xedb6
{
  _at_DS(); // @DS
  Push(cc_UNK_0xdd2a); // UNK_0xdd2a
  Push(cc_UNK_0xdd0a); // UNK_0xdd0a
  UNK_0xed9c(); // UNK_0xed9c
  UNK_0xed06(); // UNK_0xed06
}


// ================================================
// 0xedc2: WORD 'UNK_0xedc4' codep=0x224c parp=0xedc4
// ================================================

void UNK_0xedc4() // UNK_0xedc4
{
  _ask_VGA(); // ?VGA
  if (Pop() == 0) return;
  PAD_gt_SEG(); // PAD>SEG
  Push(0x0036);
  FILE_st_(); // FILE<
  _at_DS(); // @DS
  Push(cc_DS); // DS
  _ex__2(); // !_2
  PAD_v_16(); // PAD|16
  Push(cc_BX); // BX
  _ex__2(); // !_2
  Push(cc__9); // 9
  Push(cc_AX); // AX
  _ex__2(); // !_2
  GRCALL(); // GRCALL
}


// ================================================
// 0xede8: WORD 'UNK_0xedea' codep=0x224c parp=0xedea
// ================================================

void UNK_0xedea() // UNK_0xedea
{
  Push(cc_UNK_0xdd12); // UNK_0xdd12
  BLOCK_2(); // BLOCK_2
  RETSA(); // RETSA
  UPDATE(); // UPDATE
}


// ================================================
// 0xedf4: WORD 'UNK_0xedf6' codep=0x224c parp=0xedf6
// ================================================

void UNK_0xedf6() // UNK_0xedf6
{
  Push(cc_UNK_0xdd12); // UNK_0xdd12
  BLOCK_2(); // BLOCK_2
  Push(pp_UNK_0xdd32); // UNK_0xdd32
  Push(0x00de);
  CMOVE_2(); // CMOVE_2
}


// ================================================
// 0xee04: WORD 'UNK_0xee06' codep=0x224c parp=0xee06
// ================================================

void UNK_0xee06() // UNK_0xee06
{
  Push(cc_UNK_0xdd16); // UNK_0xdd16
  BLOCK_2(); // BLOCK_2
  PRMSA(); // PRMSA
  UPDATE(); // UPDATE
}


// ================================================
// 0xee10: WORD 'UNK_0xee12' codep=0x224c parp=0xee12
// ================================================

void UNK_0xee12() // UNK_0xee12
{
  Push(cc_UNK_0xdd16); // UNK_0xdd16
  BLOCK_2(); // BLOCK_2
  PRMLO(); // PRMLO
}


// ================================================
// 0xee1a: WORD 'UNK_0xee1c' codep=0x224c parp=0xee1c
// ================================================

void UNK_0xee1c() // UNK_0xee1c
{
  UNK_0xeb72(); // UNK_0xeb72
  Push(pp_UNK_0xde16); // UNK_0xde16
  _099(); // 099
  _ro_RESTORE_rc_(); // (RESTORE)
  UNK_0xedb6(); // UNK_0xedb6
  UNK_0xed48(); // UNK_0xed48
  UNK_0xed2c(); // UNK_0xed2c
  UNK_0xee06(); // UNK_0xee06
  UNK_0xedea(); // UNK_0xedea
  Push(pp_UNK_0xde16); // UNK_0xde16
  Push(Read16(Pop())); // @
  Func3(":CKSUM");
  _ex__2(); // !_2
  UNK_0xed7c(); // UNK_0xed7c
  _ro_SETUP_rc_(); // (SETUP)
  SAVE_dash_BU(); // SAVE-BU
}


// ================================================
// 0xee3e: WORD 'UNK_0xee40' codep=0x224c parp=0xee40
// ================================================

void UNK_0xee40() // UNK_0xee40
{
  Push(0); // 0
  UNK_0xed74(); // UNK_0xed74
  MOUNTB(); // MOUNTB
  Push(0); // 0
  UNK_0xed74(); // UNK_0xed74
  SAVE_dash_BU(); // SAVE-BU
}


// ================================================
// 0xee4e: WORD 'UNK_0xee50' codep=0x224c parp=0xee50
// ================================================

void UNK_0xee50() // UNK_0xee50
{
  Push(cc_UNK_0xdefa); // UNK_0xdefa
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(i); // I
  Func1("HOST");
  Push(Read16(Pop())); // @
  i++;
  } while(i<imax); // (LOOP) 0xfff8

  _ro_RESTORE_rc_(); // (RESTORE)
}


// ================================================
// 0xee64: WORD 'UNK_0xee66' codep=0x224c parp=0xee66
// ================================================

void UNK_0xee66() // UNK_0xee66
{
  Push(0); // 0
  Push(cc_UNK_0xdefa); // UNK_0xdefa
  Push(Pop()-1); // 1-

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(i); // I
  Func1("HOST");
  _ex__2(); // !_2
  Push(cc__dash_1); // -1
  int step = Pop();
  i += step;
  } while(((step>=0) && (i<imax)) || ((step<0) && (i>imax))); // (+LOOP) 0xfff6

  _ro_SETUP_rc_(); // (SETUP)
  SETDBUF(); // SETDBUF
}


// ================================================
// 0xee80: WORD 'UNK_0xee82' codep=0x224c parp=0xee82
// ================================================

void UNK_0xee82() // UNK_0xee82
{
  UNK_0xeb0d(); // UNK_0xeb0d
  Push(pp_UNK_0xde16); // UNK_0xde16
  _099(); // 099
  EMPTY_dash_BUFFERS(); // EMPTY-BUFFERS
  UNK_0xee50(); // UNK_0xee50
  UNK_0xeda8(); // UNK_0xeda8
  UNK_0xee66(); // UNK_0xee66
  UNK_0xed5e(); // UNK_0xed5e
  UNK_0xed3a(); // UNK_0xed3a
  UNK_0xee12(); // UNK_0xee12
  UNK_0xedf6(); // UNK_0xedf6
  Push(pp_UNK_0xde16); // UNK_0xde16
  Push(Read16(Pop())); // @
  Func3(":CKSUM");
  Push(Read16(Pop())); // @
  _eq_(); // =
  if (Pop() == 0) goto label1;
  UNK_0xeb4b(); // UNK_0xeb4b
  return;

  label1:
  UNK_0xe825(); // UNK_0xe825
}


// ================================================
// 0xeeb0: WORD 'LOAD.' codep=0x224c parp=0xeeba
// ================================================

void LOAD_dot_() // LOAD.
{
  UNK_0xea5b(); // UNK_0xea5b
  _gt_DISPLA(); // >DISPLA
  DARK(); // DARK
  UNK_0xe45f(); // UNK_0xe45f
  EMPTY_dash_BUFFERS(); // EMPTY-BUFFERS
  UNK_0xea27(); // UNK_0xea27
  UNK_0xe84f(); // UNK_0xe84f
  MOUNTA(); // MOUNTA
  UNK_0xee82(); // UNK_0xee82
  UNK_0xee40(); // UNK_0xee40
  _gt_1FONT(); // >1FONT
  _gt_LORES(); // >LORES
  _ex_PAL(); // !PAL
  UNK_0xedc4(); // UNK_0xedc4
  Push(pp_UNK_0xdd2e); // UNK_0xdd2e
  ON_2(); // ON_2
  Push(pp_UNK_0xdd32); // UNK_0xdd32
  RETJM(); // RETJM
}

// 0xeee0: db 0x4c 0x22 0x45 0x8d 0xb8 0x88 0x5d 0xe4 0x7a 0xed 0x1a 0xee 0x7f 0x3b 0xc7 0x34 0xc8 0x6f 0x20 0x0f 0xbf 0x6d 0x32 0x0e 0xbd 0x2f 0x7a 0x7b 0x3d 0x0f 0xc7 0x34 0xa1 0xeb 0x90 0x16 'L"E   ] z   ; 4 o   m2  /z{=  4    '

// ================================================
// 0xef04: WORD 'UNK_0xef06' codep=0x224c parp=0xef06
// ================================================

void UNK_0xef06() // UNK_0xef06
{
  Push(0x00c9);
  Exec(EMIT); // call of word 0x2731 '(EMIT)'
  Push(0x00cd);
  SWAP(); // SWAP
  EMITS(); // EMITS
  Push(0x00bb);
  Exec(EMIT); // call of word 0x2731 '(EMIT)'
}


// ================================================
// 0xef1c: WORD 'UNK_0xef1e' codep=0x224c parp=0xef1e
// ================================================

void UNK_0xef1e() // UNK_0xef1e
{
  Push(0x00ba);
  Exec(EMIT); // call of word 0x2731 '(EMIT)'
  Push(tt_ROW); // ROW
  Push(Read8(Pop())&0xFF); // C@
  SWAP(); // SWAP
  Push(tt_COL); // COL
  Push(Read8(Pop())&0xFF); // C@
  Push(Pop() + Pop()); // +
  Exec(POSITION); // call of word 0x2767 '(POSITION)'
  Push(0x00ba);
  Exec(EMIT); // call of word 0x2731 '(EMIT)'
}


// ================================================
// 0xef3a: WORD 'UNK_0xef3c' codep=0x224c parp=0xef3c
// ================================================

void UNK_0xef3c() // UNK_0xef3c
{
  Push(0x00c8);
  Exec(EMIT); // call of word 0x2731 '(EMIT)'
  Push(0x00cd);
  SWAP(); // SWAP
  EMITS(); // EMITS
  Push(0x00bc);
  Exec(EMIT); // call of word 0x2731 '(EMIT)'
}


// ================================================
// 0xef52: WORD 'UNK_0xef54' codep=0x224c parp=0xef54
// ================================================

void UNK_0xef54() // UNK_0xef54
{
  _gt_R(); // >R
  _gt_R(); // >R
  _2DUP(); // 2DUP
  Exec(POSITION); // call of word 0x2767 '(POSITION)'
  Push(h); // I'
  UNK_0xef06(); // UNK_0xef06
  R_gt_(); // R>
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  SWAP(); // SWAP
  Push(Pop()+1); // 1+
  SWAP(); // SWAP
  _2DUP(); // 2DUP
  Exec(POSITION); // call of word 0x2767 '(POSITION)'
  Push(h); // J
  UNK_0xef1e(); // UNK_0xef1e
  i++;
  } while(i<imax); // (LOOP) 0xfff0

  SWAP(); // SWAP
  Push(Pop()+1); // 1+
  SWAP(); // SWAP
  Exec(POSITION); // call of word 0x2767 '(POSITION)'
  R_gt_(); // R>
  UNK_0xef3c(); // UNK_0xef3c
}


// ================================================
// 0xef86: WORD 'UNK_0xef88' codep=0x224c parp=0xef88
// ================================================

void UNK_0xef88() // UNK_0xef88
{
  UNK_0xed7c(); // UNK_0xed7c
  UNK_0xee1c(); // UNK_0xee1c
  MOUNTB(); // MOUNTB
  Push(0); // 0
  BLOCK_2(); // BLOCK_2
  Pop(); // DROP
  UPDATE(); // UPDATE
  SAVE_dash_BU(); // SAVE-BU
}


// ================================================
// 0xef9a: WORD 'UNK_0xef9c' codep=0x224c parp=0xef9c
// ================================================

void UNK_0xef9c() // UNK_0xef9c
{
  _at_MODE(); // @MODE
  _0_gt_(); // 0>
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) goto label1;
  _gt_A(); // >A
  PRINT("needs Color Graphics", 20); // (.")
  Push(0x4e20); Pust(0x0000);
  UNK_0xe652(); // UNK_0xe652
  BYE_2(); // BYE_2
  return;

  label1:
  Push(pp_MONITOR); // MONITOR
  Push(Read16(Pop())); // @
  LDPAL(); // LDPAL
  _gt_DISPLA(); // >DISPLA
  _gt_LORES(); // >LORES
  DARK(); // DARK
}


// ================================================
// 0xefdb: WORD 'UNK_0xefdd' codep=0x224c parp=0xefdd
// ================================================

void UNK_0xefdd() // UNK_0xefdd
{
  Push(0x1bee);
  TIME(); // TIME
  _2_at_(); // 2@
  Push(0x0064);
  Push(0); // 0

  signed short int i = Pop();
  signed short int imax = Pop();
  do // (DO)
  {
  Push(0x03e8);
  Push(0); // 0

  signed short int j = Pop();
  signed short int jmax = Pop();
  do // (DO)
  {
  NOP(); // NOP
  j++;
  } while(j<jmax); // (LOOP) 0xfffc

  i++;
  } while(i<imax); // (LOOP) 0xfff0

  TIME(); // TIME
  _2_at_(); // 2@
  _2SWAP(); // 2SWAP
  D_dash_(); // D-
  Pop(); // DROP
  _slash_(); // /
  Push(1); // 1
  MAX(); // MAX
  Push(0x53a9);
  _ex__2(); // !_2
}


// ================================================
// 0xf017: WORD 'UNK_0xf019' codep=0x224c parp=0xf019
// ================================================

void UNK_0xf019() // UNK_0xf019
{
  _gt_ALPHA(); // >ALPHA
  Exec(PAGE); // call of word 0x274c '(PAGE)'
  Push(1); // 1
  Push(cc__7); // 7
  Push(cc__4); // 4
  Push(0x003e);
  UNK_0xef54(); // UNK_0xef54
  Push(2); // 2
  Push(0x000a);
  Exec(POSITION); // call of word 0x2767 '(POSITION)'
  PRINT("WARNING:  Any  Being  caught with an unauthorized  copy or", 58); // (.")
  Push(cc__3); // 3
  Push(0x000a);
  Exec(POSITION); // call of word 0x2767 '(POSITION)'
  PRINT("version  of  this  Software  Product  will  be punished by", 58); // (.")
  Push(cc__4); // 4
  Push(0x000a);
  Exec(POSITION); // call of word 0x2767 '(POSITION)'
  PRINT("Interstel Corporate Police.  Punishment  may  include  the", 58); // (.")
  Push(cc__5); // 5
  Push(0x000a);
  Exec(POSITION); // call of word 0x2767 '(POSITION)'
  PRINT("destruction of the offending Being.", 35); // (.")
  UNK_0xefdd(); // UNK_0xefdd
  Push(0x9c40); Pust(0x0000);
  UNK_0xe652(); // UNK_0xe652
  Exec(PAGE); // call of word 0x274c '(PAGE)'
  _gt_LORES(); // >LORES
  UNK_0xedc4(); // UNK_0xedc4
  DARK(); // DARK
}


// ================================================
// 0xf13a: WORD 'UNK_0xf13c' codep=0x224c parp=0xf13c
// ================================================

void UNK_0xf13c() // UNK_0xf13c
{
  Push(0); // 0
  Push(0x00fa);
  Push(0x0400);

  UNK_0x3f09("star2a.com lastSAVE.sva");
  _gt_TIB(); // >TIB
  UNK_0xde7e(); // UNK_0xde7e
}


// ================================================
// 0xf166: WORD 'UNK_0xf168' codep=0x224c parp=0xf168
// ================================================

void UNK_0xf168() // UNK_0xf168
{
  Push(0); // 0
  Push(0x0168);
  Push(0x0400);

  UNK_0x3f09("star2b.com lastSAVE.svb");
  _gt_TIB(); // >TIB
  UNK_0xde7e(); // UNK_0xde7e
}


// ================================================
// 0xf192: WORD 'UNK_0xf194' codep=0x224c parp=0xf194
// ================================================

void UNK_0xf194() // UNK_0xf194
{
  FLUSH_2(); // FLUSH_2
  INIT(); // INIT

  UNK_0x3f09("lastsave.svb");
  _gt_TIB(); // >TIB
  SETFCB(); // SETFCB
  Pop(); // DROP
  OPEN(); // OPEN
  Push(0x00ff);
  _eq_(); // =
  if (Pop() == 0) Push(1); else Push(0); // NOT
  Push(0x0013);
  FCBCALL(); // FCBCALL
  Pop(); // DROP
  MOUNTA(); // MOUNTA
}


// ================================================
// 0xf1c3: WORD 'UNK_0xf1c5' codep=0x224c parp=0xf1c5
// ================================================

void UNK_0xf1c5() // UNK_0xf1c5
{
  Push(0); // 0
  Push(cc_DX); // DX
  C_ex__2(); // C!_2
  Push(0x0036);
  DOSCALL(); // DOSCALL
  Push(cc_BX); // BX
  Push(Read16(Pop())); // @
  Push(0); // 0
  Push(cc_AX); // AX
  Push(Read16(Pop())); // @
  Push(0x0400);
  Push(cc_CX); // CX
  Push(Read16(Pop())); // @
  _slash_(); // /
  M_star__slash_(); // M*/
  Push(0x026c); Pust(0x0000);
  D_gt_(); // D>
}


// ================================================
// 0xf1f1: WORD 'KEY>O' codep=0x4b3b parp=0xf1fb
// ================================================
// 0xf1fb: db 0x04 0x00 0xd1 0x51 0x01 0x00 0x87 0xdf 0x02 0x00 0xc5 0x51 0x03 0x00 0xc5 0x51 0x07 0x00 0xc5 0x51 '   Q       Q   Q   Q'

// ================================================
// 0xf20f: WORD 'OPTIO' codep=0x1d29 parp=0xf219
// ================================================
// 0xf219: db 0x20 0x20 '  '

// ================================================
// 0xf21b: WORD 'UNK_0xf21d' codep=0x224c parp=0xf21d
// ================================================

void UNK_0xf21d() // UNK_0xf21d
{

  label1:
  _i_KEY(); // 'KEY
  Push(0x0030);
  _dash_(); // -
  Push(Read16(sp)); // DUP
  Push(pp_OPTIO); // OPTIO
  _ex__2(); // !_2
  Pop();
  switch(Pop()) // KEY>O
  {
  case 1:
    UNK_0xdf87(); // UNK_0xdf87
    break;
  case 2:
    TRUE(); // TRUE
    break;
  case 3:
    TRUE(); // TRUE
    break;
  case 7:
    TRUE(); // TRUE
    break;
  default:
    FALSE(); // FALSE
    break;

  }
  if (Pop() == 0) goto label1;
  Push(pp_LKEY); // LKEY
  Push(Read16(Pop())); // @
}


// ================================================
// 0xf237: WORD 'NEW.G' codep=0x224c parp=0xf241
// ================================================

void NEW_dot_G() // NEW.G
{
  UNK_0xe90c(); // UNK_0xe90c
  UNK_0xe6a4(); // UNK_0xe6a4
  UNK_0xea1f(); // UNK_0xea1f
  Push(tt_TIB); // TIB
  Push(Read16(Pop())); // @
  Push(0x0050);
  Push(0); // 0
  FILL_2(); // FILL_2
  PORTM(); // PORTM
}


// ================================================
// 0xf257: WORD 'UNK_0xf259' codep=0x224c parp=0xf259
// ================================================

void UNK_0xf259() // UNK_0xf259
{
  FLUSH_2(); // FLUSH_2
  NODRIVES(); // NODRIVES

  UNK_0x3f09("SAVING AS 'LASTSAVE'");
  UNK_0xe451(); // UNK_0xe451
  UNK_0xf194(); // UNK_0xf194
  UNK_0xf1c5(); // UNK_0xf1c5
  Push(Pop() | Pop()); // OR
  if (Pop() == 0) goto label1;
  UNK_0xf13c(); // UNK_0xf13c
  UNK_0xf168(); // UNK_0xf168
  Push(pp_UNK_0xdd2e); // UNK_0xdd2e
  Push(pp_OPTIO); // OPTIO
  Push(Read16(Pop())); // @
  Push(1); // 1
  _eq_(); // =
  if (Pop() == 0) goto label2;
  ON_2(); // ON_2
  goto label3;

  label2:
  _099(); // 099

  label3:
  goto label4;

  label1:
  MOUNTA(); // MOUNTA

  UNK_0x3f09("INSUFFICIENT DISK SPACE");
  UNK_0xe451(); // UNK_0xe451
  UNK_0xe53f(); // UNK_0xe53f
  _gt_A(); // >A
  Exec(PAGE); // call of word 0x274c '(PAGE)'
  Exec(CR); // call of word 0x26ee '(CR)'
  PRINT("Do the following:", 17); // (.")
  Exec(CR); // call of word 0x26ee '(CR)'
  PRINT("1) Delete some files (650k needed)", 34); // (.")
  Exec(CR); // call of word 0x26ee '(CR)'
  PRINT("2) Type STARFLT2.", 17); // (.")
  Exec(CR); // call of word 0x26ee '(CR)'
  PRINT("3) Try save again.", 18); // (.")
  _i_KEY(); // 'KEY
  Pop(); // DROP
  Exec(CR); // call of word 0x26ee '(CR)'
  PRINT("Press any key to exit", 21); // (.")
  KEY_2(); // KEY_2
  Pop(); // DROP
  BYE_2(); // BYE_2

  label4:
  FLUSH_2(); // FLUSH_2
  MOUNTA(); // MOUNTA
}


// ================================================
// 0xf356: WORD 'UNK_0xf358' codep=0x224c parp=0xf358
// ================================================

void UNK_0xf358() // UNK_0xf358
{
  _gt_DISPLA(); // >DISPLA
  DARK(); // DARK
  UNK_0xe45f(); // UNK_0xe45f
  UNK_0xef88(); // UNK_0xef88
  Push(pp_UNK_0xdd2e); // UNK_0xdd2e
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) return;
  UNK_0xf259(); // UNK_0xf259
}


// ================================================
// 0xf36e: WORD 'UNK_0xf370' codep=0x224c parp=0xf370
// ================================================

void UNK_0xf370() // UNK_0xf370
{
  UNK_0xdf87(); // UNK_0xdf87
  if (Pop() == 0) goto label1;
  UNK_0xf358(); // UNK_0xf358
  goto label2;

  label1:
  UNK_0xef88(); // UNK_0xef88

  label2:
  Push(pp_UNK_0xdd2e); // UNK_0xdd2e
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) return;
  UNK_0xe60c(); // UNK_0xe60c
}


// ================================================
// 0xf38c: WORD 'UNK_0xf38e' codep=0x224c parp=0xf38e
// ================================================

void UNK_0xf38e() // UNK_0xf38e
{
  Push(pp_UNK_0xdd2e); // UNK_0xdd2e
  ON_2(); // ON_2
}


// ================================================
// 0xf394: WORD 'UNK_0xf396' codep=0x224c parp=0xf396
// ================================================

void UNK_0xf396() // UNK_0xf396
{
  UNK_0xef88(); // UNK_0xef88
  Push(pp_UNK_0xdd2e); // UNK_0xdd2e
  Push(Read16(Pop())); // @
  if (Pop() == 0) Push(1); else Push(0); // NOT
  if (Pop() == 0) return;
  Push(pp__bo__n_CACHE); // [#CACHE
  Push(Read16(Pop())); // @
  Push(pp__n_CACHE); // #CACHE
  _ex__2(); // !_2
  AUTO_dash_CACHE(); // AUTO-CACHE
  _gt_A(); // >A
  QUIT(); // QUIT
}


// ================================================
// 0xf3b2: WORD 'GAMEO_2' codep=0x4b3b parp=0xf3bc
// ================================================
// 0xf3bc: db 0x04 0x00 0x96 0xf3 0x31 0x00 0x58 0xf3 0x33 0x00 0x8e 0xf3 0x32 0x00 0x70 0xf3 0x37 0x00 0x41 0x90 '    1 X 3   2 p 7 A '

// ================================================
// 0xf3d0: WORD 'UNK_0xf3d2' codep=0x224c parp=0xf3d2
// ================================================

void UNK_0xf3d2() // UNK_0xf3d2
{
  UNK_0xea17(); // UNK_0xea17
  FLUSH_2(); // FLUSH_2
  UNK_0xea27(); // UNK_0xea27
  UNK_0xeaad(); // UNK_0xeaad
  UNK_0xea5b(); // UNK_0xea5b
  PRESE(); // PRESE
}


// ================================================
// 0xf3e0: WORD 'UNK_0xf3e2' codep=0x224c parp=0xf3e2
// ================================================

void UNK_0xf3e2() // UNK_0xf3e2
{
  Func3(":TIMEST");
  Push(Read16(Pop())); // @
}


// ================================================
// 0xf3e8: WORD 'UNK_0xf3ea' codep=0x224c parp=0xf3ea
// ================================================

void UNK_0xf3ea() // UNK_0xf3ea
{
  Push(pp_UNK_0xdd2e); // UNK_0xdd2e
  _099(); // 099

  label1:
  UNK_0xe571(); // UNK_0xe571
  UNK_0xf21d(); // UNK_0xf21d
  Pop();
  switch(Pop()) // GAMEO_2
  {
  case 49:
    UNK_0xf358(); // UNK_0xf358
    break;
  case 51:
    UNK_0xf38e(); // UNK_0xf38e
    break;
  case 50:
    UNK_0xf370(); // UNK_0xf370
    break;
  case 55:
    BYE_2(); // BYE_2
    break;
  default:
    UNK_0xf396(); // UNK_0xf396
    break;

  }
  Push(pp_UNK_0xdd2e); // UNK_0xdd2e
  Push(Read16(Pop())); // @
  if (Pop() == 0) goto label1;
  UNK_0xe922(); // UNK_0xe922
}


// ================================================
// 0xf400: WORD 'UNK_0xf402' codep=0x224c parp=0xf402
// ================================================

void UNK_0xf402() // UNK_0xf402
{
  PRINT("Thanks to TSCS for testing", 26); // (.")
  Push(0x0bb8);
  MS(); // MS
}


// ================================================
// 0xf427: WORD 'UNK_0xf429' codep=0x224c parp=0xf429
// ================================================

void UNK_0xf429() // UNK_0xf429
{
  _ask_VGA(); // ?VGA
  if (Pop() == 0) goto label1;
  UNK_0xedc4(); // UNK_0xedc4

  label1:
  UNK_0xe9d5(); // UNK_0xe9d5
  UNK_0xe90c(); // UNK_0xe90c
  UNK_0xea31(); // UNK_0xea31
  UNK_0xead7(); // UNK_0xead7
  UNK_0xea1f(); // UNK_0xea1f
  FLUSH_2(); // FLUSH_2
  MOUNTA(); // MOUNTA
  Push(0xb5e0);
  MODULE(); // MODULE
  SET_dash_CUR(); // SET-CUR
}


// ================================================
// 0xf449: WORD 'ERR!' codep=0x224c parp=0xf452
// ================================================
// entry

void ERR_ex_() // ERR!
{
  UNK_0xf3d2(); // UNK_0xf3d2
  DARK(); // DARK

  UNK_0x3f09("PROGRAM OR DISK ERROR");
  UNK_0xe451(); // UNK_0xe451
  _i_KEY(); // 'KEY
  Pop(); // DROP
  KEY_2(); // KEY_2
  Pop(); // DROP
  UNK_0xf3ea(); // UNK_0xf3ea
  UNK_0xf429(); // UNK_0xf429
}


// ================================================
// 0xf47e: WORD 'GAMEO_1' codep=0x224c parp=0xf488
// ================================================
// entry

void GAMEO_1() // GAMEO_1
{
  Push(0x03e8);
  TONE(); // TONE
  BEEPON_2(); // BEEPON_2
  Push(0x0032);
  MS(); // MS
  Push(0x07d0);
  TONE(); // TONE
  Push(0x0032);
  MS(); // MS
  Push(0x05dc);
  TONE(); // TONE
  Push(0x0032);
  MS(); // MS
  BEEPOFF(); // BEEPOFF
  UNK_0xf3d2(); // UNK_0xf3d2
  UNK_0xf3ea(); // UNK_0xf3ea
  UNK_0xf429(); // UNK_0xf429
}


// ================================================
// 0xf4b8: WORD 'BOSS' codep=0x224c parp=0xf4c1
// ================================================
// entry

void BOSS() // BOSS
{
  UNK_0xf3d2(); // UNK_0xf3d2
  _gt_A(); // >A
  PRINT("A:>", 3); // (.")

  label3:
  KEY_2(); // KEY_2
  Push(Read16(sp)); // DUP
  Push(Read16(sp)); // DUP
  Push(0x000d);
  _eq_(); // =
  if (Pop() == 0) goto label1;
  Pop(); // DROP
  Exec(CR); // call of word 0x26ee '(CR)'
  PRINT("A:>", 3); // (.")
  goto label2;

  label1:
  Exec(EMIT); // call of word 0x2731 '(EMIT)'

  label2:
  Push(2); // 2
  _eq_(); // =
  if (Pop() == 0) goto label3;
  _gt_LORES(); // >LORES
  DARK(); // DARK
  UNK_0xf429(); // UNK_0xf429
}


// ================================================
// 0xf4fb: WORD 'START' codep=0x224c parp=0xf505
// ================================================
// entry

void START() // START
{
  UNK_0xf402(); // UNK_0xf402
  UNK_0xef9c(); // UNK_0xef9c
  UNK_0xe90c(); // UNK_0xe90c
  UNK_0xe88d(); // UNK_0xe88d
  if (Pop() == 0) goto label1;
  UNK_0xe8c3(); // UNK_0xe8c3

  label1:
  FLUSH_2(); // FLUSH_2
  MOUNTA(); // MOUNTA
  Push(0x9021);
  Push(pp__i_BYE); // 'BYE
  _ex__2(); // !_2
  Push(0xb5d0);
  MODULE(); // MODULE
  UNK_0xe0e1(); // UNK_0xe0e1
  UNK_0xdf59(); // UNK_0xdf59
  _gt_ALPHA(); // >ALPHA
  UNK_0xf019(); // UNK_0xf019
  UNK_0xf3e2(); // UNK_0xf3e2
  if (Pop() == 0) goto label2;
  LOAD_dot_(); // LOAD.
  return;

  label2:
  NEW_dot_G(); // NEW.G
}

// 0xf53d: db 0x47 0x41 0x4d 0x45 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x5f 0x20 0x20 0x20 0x00 'GAME____________________________    '
  