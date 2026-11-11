/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020c9980(void *);                      /* extern */
extern void *data_02153740;

void func_020e4ab0(void *arg0) {
    if (M2C_FIELD(arg0, s8 *, 0x70) == 0) {
        func_020c9980(arg0 + 0x74);
    }
    M2C_FIELD(data_02153740, s32 *, 0x34D8) = 1;
}
