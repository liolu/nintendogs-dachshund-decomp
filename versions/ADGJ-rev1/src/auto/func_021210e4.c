/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020711e0(u16, M2C_UNK *);                  /* extern */
s32 func_0211e888();                                /* extern */
extern void *data_02157b60;
extern M2C_UNK func_02120968;

s32 func_021210e4(void) {
    if (func_0211e888() == 0) {
        return 0;
    }
    if (M2C_FIELD(data_02157b60, s32 *, 4) != 0) {
        return 0;
    }
    if (func_020711e0(M2C_FIELD(data_02157b60, u16 *, 0x10A), &func_02120968) != 0) {
        M2C_FIELD(data_02157b60, s32 *, 4) = 1;
        return 1;
    }
    return 0;
}
