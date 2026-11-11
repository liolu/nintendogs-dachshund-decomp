/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020ae6ac from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020ae6ac.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
extern u32 data_02154c70;
extern u32 func_02095610(u8 *p);
extern u32 func_0209335c(u8 *p);
extern u32 func_0209657c(u8 *p);
extern u32 func_020aeb54(void);
extern u32 func_02095524(u8 *p);
extern u32 func_02095784(u8 *p);
u32 func_020964c8(u8 *param_1) {
    u32 bVar1;
    u32 v;
    switch (*(s16 *) (param_1 + 0x2e)) {
        case 0:
            bVar1 = func_02095610(param_1);
            return bVar1;
        case 1:
            bVar1 = func_0209335c(param_1);
            if (bVar1 != 0) {
                return bVar1;
            }
            if (*(s16 *) (param_1 + 0x2a) == 1) {
                v = *(u32 *) (*(u8 **) &data_02154c70 + 0xa4);
                if (v == 0) {
                    return v;
                }
                *(u16 *) (param_1 + 0x2a) = 0;
                return func_020aeb54();
            }
            return func_0209657c(param_1);
        case 2:
            break;
        case 3:
            break;
        case 4:
            bVar1 = func_02095524(param_1);
            if (bVar1 == 0) {
                return bVar1;
            }
            return func_02095784(param_1);
    }
}
