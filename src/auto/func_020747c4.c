/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void *_ZN5Sound17InfoSequenceEntry9GetWithIDEj(s32);                           /* extern */
s32 func_020743d0(M2C_UNK, u8, u16, u8, void *, s32); /* extern */

s32 func_020747c4(M2C_UNK arg0, s32 arg1) {
    void *temp_r0;

    temp_r0 = _ZN5Sound17InfoSequenceEntry9GetWithIDEj(arg1);
    if (temp_r0 == NULL) {
        return 0;
    }
    return func_020743d0(arg0, M2C_FIELD(temp_r0, u8 *, 9), M2C_FIELD(temp_r0, u16 *, 4), M2C_FIELD(temp_r0, u8 *, 8), temp_r0,
                         arg1);
}
