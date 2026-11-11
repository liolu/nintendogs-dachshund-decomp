#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_0214f394;

void func_020723dc(s32 arg0, s32 arg1) {
    *((M2C_UNK *) ((s8 *) &data_0214f394 + (arg0 << 5))) = (s32) (u16) arg1;
}
