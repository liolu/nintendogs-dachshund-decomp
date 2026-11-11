/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_020711e0(M2C_UNK, M2C_UNK);
M2C_UNK func_ov006_02159488(void);
void func_ov006_02159c24(M2C_UNK);

extern void *data_ov006_0215bb64;

s32 func_ov006_0215a2e8(void) {
    if (func_ov006_02159488() == 0) {
        return 0;
    }
    if (M2C_FIELD(data_ov006_0215bb64, s32 *, 4) != 0) {
        return 0;
    }
    if (func_020711e0((s32) M2C_FIELD(data_ov006_0215bb64, u16 *, 0x10A), (s32) func_ov006_02159c24) != 0) {
        M2C_FIELD(data_ov006_0215bb64, s32 *, 4) = 1;
        return 1;
    }
    return 0;
}
