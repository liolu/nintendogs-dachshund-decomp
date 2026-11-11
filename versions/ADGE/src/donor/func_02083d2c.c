/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0204c194 from https://github.com/tangosdev/sm64ds-decomp src/unnamed/arm9/0204/func_0204c194.c (license: MIT), reused
 * by tools/donor_match.py */
void func_02083d2c(int a, int b) {
    a = 0x1000 << a;
    b = 0x1000 << b;
    a = a << 8;
    b = b << 8;
    a = a >> 16;
    b = b >> 16;

    *(volatile int *) 0x4000500 = 1;
    *(volatile int *) 0x4000488 = 0;
    *(volatile int *) 0x4000490 = 0x40003c0;
    *(volatile int *) 0x4000488 = (unsigned short) a;
    *(volatile int *) 0x4000490 = 0x4000040;
    *(volatile int *) 0x4000488 = (unsigned short) a | ((unsigned short) b << 0x10);
    *(volatile int *) 0x4000490 = 0x3c000040;
    *(volatile int *) 0x4000488 = (unsigned short) b << 0x10;
    *(volatile int *) 0x4000490 = 0x3c0003c0;
    *(volatile int *) 0x4000504 = 0;
}
