/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0200f86c(void *);                          /* extern */
M2C_UNK func_0202761c(s32, void *);                 /* extern */
M2C_UNK func_02027630(s32, void *);                 /* extern */
s32 func_020286ec(void *, M2C_UNK, M2C_UNK);        /* extern */
s32 func_02036038(void *);                          /* extern */
M2C_UNK func_02036fbc(void *, M2C_UNK);             /* extern */
M2C_UNK func_02038ef8(void *);                      /* extern */
M2C_UNK func_020392ac(void *);                      /* extern */

void func_02044d1c(void *arg0) {
    s32 temp_r0;
    s32 var_r5;

    if ((u32) M2C_FIELD(arg0, u16 *, 0x10A) > 0x64U) {
        var_r5 = 1;
    } else {
        var_r5 = 0;
    }
    temp_r0 = func_02036038(arg0);
    if (temp_r0 != 0) {
        func_02038ef8(arg0);
        func_02027630(temp_r0, arg0 + 0x278);
        func_0202761c(temp_r0, arg0 + 0x3D8);
        func_02036fbc(arg0, 0x300);
    }
    if (func_0200f86c(arg0) != 0) {
        return;
    }
    if (func_020286ec(arg0, 0, 1) != 0) {
        return;
    }
    if (var_r5 == 0) {
        return;
    }
    func_020392ac(arg0);
}
