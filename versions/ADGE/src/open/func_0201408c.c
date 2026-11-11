#include "m2c.h"

s32 func_0203547c();
s32 func_02027f68();
s32 func_020093f8();
s32 func_02028120();
void func_0200925c();

void func_0201408c(void *arg0, s32 arg1) {
    s32 idx;
    s32 v;

    if (M2C_FIELD(arg0, s16 *, 0x152) == 0x113) {
        if (func_0203547c(arg0, 0x13) != 0) {
            if ((func_02027f68(arg0, 7) >> 9) < 5) {
                idx = func_020093f8(arg0, 0x3E, 2, 0, 0);
                if (idx != -1) {
                    v = func_02028120(arg0);
                    M2C_FIELD(M2C_FIELD(arg0, s32 *, 0x8FC + idx * 4), s32 *, 0x44) =
                        (s32) ((((s64) v) * 0xE66 + 0x800) >> 12);
                }
            }
        }
    }
    if ((arg1 == 0) && (func_0203547c(arg0, 0x45) == 0)) {
        return;
    }
    func_0200925c(arg0, 0x3E, 2);
}
