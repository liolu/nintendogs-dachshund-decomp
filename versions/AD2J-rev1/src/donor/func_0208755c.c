/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0208755c from projets/nintendogs-shiba-friends/src/auto/func_0208755c.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
#pragma cplusplus off
void func_0208755c(int a, int b) {
    a = 0x1000 << a;
    b = 0x1000 << b;
    a = a << 8;
    b = b << 8;
    a = a >> 16;
    b = b >> 16;

    *(volatile int *) 0x4000500 = 1;
    *(volatile int *) 0x4000488 = 0;
    *(volatile int *) 0x4000490 = 0x103c0;
    *(volatile int *) 0x4000488 = (unsigned short) a;
    *(volatile int *) 0x4000490 = 0x10040;
    *(volatile int *) 0x4000488 = (unsigned short) a | ((unsigned short) b << 0x10);
    *(volatile int *) 0x4000490 = 0xf0040;
    *(volatile int *) 0x4000488 = (unsigned short) b << 0x10;
    *(volatile int *) 0x4000490 = 0xf03c0;
    *(volatile int *) 0x4000504 = 0;
}
