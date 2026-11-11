/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_020039c8(void);
void func_020d6a1c(void);

extern void *data_02159e70;

void func_02103b80(void) {
    if (M2C_FIELD(data_02159e70, s32 *, 0xBC) == 5) {
        if (func_020039c8() != 0) {
            return;
        }
        func_020d6a1c();
        return;
    }
    func_020d6a1c();
}
