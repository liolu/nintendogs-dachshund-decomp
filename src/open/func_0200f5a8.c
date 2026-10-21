#include "m2c.h"

s32 func_02028114(M2C_UNK);
void func_02024f08(M2C_UNK, M2C_UNK, M2C_UNK);
s32 func_0203535c(M2C_UNK);
s32 func_020361f0(M2C_UNK);
M2C_UNK func_02027644(void *, s32);
M2C_UNK func_020350fc(M2C_UNK);
void func_0203e5ac(M2C_UNK, M2C_UNK, M2C_UNK);
s32 func_ov003_02196338(M2C_UNK);
void func_020394dc(M2C_UNK);

void func_0200f5a8(M2C_UNK arg0) {
    M2C_UNK thing;
    s32 x;
    s32 v;
    s32 ret;
    s32 r4;
    s16 sw;
    s8 b;

    x = func_02028114(arg0);
    v = (s32) (((s64) x * 0x1EB + 0x800) >> 12);
    func_02024f08(arg0, 1, v);
    r4 = func_0203535c(arg0);
    thing = func_020361f0(arg0);
    if (thing != 0) {
        func_02027644((void *) thing, arg0 + 0x3B4);
    }
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
    if (r4 != 0) {
        func_020394dc(arg0);
    }
}
