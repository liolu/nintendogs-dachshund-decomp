/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_0208927c(M2C_UNK);

extern M2C_UNK data_0215422c;

void func_02089dd0(void) {
    if ((u32) (u16) (M2C_FIELD(&data_0215422c, u16 *, 0x18) + 0xFFE3) > 1U) {
        return;
    }
    func_0208927c(3);
}
