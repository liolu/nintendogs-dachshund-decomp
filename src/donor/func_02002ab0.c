/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02011a3c from projets/code-lyoko/src/auto/func_02011a3c.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
extern int func_02002d8c(void);
extern void func_02002630(int param);
extern void func_02002308(int a, int b, int c, int d);
extern volatile int data_0214a700;
extern int data_0214a704;
int func_02002ab0(unsigned int a, unsigned int b) {
    volatile int *p;

    if (!func_02002d8c()) {
        return 1;
    }
    data_0214a700 = 0;
    func_02002630(0x3006000);
    p = &data_0214a700;
    while (!*p) {
    }
    *p            = 0;
    data_0214a704 = 0;
    func_02002308(0, 2, 0, 0);
    func_02002630((a & 0xff) | 0x2006100);
    func_02002630((b & 0xffff) | 0x1010000);
    return 0;
}
