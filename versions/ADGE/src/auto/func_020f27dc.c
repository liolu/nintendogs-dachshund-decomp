/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

extern void *data_02159e70;

void func_020f27dc(s32 arg0) {
    M2C_FIELD(arg0, s32 *, 0x28) = (s32) (M2C_FIELD(arg0, s32 *, 0x28) + 1);
    if ((s32) M2C_FIELD(arg0, s32 *, 0x28) > 0) {
        M2C_FIELD(data_02159e70, s32 *, 0x4868) = 1;
    }
}
