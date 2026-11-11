#include "m2c.h"

extern s32 *data_0215a034;
void func_020fd728(void);
s32 func_01ffdb08(s32);
void func_020fe8f0(s32);
void func_020fd484(s32);

#pragma opt_common_subs off

void func_020fe340(void) {
    s16 i;

    func_020fd728();
    for (i = 0; i < 3; i = (s16) (i + 1)) {
        if (func_01ffdb08(i) == 0) {
            if (M2C_FIELD((u8 *) data_0215a034 + i * 4, s32 *, 8) != 0) {
                func_020fe8f0(M2C_FIELD((u8 *) data_0215a034 + i * 4, s32 *, 8));
                M2C_FIELD((u8 *) data_0215a034 + i * 4, s32 *, 8) = 0;
            }
        }
        if (M2C_FIELD((u8 *) data_0215a034 + i * 4, s32 *, 8) == 0) {
            if (M2C_FIELD((u8 *) data_0215a034, s16 *, i * 2) != 0) {
                if (M2C_FIELD((u8 *) data_0215a034, s16 *, i * 2) == 2) {
                    M2C_FIELD((u8 *) data_0215a034, u16 *, i * 2) = 0;
                    if (M2C_FIELD((u8 *) data_0215a034 + i * 4, s32 *, 8) != 0) {
                        func_020fe8f0(M2C_FIELD((u8 *) data_0215a034 + i * 4, s32 *, 8));
                        M2C_FIELD((u8 *) data_0215a034 + i * 4, s32 *, 8) = 0;
                    }
                    func_020fd484(i);
                }
            }
        }
    }
}
