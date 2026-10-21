#define M2C_SELF_func_0208cf5c
#include "m2c.h"
extern u8 data_02154350[];
extern u8 data_02154354[];
void func_02070e7c(u8 *, s32, s32);
s32 func_0208cf5c(s32 arg0, s32 arg1) {
    u8 *p = (u8 *) data_02154350;
    u16 *dst = (u16 *) (p + 0x24);

    *dst = (u16) arg0;
    if (*(u32 *) data_02154354 == 0) {
        return 0;
    }
    func_02070e7c(data_02154354, *(s16 *) (p + 0x22) * arg0 / 100, arg1);
    return 1;
}
