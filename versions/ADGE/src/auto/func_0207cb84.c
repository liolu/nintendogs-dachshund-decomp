#include "engine.h"
#include "m2c.h"

void func_0207cc4c(M2C_UNK);

extern M2C_UNK data_02153ddc;

void func_0207cb84(s32 arg0, s32 arg1) {
    M2C_FIELD(&data_02153ddc, s32 *, 0) = arg0;
    M2C_FIELD(&data_02153ddc, s32 *, 4) = arg1;
    func_0207cc4c((s32) &data_02153ddc);
}
