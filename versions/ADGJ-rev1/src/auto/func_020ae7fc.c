/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern void *data_02153700;
extern void *data_02153740;

void func_020ae7fc(void) {
    if (M2C_FIELD(M2C_FIELD(data_02153700, void **, 4), u16 *, 2) != 0) {
        M2C_FIELD(data_02153740, s32 *, 0x984) = 0xA;
        return;
    }
    M2C_FIELD(data_02153740, s32 *, 0x984) = 0xC;
}
