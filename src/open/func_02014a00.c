#include "m2c.h"
void func_0201d1e0(M2C_UNK arg0);
void func_02035978(M2C_UNK arg0, M2C_UNK arg1);
extern M2C_UNK (*data_02139a0c[])(M2C_UNK x, M2C_UNK y);
void func_0201d1e0(M2C_UNK);
void func_02035978(M2C_UNK, M2C_UNK);
extern M2C_UNK (*data_02139a0c[])(M2C_UNK, M2C_UNK);
void func_02014a00(M2C_UNK arg0) {
    u32 var_r0;
    s32 var_r1;
    s8 temp_r0_2;

    func_0201d1e0(arg0);
    var_r1 = 1;
    var_r0 = M2C_FIELD(arg0, u8 *, 0x93);
    if (var_r0 <= 0x18) {
        var_r0 = (1 << var_r0) & 0x1800003;
        if (var_r0 != 0) {
            var_r1 = 0;
        }
    }
    func_02035978(arg0, var_r1);
    temp_r0_2 = M2C_FIELD(arg0, s8 *, 0x8C);
    data_02139a0c[temp_r0_2](arg0, 2);
}
