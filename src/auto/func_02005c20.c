/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02005c94 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_02005c94.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef signed short s16;
typedef signed int s32;
extern s32 _s32_div_f(s32 a, s32 b);
void func_02005c20(u8 *param_1) {
    switch (*(u16 *) (param_1 + 4)) {
        case 0:
            break;
        case 1:
            *(s16 *) (param_1 + 8) = *(s16 *) (param_1 + 8) + 1;
            if (*(s16 *) (param_1 + 8) < *(s16 *) (param_1 + 10)) {
                *(s16 *) (param_1 + 0x18) = 16 - _s32_div_f(*(s16 *) (param_1 + 8) << 4, *(s16 *) (param_1 + 10));
            } else {
                *(u16 *) (param_1 + 4)    = 2;
                *(u16 *) (param_1 + 0x18) = 0;
            }
            if (*(u16 *) (param_1 + 6) == 0) {
                *(s16 *) (param_1 + 0x18) = -*(s16 *) (param_1 + 0x18);
            }
            break;
        case 2:
            *(u16 *) (param_1 + 0x18) = 0;
            break;
        case 3:
            *(s16 *) (param_1 + 8) = *(s16 *) (param_1 + 8) + 1;
            if (*(s16 *) (param_1 + 8) < *(s16 *) (param_1 + 10)) {
                *(s16 *) (param_1 + 0x18) = _s32_div_f(*(s16 *) (param_1 + 8) << 4, *(s16 *) (param_1 + 10));
            } else {
                *(u16 *) (param_1 + 4)    = 0;
                *(u16 *) (param_1 + 0x18) = 16;
            }
            if (*(u16 *) (param_1 + 6) == 0) {
                *(s16 *) (param_1 + 0x18) = -*(s16 *) (param_1 + 0x18);
            }
            break;
    }
}
