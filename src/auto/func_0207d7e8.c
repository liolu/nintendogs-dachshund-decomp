/* compiler: 1.2/sp2p3 */
#include "m2c.h"
M2C_UNK func_0207d850();

void func_0207d7e8(void *arg0, s32 arg1) {
    u16 off;

    if (*(s32 *) arg0 == 0) {
        func_0207d850();
        return;
    }
    off                                                                      = *(u16 *) ((u8 *) arg0 + 0xA);
    *(s32 *) ((u8 *) arg1 + off)                                             = *(s32 *) ((u8 *) arg0 + 4);
    *(s32 *) ((u8 *) arg1 + off + 4)                                         = 0;
    *(s32 *) (*(u8 **) ((u8 *) arg0 + 4) + *(u16 *) ((u8 *) arg0 + 0xA) + 4) = arg1;
    *(s32 *) ((u8 *) arg0 + 4)                                               = arg1;
    *(u16 *) ((u8 *) arg0 + 8)                                               = (u16) (*(u16 *) ((u8 *) arg0 + 8) + 1);
}
