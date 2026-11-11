#include "engine.h"
#include "m2c.h"

void func_02087d4c(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void func_02087d78(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);

s32 func_020875f8(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, void (*arg6)(s32, s32, s32, s32),
                  void (*arg7)(s32, s32, s32, s32)) {
    void (*var_r1)(s32, s32, s32, s32);
    void (*var_r2)(s32, s32, s32, s32);

    M2C_FIELD(arg0, volatile s32 *, 0x1C) = arg1;
    M2C_FIELD(arg0, volatile s32 *, 0x24) = arg3;
    M2C_FIELD(arg0, volatile s32 *, 0x30) = arg2;
    M2C_FIELD(arg0, volatile s32 *, 0x20) = (s32) M2C_FIELD(arg0, volatile s32 *, 0x30);
    M2C_FIELD(arg0, volatile s32 *, 0x2C) = arg5;
    var_r2                                = arg6;
    M2C_FIELD(arg0, volatile s32 *, 0x34) = arg4;
    M2C_FIELD(arg0, volatile s32 *, 0x28) = (s32) M2C_FIELD(arg0, volatile s32 *, 0x34);
    if (var_r2 == NULL) {
        var_r2 = func_02087d78;
    }
    var_r1                                               = arg7;
    M2C_FIELD(arg0, void (**)(s32, s32, s32, s32), 0x3C) = var_r2;
    if (var_r1 == NULL) {
        var_r1 = func_02087d4c;
    }
    M2C_FIELD(arg0, void (**)(s32, s32, s32, s32), 0x40) = var_r1;
    M2C_FIELD(arg0, void (**)(s32, s32, s32, s32), 0x44) =
        (void (*)(s32, s32, s32, s32)) M2C_FIELD(arg0, void (**)(s32, s32, s32, s32), 0x3C);
    M2C_FIELD(arg0, volatile s32 *, 0x38) = 0;
    M2C_FIELD(arg0, volatile s32 *, 0x10) = (s32) (M2C_FIELD(arg0, volatile s32 *, 0x10) | 2);
    return 1;
}
