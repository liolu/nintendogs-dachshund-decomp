/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_02003a34(void);

extern void *data_02159e70;

void func_020ed028(s32 arg0) {
    if (M2C_FIELD(arg0, s32 *, 8) != 0) {
        if (func_02003a34() == 0) {
            return;
        }
        M2C_FIELD(data_02159e70, s32 *, 0x4868) = 1;
        return;
    }
    M2C_FIELD(data_02159e70, s32 *, 0x4868) = 1;
}
