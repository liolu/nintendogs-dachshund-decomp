/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02097a58 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_02097a58.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;
extern u32 data_0212d490[];
extern u32 data_021440d4;
extern void func_02002f30(u32 *buf, u32 a, u32 b);
extern u32 func_02002dfc(u32 *buf, u32 v);
u32 func_020cd29c(s32 p0, u32 p1) {
    u32 buf[8];
    u8 *e = (u8 *) data_0212d490 + p0 * 8;
    u32 v = *(u32 *) e;
    u32 r;
    data_021440d4 = v;
    func_02002f30(buf, *(u32 *) (e + 4), v);
    r             = func_02002dfc(buf, p1);
    data_021440d4 = 0xffffffff;
    return r;
}
