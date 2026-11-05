/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020b4c70 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020b4c70.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern s32 func_02095610(u8 *p);
extern void func_020934cc(u8 *p);
extern u8 *data_02153700;
extern u32 *data_02153720;
extern u8 *data_02154c70;
extern void func_0209565c(u8 *p, s32 a);
extern void func_02095590(u8 *p, s32 a);
extern void func_0209cab8(u8 *p);
extern s32 func_02095524(u8 *p);
extern void func_02095784(u8 *p);
void func_0209c944(u8 *param_1) {
    switch (*(s16 *) (param_1 + 0x2e)) {
        case 0:
            if (func_02095610(param_1) == 0) {
                return;
            }
            func_020934cc(param_1);
            if (*(s16 *) data_02153700 == 0) {
                *(s16 *) (param_1 + 0x2a) = 1;
            } else {
                *(s16 *) (param_1 + 0x2a) = 0;
            }
            return;
        case 1:
            if (*(s16 *) (param_1 + 0x2a) == 0) {
                goto zero;
            }
            if (*(s16 *) (param_1 + 0x2a) == 1) {
                goto one;
            }
            return;
        zero:
            if (*(s32 *) (param_1 + 0x134) == -3) {
                func_0209565c(param_1, 10);
                func_02095590(param_1, 0);
                data_02153720[8] = data_02153720[8] & ~1u;
                data_02153720[8] = data_02153720[8] & ~2u;
                return;
            }
            func_0209cab8(param_1);
            return;
        one:
            if (*(u32 *) (data_02154c70 + 0xa4) == 0) {
                return;
            }
            *(s16 *) (param_1 + 0x2a) = 0;
            if (*(s32 *) (param_1 + 0x134) == -2) {
                *(s32 *) (param_1 + 0x134) = 0x8ca0;
            }
            data_02153720[8] = data_02153720[8] | 1;
            data_02153720[8] = data_02153720[8] | 2;
            return;
        case 2:
        case 3:
            break;
        case 4:
            if (func_02095524(param_1) == 0) {
                return;
            }
            func_02095784(param_1);
            return;
    }
}
