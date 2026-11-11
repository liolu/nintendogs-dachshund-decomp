/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02065af0 from https://github.com/tangosdev/sm64ds-decomp src/unnamed/arm9/0206/func_02065af0.c (license: MIT), reused
 * by tools/donor_match.py */
extern int func_02080c28(void);
extern void func_02080c3c(unsigned int);
extern int *func_0207010c(void);
extern void func_0206cc0c(int *dst, int *src, int len);
extern int data_0214f574;
extern int data_0214f624;
int func_02070074(int *thiz) {
    int saved = func_02080c28();
    int *r;
    if (data_0214f574 != 1) {
        func_02080c3c(saved);
        return 0;
    }
    r = func_0207010c();
    if (r == 0 || *r != 0) {
        func_02080c3c(saved);
        return 0;
    }
    func_0206cc0c(thiz, &data_0214f624, 0x9c);
    func_02080c3c(saved);
    return 1;
}
