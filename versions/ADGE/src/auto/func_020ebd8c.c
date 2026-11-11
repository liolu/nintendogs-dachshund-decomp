/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_02085d14(M2C_UNK, M2C_UNK);

extern s32 data_02159e70;

s32 func_020ebd8c(s32 arg0, s32 arg1) {
    s32 temp_r3;

    temp_r3 = (arg0 * 0x294) + (data_02159e70 + 0x1DEC);
    return (s32) M2C_FIELD((void *) func_02085d14(M2C_FIELD(temp_r3, s32 *, 0xC),
                                                  M2C_FIELD((M2C_FIELD(temp_r3, s32 *, 8) + (arg1 * 8)), s32 *, 0xC)),
                           u8 *, 1);
}
