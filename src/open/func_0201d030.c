#include "m2c.h"
void func_0201d1e0(void *);                         /* extern */
void func_0202517c(void *, s32, s32);               /* extern */
s32 func_02028114(void *);                          /* extern */
s32 func_0202f9a0(void *);                          /* extern */
s32 func_0203535c(void *);                          /* extern */
void func_02035978(void *, s32);                    /* extern */
void func_0201d030(void *arg0) {
    s32 temp_r0;
    s32 var_r0;

    temp_r0 = func_02028114(arg0);
    var_r0 = (s32) (((s64) temp_r0 * -273 + 0x800) >> 12);
    func_0202517c(arg0, 0x12, -var_r0);
    func_0201d1e0(arg0);
    func_02035978(arg0, 1);
    if (func_0203535c(arg0) == 0) {
        return;
    }
    func_0202f9a0(arg0);
}
