/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

void func_020b10cc(void);
void func_020b8b0c(M2C_UNK, M2C_UNK, M2C_UNK);

void func_020beb7c(s32 arg0) {
    M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) + 1);
    if ((s32) M2C_FIELD(arg0, s32 *, 4) <= 0x78) {
        return;
    }
    func_020b8b0c(0, 3, 0);
    func_020b10cc();
}
