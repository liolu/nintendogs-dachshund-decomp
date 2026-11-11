/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_01ffe160(void *);
extern s32 data_ov022_0215a744;

void func_ov022_0215a598(void *arg0) {
    *(s32 *) ((u8 *) arg0 + 0x38) = *(s32 *) ((u8 *) arg0 + 0x38) + data_ov022_0215a744;
    if (*(s32 *) ((u8 *) arg0 + 0x38) < -0xC8000) {
        *(s32 *) ((u8 *) arg0 + 0x38) += 0x190000;
    }
    func_01ffe160(arg0);
}
