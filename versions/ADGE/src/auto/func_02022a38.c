/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_02022a80(void);

extern void *data_0214da84;

void func_02022a38(void) {
    if ((u32) (u8) (s8) (M2C_FIELD(data_0214da84, s8 *, 0xC) - 2) > 1U) {
        return;
    }
    func_02022a80();
}
