/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_01ffee18(void *);
extern s32 data_ov021_021582c4;

void func_ov021_02158118(void *arg0) {
    *(s32 *) ((u8 *) arg0 + 0x38) = *(s32 *) ((u8 *) arg0 + 0x38) + data_ov021_021582c4;
    if (*(s32 *) ((u8 *) arg0 + 0x38) < -0xC8000) {
        *(s32 *) ((u8 *) arg0 + 0x38) += 0x190000;
    }
    func_01ffee18(arg0);
}
