/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_020a6080(M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK func_020a61e0(void);
M2C_UNK func_020a6d60(M2C_UNK);
M2C_UNK func_020a6d78(M2C_UNK);

void func_02114218(s32 arg0) {
    s16 temp_r8;
    s32 var_r7;
    u32 temp_r0;

    temp_r8 = M2C_FIELD(arg0, s16 *, 0x7C);
    if (M2C_FIELD(arg0, u16 *, 0x78) == 0) {
        return;
    }
    if (func_020a61e0() == 0) {
        return;
    }
    temp_r0 = (u32) func_020a6d78((s32) M2C_FIELD(arg0, s16 *, 0x7C));
    switch (temp_r0) {
        default:
            break;
        case 0:
            M2C_FIELD(arg0, s16 *, 0x7A) = (s16) func_020a6080(0, (s32) temp_r8, 2);
            break;
        case 1:
            M2C_FIELD(arg0, s16 *, 0x7A) = (s16) func_020a6080(0, (s32) temp_r8, 1);
            break;
        case 2:
            var_r7                       = 0;
            M2C_FIELD(arg0, s16 *, 0x7A) = 0;
            if (func_020a6d60((s32) temp_r8) > 0) {
                do {
                    func_020a6080(0, (s32) temp_r8, 2);
                    var_r7 += 1;
                } while (var_r7 < func_020a6d60((s32) temp_r8));
            }
            break;
        case 3:
            M2C_FIELD(arg0, s16 *, 0x7A) = (s16) func_020a6080(0, (s32) temp_r8, 1);
            break;
    }
    M2C_FIELD(arg0, u16 *, 0x78) = 0U;
}
