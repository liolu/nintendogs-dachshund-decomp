/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_020bfa64();                                /* extern */
M2C_UNK func_020bfa74(M2C_UNK *, u16, u16 *);       /* extern */
s32 func_020bfe18();                                /* extern */
extern void *data_ov028_0215c030;
extern M2C_UNK func_ov028_0215b32c;

void func_ov028_0215b4b4(M2C_UNK arg0) {
    u16 sp0;
    M2C_UNK (*temp_r1)(M2C_UNK);
    s32 temp_r0;
    s32 temp_r1_2;
    u16 var_r3;
    u16 var_r4;

    if (func_020bfe18() == 0) {
        return;
    }
    temp_r1 = M2C_FIELD(data_ov028_0215c030, M2C_UNK(**)(M2C_UNK), 0x18);
    if (temp_r1 != NULL) {
        temp_r1(arg0);
    }
    temp_r1_2 = M2C_FIELD(data_ov028_0215c030, s32 *, 0x20);
    switch (temp_r1_2) {                            /* irregular */
        case 1:
            M2C_FIELD(data_ov028_0215c030, s32 *, 0x1C) = 1;
            return;
        case 2:
            M2C_FIELD(data_ov028_0215c030, s16 *, 0x38) = 0;
            M2C_FIELD(data_ov028_0215c030, s16 *, 0x3A) = 0x65;
            var_r4                                      = 1;
            temp_r0                                     = func_020bfa64();
            if (temp_r0 == 0x8000) {
                var_r3 = 3;
            } else if (temp_r0 == 0) {
                var_r3 = 0x15;
            } else if (!(temp_r0 & 1)) {
            loop_14:
                var_r4 += 1;
                if ((u32) var_r4 > 0x10U) {
                    var_r3 = 0x16;
                } else {
                    if ((1 << (var_r4 - 1)) & temp_r0) {
                        goto block_17;
                    }
                    goto loop_14;
                }
            } else {
            block_17:
                func_020bfa74(&func_ov028_0215b32c, var_r4, &sp0);
                var_r3 = sp0;
            }
            if (var_r3 == 0x16) {
                if (M2C_FIELD(data_ov028_0215c030, s32 *, 0x28) == 1) {
                    return;
                }
                M2C_FIELD(data_ov028_0215c030, s32 *, 0x28) = 1;
                M2C_FIELD(data_ov028_0215c030, u16 *, 0x24) = var_r3;
                M2C_FIELD(data_ov028_0215c030, s16 *, 0x26) = 0x1E;
                return;
            }
            if (var_r3 == 2) {
                return;
            }
            if (M2C_FIELD(data_ov028_0215c030, s32 *, 0x28) == 1) {
                return;
            }
            M2C_FIELD(data_ov028_0215c030, s32 *, 0x28) = 1;
            M2C_FIELD(data_ov028_0215c030, u16 *, 0x24) = var_r3;
            M2C_FIELD(data_ov028_0215c030, s16 *, 0x26) = 0x1E;
            return;
    }
}
