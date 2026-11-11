/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020704f0(M2C_UNK);
void func_020c51ec(M2C_UNK, M2C_UNK);
void func_020c5248(M2C_UNK);

void func_020705fc(s32 arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x2C) == 2) {
        func_020c51ec((s32) M2C_FIELD(arg0, u8 *, 0x3C), -0x2D3);
    }
    func_020c5248((s32) M2C_FIELD(arg0, u8 *, 0x3C));
    func_020704f0(arg0);
}
