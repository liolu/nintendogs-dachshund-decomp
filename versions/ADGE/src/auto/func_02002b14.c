/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0214fefc from https://github.com/RonyxDumb/mkds src/arm9/0214fefc_func_0214fefc.c (license: none), reused by
 * tools/donor_match.py */
extern int func_02002df0(void);
extern void func_02002694(int param);
extern void func_0200236c(int a, int b, int c, int d);
extern volatile int data_0214cd00;
extern int data_0214cd04;
int func_02002b14(unsigned int a, unsigned int b) {
    volatile int *p;

    if (!func_02002df0()) {
        return 1;
    }
    data_0214cd00 = 0;
    func_02002694(0x3006000);
    p = &data_0214cd00;
    while (!*p) {
    }
    *p            = 0;
    data_0214cd04 = 0;
    func_0200236c(0, 2, 0, 0);
    func_02002694((a & 0xff) | 0x2006100);
    func_02002694((b & 0xffff) | 0x1010000);
    return 0;
}
