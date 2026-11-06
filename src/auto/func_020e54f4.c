/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020c9980(void *);                      /* extern */
extern void *data_02153740;

void func_020e54f4(void *arg0) {
    if (M2C_FIELD(arg0, s8 *, 0x64) == 0) {
        func_020c9980(arg0 + 0xB8);
    }
    M2C_FIELD(data_02153740, s32 *, 0x34D8) = 1;
}
