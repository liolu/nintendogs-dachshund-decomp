#include "m2c.h"

M2C_UNK func_0207d294(M2C_UNK *);                   /* extern */
extern M2C_UNK data_021532ac;

void func_0207d1cc(s32 arg0, s32 arg1) {
    M2C_FIELD(&data_021532ac, s32 *, 0) = arg0;
    M2C_FIELD(&data_021532ac, s32 *, 4) = arg1;
    func_0207d294(&data_021532ac);
}
