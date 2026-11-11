/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_02105d2c(void);
void func_021060c4(void);

extern void *data_0215a03c;

void func_02105cd8(void) {
    if (M2C_FIELD(data_0215a03c, s32 *, 0) == 0) {
        return;
    }
    if (M2C_FIELD(data_0215a03c, s32 *, 8) != 0) {
        M2C_FIELD(data_0215a03c, s32 *, 4) = (s32) (M2C_FIELD(data_0215a03c, s32 *, 4) + M2C_FIELD(data_0215a03c, s32 *, 0xC));
    }
    func_021060c4();
    func_02105d2c();
}
