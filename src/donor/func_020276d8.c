/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02027710 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_02027710.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed char s8;
typedef signed int s32;
extern u8 data_02137990[];
extern s32 func_0202785c(u32 a, u32 b);
s32 func_020276d8(u32 p0, u32 p1) {
    s32 a = func_0202785c(p0, p1);
    s32 b = func_0202785c(p1, p0);
    return (s32) (s8) * (u32 *) (data_02137990 + (2 - a) * 60 + (2 - b) * 4);
}
