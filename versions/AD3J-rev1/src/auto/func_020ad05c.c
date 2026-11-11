/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

void func_020a43f8(void);

void func_020ad05c(s32 arg0) {
    *(M2C_UNK *) arg0 = (s32) (*(M2C_UNK *) arg0 + 1);
    if ((s32) * (M2C_UNK *) arg0 <= 0x10) {
        return;
    }
    func_020a43f8();
}
