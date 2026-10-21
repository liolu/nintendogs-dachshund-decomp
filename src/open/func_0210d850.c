#include "m2c.h"

extern s32 data_02131a28[];
extern void *data_0215a078;

void func_020a7460(s32);
void func_020a7470(s32);
void func_020afbc4(s32);
s32 func_021057c8(void);
s32 func_01ffdb08(s32);
s32 func_02028114(s32);

void func_0210d850(s32 arg0) {
    s16 temp_r1;
    s32 temp_r2;
    s32 var_r4;

    temp_r1 = M2C_FIELD(arg0, s16 *, 0x90);
    switch (temp_r1) {
    case 2:
        func_020a7460(arg0);
        M2C_FIELD(M2C_FIELD(arg0, s32 *, 0x18C), u16 *, 0x20) = (u16) (M2C_FIELD(M2C_FIELD(arg0, s32 *, 0x18C), u16 *, 0x20) | 1);
        func_020afbc4(arg0);
        return;
    case 1:
        var_r4 = 0x1000;
        func_020a7470(arg0);
        M2C_FIELD(M2C_FIELD(arg0, s32 *, 0x18C), u16 *, 0x20) = (u16) (M2C_FIELD(M2C_FIELD(arg0, s32 *, 0x18C), u16 *, 0x20) & ~1);
        M2C_FIELD(arg0, s32 *, 0xBC) = func_021057c8();
        M2C_FIELD(arg0, s32 *, 0xC0) = data_02131a28[M2C_FIELD(arg0, s16 *, 0x94) - 0x72] - 410;
        temp_r2 = func_01ffdb08((s32) M2C_FIELD(data_0215a078, s16 *, 2));
        if (temp_r2 != 0) {
            var_r4 = func_02028114(temp_r2);
        }
        M2C_FIELD(arg0, s32 *, 0xC4) = -(s32) (((s64) var_r4 * 0x6800 + 0x800) >> 12);
        return;
    }
}
