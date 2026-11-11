/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02108ba0 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_02108ba0.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
extern u32 data_02153740;
extern u32 func_020b0e74(u32 x);
u32 func_020af480(void) {
    u8 *p;
    u32 r = 0;
    p     = *(u8 **) &data_02153740;
    if (*(u32 *) (p + 0xa8) == 5) {
        r = func_020b0e74(3);
    }
    return r;
}
