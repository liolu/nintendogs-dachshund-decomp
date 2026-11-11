/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020a43f8();                            /* extern */
M2C_UNK func_020b7ee0();                            /* extern */
s32 func_020b7efc();                                /* extern */
extern void *data_02153740;

void func_020ffaa4(void) {
    if (M2C_FIELD(data_02153740, s32 *, 0xBC) == 0x17) {
        if (func_020b7efc() == 0) {
            return;
        }
        func_020a43f8();
        func_020b7ee0();
        return;
    }
    func_020a43f8();
}
