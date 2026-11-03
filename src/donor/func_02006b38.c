/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02006bac from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_02006bac.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
extern u8 *func_02074e70(u32 a, u32 b);
extern void func_02074dcc(u32 a);
u32 *func_02006b38(u32 p0) {
    u8 *q = func_02074e70(p0, 0x43484152) + 8;
    if ((*(u32 *) (q + 0x14) & 0xf000000) == 0) {
        func_02074dcc((u32) q);
    }
    return (u32 *) q;
}
