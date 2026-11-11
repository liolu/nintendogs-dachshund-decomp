/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02060310 from https://github.com/tangosdev/sm64ds-decomp src/unnamed/arm9/0206/func_02060310.c (license: MIT), reused
 * by tools/donor_match.py */
extern unsigned char data_0214ec20;
extern void func_0207f5c8(void *self);
void func_020655ec(int a, int b, int c) {
    if (a == 0xb && c != 0) {
        char *base         = (char *) &data_0214ec20;
        unsigned int *addr = (unsigned int *) (((int) base + 0x34));
        unsigned int val   = *addr;
        val &= ~0x20u;
        *addr = val;
        func_0207f5c8(*(void **) (base + 0xd0));
    }
}
