/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02063a94(u8, s32);                     /* extern */
M2C_UNK func_02063af0(u8);                          /* extern */
M2C_UNK func_020718c4(void *);                      /* extern */

void func_020719d0(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0x2C) == 2) {
        func_02063a94(M2C_FIELD(arg0, u8 *, 0x3C), 0xFFFFFD2D);
    }
    func_02063af0(M2C_FIELD(arg0, u8 *, 0x3C));
    func_020718c4(arg0);
}
