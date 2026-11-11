/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02110f84(void *, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */

void func_020d8364(void *arg0, M2C_UNK arg1) {
    func_02110f84(arg0, arg1, 0xA40, 0);
    M2C_FIELD(arg0, s32 *, 0xB4) = (s32) (M2C_FIELD(arg0, s32 *, 0xB4) + 0x19A);
    if ((s32) M2C_FIELD(arg0, s32 *, 0xB4) > 0x666) {
        M2C_FIELD(arg0, s32 *, 0xB4) = 0x666;
    }
}
