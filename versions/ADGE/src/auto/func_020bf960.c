#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_02140a34;
extern M2C_UNK data_02140b38;

s32 func_020bf960(s32 arg0) {
    if ((u32) arg0 < 0x17U) {
        return *((M2C_UNK *) ((s8 *) &data_02140a34 + (arg0 * 4)));
    }
    return (s32) &data_02140b38;
}
