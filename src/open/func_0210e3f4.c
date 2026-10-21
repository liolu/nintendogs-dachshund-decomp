#include "m2c.h"
extern void *data_0215a044;
s32 func_02080978(void);
s32 func_020449ac(s32);
void func_020d2394(void *, s32 *, s32);
void func_02044710(s32, void *);
void func_020c7b00(void *, u16, u8);
void func_0210e3f4(s32 arg0) {
    s32 temp_r0;
    s32 var_r4;
    s32 var_r8;
    s32 var_r9;
    s32 var_sp0;

    var_sp0 = func_02080978();
    var_r4 = 0;
    if ((s32) M2C_FIELD(data_0215a044, s16 *, 0x20) > 0) {
        do {
            var_r9 = (s32) M2C_FIELD(data_0215a044, s32 *, 0x24 + var_r4 * 4);
            temp_r0 = func_020449ac(var_r4);
            var_r8 = temp_r0;
            func_020d2394((void *) var_r9, &var_sp0, arg0);
            func_02044710(var_r4, (void *) var_r9);
            if (var_r8 != 0) {
                func_020c7b00((void *) var_r8, M2C_FIELD(var_r9, u16 *, 0x0), M2C_FIELD(var_r9, u8 *, 0x2));
            }
            var_r4 = (s32) (s16) (var_r4 + 1);
        } while (var_r4 < (s32) M2C_FIELD(data_0215a044, s16 *, 0x20));
    }
}
