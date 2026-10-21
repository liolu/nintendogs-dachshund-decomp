#include "m2c.h"

s32 func_02027f68(void *, s32);
s32 func_0203547c(void *, s32);
s32 func_02081208(s32, s32, void (*)(s32));
extern char data_0214da84[];
extern s32 *data_0215a02c;
extern void (*data_021384f8[])(s32);
extern void (*data_02138504[])(s32);

s32 func_02027f68(void *, M2C_UNK);                 /* extern */
s32 func_0203547c(void *, M2C_UNK);                 /* extern */
s32 func_02081208(M2C_UNK, M2C_UNK, void (*)(s32));
void func_02012dc8(void *arg0) {
    s32 sel;
    s32 range;
    u32 *temp_r3;
    u32 temp_r2;
    u16 temp_r0_5;

    sel = func_02027f68(arg0, 7) >> 9;
    if (sel >= 5) {
        return;
    }
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
