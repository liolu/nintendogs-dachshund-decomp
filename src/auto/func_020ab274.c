/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

void func_020efb78(M2C_UNK);
void func_020f0f90(M2C_UNK, M2C_UNK);

extern void *data_02153740;

void func_020ab274(void) {
    if (M2C_FIELD(data_02153740, s32 *, 0xA8) == 7) {
        func_020efb78(9);
        return;
    }
    func_020f0f90(0x37, 1);
}
