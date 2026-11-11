/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020aab2c from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020aab2c.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
extern u8 *data_02153718;
void func_020929e8(void) {
    u8 *p            = data_02153718;
    void (*fp)(u8 *) = *(void (**)(u8 *))(p + 0x14);
    if (fp != (void (*)(u8 *)) 0) {
        fp(p);
    }
}
