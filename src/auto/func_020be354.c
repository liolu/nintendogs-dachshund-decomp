/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

void func_020be07c(M2C_UNK);

void func_020be354(s32 arg0) {
    func_020be07c(arg0 + 0x40);
    func_020be07c(arg0 + 0x60);
    M2C_FIELD(arg0, s32 *, 4) = 0;
}
