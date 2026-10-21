#include "m2c.h"
s32 func_02028114(s32);
void func_02024e30(M2C_UNK, M2C_UNK, M2C_UNK);
void func_020394f8(M2C_UNK);
M2C_UNK func_020350fc(M2C_UNK);
void func_0203e5ac(M2C_UNK, s32, s16);
M2C_UNK func_ov003_02196338(M2C_UNK);
M2C_UNK func_0203535c(M2C_UNK);
void func_0202fa5c(M2C_UNK);
void func_0200e1e0(M2C_UNK arg0) {
    M2C_UNK thing;
    s32 v;
    s32 ret;
    s16 sw;
    s8 b;

    v = (s32) (((s64) func_02028114(arg0) * 0x5D + 0x800) >> 12);
    func_02024e30(arg0, 0xB, -v);
    func_020394f8(arg0);
    thing = func_020350fc(arg0);
    if (thing != 0) {
        func_0203e5ac(arg0, 2, 1);
        sw = M2C_FIELD(thing, s16 *, 0x90);
        switch (sw) {
            case 4:
                b = M2C_FIELD(arg0, s8 *, 0x8B);
                if (b != 5) {
                    if (b != 4) {
                        M2C_FIELD(arg0, s32 *, 0x948) = 1;
                    }
                }
                break;
            case 7:
                b = M2C_FIELD(arg0, s8 *, 0x8B);
                if (b != 5) {
                    if (b != 4) {
                        M2C_FIELD(arg0, s32 *, 0x948) = 8;
                    }
                }
                break;
        }
        ret = func_ov003_02196338(arg0);
    } else {
        ret = 0;
    }
    if (ret != 0) {
        return;
    }
    if (func_0203535c(arg0) == 0) {
        return;
    }
    func_0202fa5c(arg0);
}
