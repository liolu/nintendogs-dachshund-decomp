/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s16 func_02106400(M2C_UNK, s16, M2C_UNK);           /* extern */
s32 func_02106560();                                /* extern */
s32 func_021070e0(s16);                             /* extern */
u32 func_021070f8(s16);                             /* extern */

void func_02092aa8(void *arg0) {
    s16 temp_r8;
    s32 var_r7;
    u32 temp_r0;

    temp_r8 = M2C_FIELD(arg0, s16 *, 0x7C);
    if (M2C_FIELD(arg0, u16 *, 0x78) == 0) {
        return;
    }
    if (func_02106560() == 0) {
        return;
    }
    temp_r0 = func_021070f8(M2C_FIELD(arg0, s16 *, 0x7C));
    switch (temp_r0) {
        default:
            break;
        case 0:
            M2C_FIELD(arg0, s16 *, 0x7A) = func_02106400(0, temp_r8, 2);
            break;
        case 1:
            M2C_FIELD(arg0, s16 *, 0x7A) = func_02106400(0, temp_r8, 1);
            break;
        case 2:
            var_r7                       = 0;
            M2C_FIELD(arg0, s16 *, 0x7A) = 0;
            if (func_021070e0(temp_r8) > 0) {
                do {
                    func_02106400(0, temp_r8, 2);
                    var_r7 += 1;
                } while (var_r7 < func_021070e0(temp_r8));
            }
            break;
        case 3:
            M2C_FIELD(arg0, s16 *, 0x7A) = func_02106400(0, temp_r8, 1);
            break;
    }
    M2C_FIELD(arg0, u16 *, 0x78) = 0U;
}
