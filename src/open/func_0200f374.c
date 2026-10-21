#include "m2c.h"

s32 func_02035424(M2C_UNK, M2C_UNK);
s32 func_02028114(M2C_UNK);
void func_01ff832c(s32, void *, void *, void *);
s32 func_020361f0(M2C_UNK);
M2C_UNK func_02027644(void *, s32);
M2C_UNK func_020350fc(M2C_UNK);
void func_0203e5ac(M2C_UNK, M2C_UNK, M2C_UNK);
s32 func_ov003_02196338(M2C_UNK);
void func_020394dc(M2C_UNK);

void func_0200f374(M2C_UNK arg0) {
    M2C_UNK r6;
    M2C_UNK r0;
    s32 r4;
    s32 flag;
    s32 v;
    s64 t;
    s16 sw;
    s8 b;

    if (func_02035424(arg0, 0x28) != 0) {
        t = (s64) func_02028114(arg0) * 64;
        t += 0x800;
        v = (s32) (t >> 12);
        func_01ff832c(v, (void *) (arg0 + 0x18C), (void *) (arg0 + 0x260), (void *) (arg0 + 0x260));
    }
    r4 = M2C_FIELD(arg0, u16 *, 0xFC) > 0x1E;
    r0 = func_020361f0(arg0);
    if (r0 != 0) {
        func_02027644((void *) r0, arg0 + 0x3B4);
    }
    r6 = func_020350fc(arg0);
    if (r6 != 0) {
        func_0203e5ac(arg0, 2, 1);
        sw = M2C_FIELD(r6, s16 *, 0x90);
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
        flag = func_ov003_02196338(arg0);
    } else {
        flag = 0;
    }
    if (flag != 0) {
        return;
    }
    if (r4 != 0) {
        func_020394dc(arg0);
    }
}
