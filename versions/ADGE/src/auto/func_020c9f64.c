/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_02074874(M2C_UNK, M2C_UNK);
void func_02074888(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);

void func_020c9f64(s32 arg0) {
    func_02074888(M2C_FIELD(arg0, s32 *, 0x24), (s32) M2C_FIELD(arg0, s16 *, 0x2A), (s32) M2C_FIELD(arg0, s16 *, 0x2C),
                  (s32) M2C_FIELD(arg0, s16 *, 0x2E));
    func_02074874(M2C_FIELD(arg0, s32 *, 0x24), (s32) M2C_FIELD(arg0, u16 *, 0x28));
}
