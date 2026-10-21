#include "m2c.h"
s32 func_020c046c(void);
void func_020bf9a8(u16 arg0);
u16 func_020bfba4(u16 arg0);
extern u16 data_02156ea4;
s32 func_020c0828(void);
u16 func_020bfafc(void);
s32 func_020c0088(s32 arg0, s32 arg1);
s32 func_020c0448(s32 arg0, s32 arg1);
void func_020c0ba4(s32 arg0);
void func_020c0cdc(void);
void func_020c0d08(void) {
    u16 sp[2];
    s32 temp;
    s32 ret;

    if (func_020c046c() == 0) {
        return;
    }
    func_020bf9a8(data_02156ea4);
    data_02156ea4 = func_020bfba4(data_02156ea4);
    temp = func_020c0828();
    M2C_FIELD(temp, s16 *, 4) = data_02156ea4;
    temp = func_020c0828();
    M2C_FIELD(temp, s16 *, 6) = func_020bfafc();
    ret = (func_020c0088((s32)func_020c0ba4, (s32)&sp[0]) != 0);
    if (ret != 0) {
        return;
    }
    func_020c0448((s32)func_020c0cdc, (s32)&sp[1]);
}
