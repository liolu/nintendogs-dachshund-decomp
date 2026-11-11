/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_ov007_0215c3a8 from https://github.com/chasmlol/nintendogs-decomp src/overlays/ov007/func_ov007_0215c3a8.c (license:
 * none), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef void (*FnPtr)(u8 *);
extern u32 data_ov006_0215bb60;
void func_ov006_02157e10(u8 *param_1) {
    FnPtr fn;
    *(u32 *) ((u8 *) data_ov006_0215bb60 + 0x3c) = 1;
    fn                                           = *(FnPtr *) ((u8 *) data_ov006_0215bb60 + 0x18);
    if (fn != 0) {
        fn(param_1);
    }
}
