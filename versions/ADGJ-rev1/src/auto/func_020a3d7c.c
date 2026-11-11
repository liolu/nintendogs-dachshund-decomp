/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern s32 data_02153740;
extern s32 data_02154c3c;

void func_020a3d7c(s32 arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(((arg0 * 0x294) + data_02153740 + (arg1 * 4)), s32 *, 0xCE4) =
        (s32) M2C_FIELD((data_02154c3c + (arg2 * 4)), s32 *, 4);
}
