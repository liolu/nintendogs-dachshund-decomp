#include "engine.h"
#include "m2c.h"
void func_0206c4e0(M2C_UNK, M2C_UNK, M2C_UNK, u32, M2C_UNK (*)(s32), s32);
void func_0206cc0c(M2C_UNK, M2C_UNK, M2C_UNK);
extern s32 data_0213cadc;
extern s32 data_0214f470;
void func_0206b0a8(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r4;

    temp_r4 = data_0214f470 + arg1;
    if (data_0213cadc != -1) {
        func_0206c4e0(data_0213cadc, arg0, temp_r4, arg2, 0, 0);
        return;
    }
    func_0206cc0c(arg0, temp_r4, arg2);
}
