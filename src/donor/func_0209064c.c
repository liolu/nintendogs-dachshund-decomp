/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020a8708 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020a8708.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef signed short s16;
typedef signed int s32;
void func_0209064c(u8 *param_1, u16 param_2, u16 param_3, u16 param_4, s32 param_5) {
    u8 *b;
    s16 i;
    u8 *q;
    *(u16 *) (param_1 + 0x18) = param_2;
    b                         = param_1 + 0x18;
    *(s16 *) (b + 2)          = -2;
    *(u16 *) (b + 4)          = param_3;
    *(u16 *) (b + 6)          = param_4;
    if (param_5 == 0) {
        i = 1;
        q = param_1 + 10;
        while (1) {
            *(s16 *) (q + 24) = *(s16 *) (q + 24) + 1;
            i                 = (s16) (i + 1);
            q                 = q + 10;
            if (i >= 4) {
                break;
            }
        }
        return;
    }
    *(u16 *) (param_1 + 6) = 1;
}
