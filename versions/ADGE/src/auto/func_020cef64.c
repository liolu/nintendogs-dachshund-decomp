#include "engine.h"
#include "m2c.h"

extern s32 data_021314f0;
extern void *data_02159e38;

s32 func_020cef64(void) {
    s32 var_r0;

    var_r0 = 0;
    if ((s32) M2C_FIELD(M2C_FIELD(data_02159e38, void **, 0x141C), s32 *, 0x78) < (s32) data_021314f0) {
        var_r0 = 1;
    }
    return var_r0;
}
