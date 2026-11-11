/* compiler: 1.2/sp2p3  */
#include "m2c.h"

u16 func_0203547c(M2C_UNK, M2C_UNK);                /* extern */
u16 func_0203e5e8(M2C_UNK, s32);                    /* extern */
u16 func_020466b0(M2C_UNK, M2C_UNK, M2C_UNK);       /* extern */
extern s32 *data_0214da84;

u16 func_02045fb4(M2C_UNK arg0, M2C_UNK arg1) {
    s32 temp_r1;
    s32 temp_r1_2;
    s32 temp_r1_3;
    s32 temp_r1_4;
    u16 temp_r0;
    u16 temp_r0_2;
    u16 temp_r0_3;

    temp_r0_3 = func_020466b0(arg0, arg1, 0);
    if (temp_r0_3 != 0) {
        return temp_r0_3;
    }
    if (func_0203547c(arg0, 0x10) != 0) {
        temp_r1        = (*data_0214da84 * 0x10DCD) + 1;
        *data_0214da84 = temp_r1;
        if ((u16) ((u32) (temp_r1 << 0x10) >> 0x1F) != 0) {
            return func_0203e5e8(arg0, 0x2EB);
        }
    }
    if (func_0203547c(arg0, 0x2E) != 0) {
        temp_r1_2      = (*data_0214da84 * 0x10DCD) + 1;
        *data_0214da84 = temp_r1_2;
        if ((u16) ((u32) (temp_r1_2 << 0x10) >> 0x1F) != 0) {
            return func_0203e5e8(arg0, 0x2E7);
        }
    }
    if (func_0203547c(arg0, 0x41) != 0) {
        temp_r1_3      = (*data_0214da84 * 0x10DCD) + 1;
        *data_0214da84 = temp_r1_3;
        if ((u16) ((u32) (temp_r1_3 << 0x10) >> 0x1F) != 0) {
            return func_0203e5e8(arg0, 0x2EA);
        }
    }
    temp_r0_2 = func_0203547c(arg0, 0x5E);
    if (temp_r0_2 == 0) {
        return temp_r0_2;
    }
    temp_r1_4      = (*data_0214da84 * 0x10DCD) + 1;
    *data_0214da84 = temp_r1_4;
    temp_r0        = (u16) ((u32) (temp_r1_4 << 0x10) >> 0x1F);
    if (temp_r0 == 0) {
        return temp_r0;
    }
    return func_0203e5e8(arg0, 0x2E6);
}
