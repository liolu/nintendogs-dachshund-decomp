/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02006b78 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_02006b78.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
extern u32 *func_02074e70(u32, u32);
extern void func_02074ddc(u32 *);
u32 *func_02006b04(u32 param_1) {
    u32 *piVar1;
    u32 *p;
    piVar1 = func_02074e70(param_1, 0x504c5454);
    p      = piVar1 + 2;
    if ((p[3] & 0xf000000u) == 0) {
        func_02074ddc(p);
    }
    return p;
}
