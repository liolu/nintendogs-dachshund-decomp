#include "m2c.h"
extern u32 data_02154578;
void func_0207f4a0(s32 arg0, s32 arg1) {
    M2C_FIELD(arg0, volatile s32 *, 0x8C) = arg1;
    M2C_FIELD(M2C_FIELD(arg0, s32 *, 0x84) + M2C_FIELD(arg0, volatile s32 *, 0x8C), s32 *, 0) = 0x597DFBD9;
}
