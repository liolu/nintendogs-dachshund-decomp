/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02097c50 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_02097c50.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
extern u32 data_02154c6c;
extern u8 *data_02154c70;
void func_020cd494(void) {
    u8 *obj;
    void (*fp)(u8 *);
    if (data_02154c6c != 0) {
        return;
    }
    obj = data_02154c70;
    fp  = *(void (**)(u8 *))(obj + 0x8c);
    if (fp != 0) {
        fp(obj);
        *(u32 *) (data_02154c70 + 0x8c) = 0;
    }
}
