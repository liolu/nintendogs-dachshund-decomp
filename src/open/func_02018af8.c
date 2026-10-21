#include "m2c.h"
extern void *data_02139a24[];
s32 func_02028114(s32 arg0);
s32 func_02024d30(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
s32 func_02026fd0(s32 arg0);
void func_0201d1e0(s32 arg0);
void func_02035978(s32 arg0, s32 arg1);
s32 func_020350fc(s32 arg0);
void func_0203e5ac(s32 arg0, s32 arg1, s32 arg2);
s32 func_ov003_02196338(s32 arg0);
s32 func_0203535c(s32 arg0);
void func_0203e5e8(s32 arg0, s32 arg1);
void func_02018af8(s32 arg0) {
    s32 r;
    s32 res;

    if (func_02024d30(arg0, 0x17, 0x25, (s32) (((s64) func_02028114(arg0) * 0x62 + 0x800) >> 12)) == 0) {
        func_02024d30(arg0, 0x25, 0x3c, (s32) (((s64) func_02028114(arg0) * 0x2f + 0x800) >> 12));
    }
    if (func_02026fd0(arg0) != 0) {
        ((void (*)(s32)) data_02139a24[1])(arg0);
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
    func_0203e5e8(arg0, 6);
}
