#include "m2c.h"
extern s32 (*data_0213cd78)(M2C_UNK, M2C_UNK, M2C_UNK);
s32 func_02081aec(s32 arg0, s32 arg1) {
    return (data_0213cd78(arg0, arg1, 0) & 0xFFFF) << 3;
}
