/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

void func_02075c78(M2C_UNK, M2C_UNK);
void func_02075c8c(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);

void func_020c495c(s32 arg0) {
    func_02075c8c(M2C_FIELD(arg0, s32 *, 0x24), (s32) M2C_FIELD(arg0, s16 *, 0x2A), (s32) M2C_FIELD(arg0, s16 *, 0x2C),
                  (s32) M2C_FIELD(arg0, s16 *, 0x2E));
    func_02075c78(M2C_FIELD(arg0, s32 *, 0x24), (s32) M2C_FIELD(arg0, u16 *, 0x28));
}
