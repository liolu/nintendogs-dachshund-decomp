/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

extern s32 data_02159e30;
extern s32 data_02159e70;

void func_020d6384(s32 arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(((arg0 * 0x294) + data_02159e70 + (arg1 * 4)), s32 *, 0x2074) =
        (s32) M2C_FIELD((data_02159e30 + (arg2 * 4)), s32 *, 4);
}
