#include "m2c.h"
s32 func_02028114(void *);                          /* extern */
void func_02024e30(void *, s32, s32);               /* extern */
s32 func_0203535c(void *);                          /* extern */
void func_0202fa5c(void *);                         /* extern */
extern s32 *data_0214da84;
void func_0200da50(void *, s32, s32);
void func_0200e608(void *arg0) {
    s32 temp_r0;
    s32 temp_r1;

    temp_r0 = func_02028114(arg0);
    temp_r1 = (s32) (((s64) temp_r0 * 93 + 0x800) >> 12);
    func_02024e30(arg0, 0xB, -temp_r1);
    M2C_FIELD(arg0, s16 *, 0x152) = M2C_FIELD(arg0, s16 *, 0x148);
    if (func_0203535c(arg0) == 0) {
        return;
    }
    M2C_FIELD(arg0, s16 *, 0x152) = 0;
    func_0202fa5c(arg0);
}
