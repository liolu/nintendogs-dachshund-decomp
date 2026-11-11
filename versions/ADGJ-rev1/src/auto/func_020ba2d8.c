/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02003d1c(M2C_UNK);                     /* extern */
M2C_UNK func_020be13c(void *);                      /* extern */

void func_020ba2d8(s32 *arg0) {
    *arg0 = 0;
    func_020be13c(((s8 *) arg0 + 0xBC));
    func_020be13c(((s8 *) arg0 + 0xDC));
    func_020be13c(((s8 *) arg0 + 0xFC));
    func_02003d1c(0x10);
}
