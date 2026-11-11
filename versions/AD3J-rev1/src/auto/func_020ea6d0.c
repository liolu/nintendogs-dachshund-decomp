/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

void func_020e9b94(M2C_UNK);

extern M2C_UNK data_02154cb8;

void func_020ea6d0(void) {
    if ((u32) (u16) (M2C_FIELD(&data_02154cb8, u16 *, 0x18) + 0xFFE3) > 1U) {
        return;
    }
    func_020e9b94(3);
}
