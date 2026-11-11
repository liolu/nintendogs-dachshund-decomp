#include "m2c.h"
extern u8 data_0215422c[];
extern u8 data_0212942c[];
extern u8 data_0212942d[];
extern u16 data_0213ceb0;
s32 func_02073328(void *, s32, s32);
void func_020907d0(s32, s32);
s32 func_02089c5c(s32);
s32 func_0205df50(s32, s32);
void func_02070f88(s32 *, s32);
void func_02070ed4(s32 *, s32);
void func_02070d7c(void *, s32, s32);
s32 func_02089c24(s32);
s32 func_0208fb70(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    u8 temp_r5;
    u8 temp_r4;
    s32 temp_r0;
    s32 var_r1;

    temp_r5 = *((u8 *) ((s8 *) &data_0212942c + (M2C_FIELD(&data_0215422c, u16 *, 0x18) * 6)));
    temp_r4 = *((u8 *) ((s8 *) &data_0212942d + (M2C_FIELD(&data_0215422c, u16 *, 0x18) * 6)));
    func_02073328((void *) arg0, arg1, arg2);
    if ((arg1 == 0x31) && (arg2 == 3)) {
        func_020907d0(0x31, 5);
    }
    if (*(s32 *) arg0 != 0) {
        temp_r0 = func_02089c5c(arg3);
        if ((u32) temp_r0 <= (u32) temp_r5) {
            var_r1 = 0x7F;
        } else if ((u32) temp_r0 < (u32) temp_r4) {
            var_r1 = func_0205df50((temp_r4 - temp_r0) * 0x7F, temp_r4 - temp_r5);
        } else {
            func_02070f88((s32 *) arg0, 0);
            return -1;
        }
        if (arg1 != 0x32) {
            func_02070ed4((s32 *) arg0, var_r1);
        }
        func_02070d7c((void *) arg0, data_0213ceb0, func_02089c24(arg3));
    }
    return 1;
}
