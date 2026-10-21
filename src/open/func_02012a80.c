#include "m2c.h"
void func_02022b6c(M2C_UNK);                        /* extern */
s32 func_02022ddc(void *, s16, u8);                 /* extern */
s32 func_02027f68(void *, M2C_UNK);                 /* extern */
s32 func_02028714(void *, M2C_UNK, M2C_UNK);        /* extern */
s32 func_0202c9f0(void *, M2C_UNK);                 /* extern */
void *func_020350fc(void *);                        /* extern */
s32 func_0203547c(void *, M2C_UNK);                 /* extern */
M2C_UNK func_0203e5ac(void *, M2C_UNK, M2C_UNK);    /* extern */
M2C_UNK func_0203e5e8(void *, M2C_UNK);             /* extern */
s32 func_02081208(M2C_UNK, M2C_UNK, void (*)(s32));
s32 func_ov003_02196338(void *);                    /* extern */
extern char data_0214da84[];
extern s32 *data_0215a02c;
extern void (*data_021384f8[])(s32);
extern void (*data_02138504[])(s32);

void func_02012a80(void *arg0) {
    s16 temp_r0_2;
    s32 sel;
    s32 var_r4;
    s32 var_r0;
    s32 var_r0_2;
    s32 range;
    s8 temp_r0_3;
    s8 temp_r0_4;
    void *temp_r0;
    u32 *temp_r3;
    u32 temp_r2;
    u16 temp_r0_5;

    func_02022b6c((M2C_UNK) arg0);
    sel = func_02027f68(arg0, 7) >> 9;
    if (sel < 5) {
        switch (M2C_FIELD(arg0, s16 *, 0x162)) {
        case 0xD:
        case 0x3D:
        case 0x5E:
            if (func_0203547c(arg0, 1) != 0 || func_0203547c(arg0, 0xD) != 0) {
                range = sel * 15;
                temp_r3 = *(u32 **) data_0214da84;
                temp_r2 = *temp_r3 * 0x10DCD + 1;
                temp_r0_5 = (u16) ((u16) temp_r2 * 100u >> 16);
                *temp_r3 = temp_r2;
                if (temp_r0_5 < 100 - range) {
                    func_02081208(data_0215a02c ? *data_0215a02c : 0, 0x32, data_021384f8[M2C_FIELD(arg0, s8 *, 0x88)]);
                }
            }
            break;
        case 0xC:
        case 0x3C:
        case 0x5F:
            if (func_0203547c(arg0, 1) != 0 || func_0203547c(arg0, 0xD) != 0) {
                range = sel * 15;
                temp_r3 = *(u32 **) data_0214da84;
                temp_r2 = *temp_r3 * 0x10DCD + 1;
                temp_r0_5 = (u16) ((u16) temp_r2 * 100u >> 16);
                *temp_r3 = temp_r2;
                if (temp_r0_5 < 100 - range) {
                    func_02081208(data_0215a02c ? *data_0215a02c : 0, 0x32, data_02138504[M2C_FIELD(arg0, s8 *, 0x88)]);
                }
            }
            break;
        }
    }
    if (M2C_FIELD(arg0, u8 *, 0xA4) != 0) {
        var_r4 = 1;
    } else {
        var_r4 = 0;
    }
    if (var_r4 != 0) {
        if (func_02022ddc(arg0, M2C_FIELD(arg0, s16 *, 0xF2), M2C_FIELD(arg0, u8 *, 0xA6)) != 0) {
            var_r4 = 1;
        } else {
            var_r4 = 0;
        }
    }
    temp_r0 = func_020350fc(arg0);
    if (temp_r0 != NULL) {
        func_0203e5ac(arg0, 2, 1);
        temp_r0_2 = M2C_FIELD(temp_r0, s16 *, 0x90);
        switch (temp_r0_2) {
            case 4:
                temp_r0_3 = M2C_FIELD(arg0, s8 *, 0x8B);
                if (temp_r0_3 != 5) {
                    if (temp_r0_3 != 4) {
                        M2C_FIELD(arg0, s32 *, 0x948) = 1;
                    }
                }
                break;
            case 7:
                temp_r0_4 = M2C_FIELD(arg0, s8 *, 0x8B);
                if ((temp_r0_4 != 5) && (temp_r0_4 != 4)) {
                    M2C_FIELD(arg0, s32 *, 0x948) = 8;
                }
                break;
        }
        var_r0 = func_ov003_02196338(arg0);
    } else {
        var_r0 = 0;
    }
    if (var_r0 != 0) {
        var_r0_2 = 1;
    } else if (func_02028714(arg0, 0, 0) != 0) {
        var_r0_2 = 1;
    } else if ((var_r4 == 0) && (func_0202c9f0(arg0, 0) != 0)) {
        var_r0_2 = 1;
    } else {
        var_r0_2 = 0;
    }
    if (var_r0_2 != 0) {
        return;
    }
    if (M2C_FIELD(arg0, u16 *, 0xFC) > 0x64) {
        temp_r3 = *(u32 **) data_0214da84;
        temp_r2 = *temp_r3 * 0x10DCD + 1;
        temp_r0_5 = (u16) ((u16) temp_r2 * 100u >> 16);
        *temp_r3 = temp_r2;
        if (temp_r0_5 != 0) {
            return;
        }
        func_0203e5e8(arg0, 0x69);
    }
}
