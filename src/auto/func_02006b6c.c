/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02006be0 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_02006be0.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned int u32;
extern u32 *func_02074e70(u32 p, u32 tag);
extern void func_02074c8c(u32 p);
u16 *func_02006b6c(u32 param_1) {
    u32 *q;
    q = func_02074e70(param_1, 0x4345424b) + 2;
    if ((q[1] & 0xf000000) == 0) {
        func_02074c8c((u32) q);
    }
    return (u16 *) q;
}
