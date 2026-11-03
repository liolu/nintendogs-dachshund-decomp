/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_02003964(void);
void func_020a43f8(void);

extern void *data_02153740;

void func_020dfac0(void) {
    if (M2C_FIELD(data_02153740, s32 *, 0xBC) == 5) {
        if (func_02003964() != 0) {
            return;
        }
        func_020a43f8();
        return;
    }
    func_020a43f8();
}
