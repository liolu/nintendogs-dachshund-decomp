#include "m2c.h"
extern void *data_02159e70;
extern M2C_UNK data_0214d624;
void func_020db638(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, s32 arg6, s32 arg7, s32 arg8, s32 arg9);
void func_020ddd00(s32 arg0);
void func_020df5c0(void *arg0, void *arg1);
s32 func_020ccdc8(void *arg0);
s32 func_020cbf5c(void *arg0);
void func_020df48c(void *arg0) {
    void *var_r4;
    s32 cond1;
    s32 cond2;

    var_r4 = data_02159e70 + 0x4CC8;
    if (M2C_FIELD(arg0, s32 *, 0) == 0) {
        return;
    }
    cond1 = M2C_FIELD(var_r4, s16 *, 0) == 3;
    cond2 = (M2C_FIELD(&data_0214d624, u16 *, 2) & 2) != 0;
    if (!(M2C_FIELD(var_r4, u16 *, 8) & 2) && cond2 && !cond1) {
        func_020ccdc8(var_r4);
    }
    if (func_020cbf5c(var_r4) != 0) {
        func_020db638(0, 4, 2, 2, 1, 3, (s32) (data_02159e70 + 0x4D22),
                      M2C_FIELD(var_r4, s16 *, 0x14), M2C_FIELD(var_r4, s16 *, 0x58), 0);
        func_020ddd00(M2C_FIELD(arg0, s32 *, 0x1C));
    }
    func_020df5c0(arg0, var_r4);
    if (M2C_FIELD(var_r4, s16 *, 0) == 2) {
        M2C_FIELD(arg0, s32 *, 0xC) = 1;
        M2C_FIELD(arg0, s32 *, 0x34) = 0;
        M2C_FIELD(arg0, s32 *, 0) = 0;
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
}
