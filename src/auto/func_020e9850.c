/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

void func_020ed3a8(void);
void func_020f98a4(void);

extern M2C_UNK data_02154cb8;

void func_020e9850(void) {
    func_020f98a4();
    func_020ed3a8();
    M2C_FIELD(&data_02154cb8, s32 *, 0x2C) = 0;
}
