#include "m2c.h"
s32 func_02003a50(void);
s32 func_020cef48(void);
void func_020dce6c(void);
void func_0210320c(void);
extern void *data_02159e70;
void func_0209b8b4(s32 arg0) {
    s32 *var_r4 = (s32 *)((s8 *) arg0 + 0x1CC0);
    if (M2C_FIELD(data_02159e70, u16 *, 0x11160) != 0) {
        return;
    }
    if (M2C_FIELD(data_02159e70, s32 *, 0xB4) == 0x17) {
        if (func_02003a50() == 0) {
            return;
        }
        if (*var_r4 != 4 && *var_r4 != 3) {
            func_0210320c();
        }
        M2C_FIELD(data_02159e70, s32 *, 0x11158) = func_020cef48();
        func_020dce6c();
        M2C_FIELD(data_02159e70, s32 *, 0x4868) = 1;
        return;
    }
    M2C_FIELD(data_02159e70, s32 *, 0x11158) = func_020cef48();
    func_020dce6c();
    M2C_FIELD(data_02159e70, s32 *, 0x4868) = 1;
}
