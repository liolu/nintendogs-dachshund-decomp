#include "m2c.h"
s32 func_02028114(M2C_UNK);
M2C_UNK func_02024e30(M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK func_02024d30(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK func_02026fd0(M2C_UNK);
void func_0201d1e0(M2C_UNK);
void func_02035978(M2C_UNK, M2C_UNK);
M2C_UNK func_020350fc(M2C_UNK);
void func_0203e5ac(M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK func_ov003_02196338(M2C_UNK);
M2C_UNK func_0203535c(M2C_UNK);
void func_0203e5e8(M2C_UNK, M2C_UNK);
extern M2C_UNK data_02139a24;

void func_0201be54(s32 arg0) {
    s32 r;
    s32 res;

    if (func_02024e30(arg0, 0x18, -(s32) (((s64) func_02028114(arg0) * 0x55 + 0x800) >> 12)) == 0) {
        func_02024d30(arg0, 0x18, 0x25, -(s32) (((s64) func_02028114(arg0) * 0x7E + 0x800) >> 12));
    }
    if (func_02026fd0(arg0) != 0) {
        M2C_FIELD(&data_02139a24, M2C_UNK(**)(s32), 0xC)(arg0);
    }
    func_0201d1e0(arg0);
    func_02035978(arg0, 1);
    r = func_020350fc(arg0);
    if (r != 0) {
        func_0203e5ac(arg0, 2, 1);
        switch (*(s16 *) (r + 0x90)) {
        case 4:
            if (*(s8 *) (arg0 + 0x8B) != 5 && *(s8 *) (arg0 + 0x8B) != 4) {
                *(s32 *) (arg0 + 0x948) = 1;
            }
            break;
        case 7:
            if (*(s8 *) (arg0 + 0x8B) != 5 && *(s8 *) (arg0 + 0x8B) != 4) {
                *(s32 *) (arg0 + 0x948) = 8;
            }
            break;
        }
        res = func_ov003_02196338(arg0);
    } else {
        res = 0;
    }
    if (res != 0) {
        return;
    }
    if (func_0203535c(arg0) == 0) {
        return;
    }
    func_0203e5e8(arg0, 0xA);
}
