/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020f3bdc from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020f3bdc.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;
typedef signed long long s64;
extern u8 *data_02154cac;
void func_020e17d8(s32 x) {
    s64 t = (s64) x * 40960 + 0x800;
    u8 *p = data_02154cac;
    u8 *q;
    u32 val;
    u8 *r;
    *(s32 *) (p + 0xc) = (s32) (t >> 12);
    p                  = data_02154cac;
    q                  = *(u8 **) (p + 0x48);
    val                = *(u32 *) (p + 0xc);
    r                  = *(u8 **) (q + 0x78);
    *(u32 *) (r + 8)   = val;
}
