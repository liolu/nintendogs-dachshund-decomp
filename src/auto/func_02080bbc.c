/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020808e8(M2C_UNK, s32);                /* extern */
M2C_UNK func_020808fc(M2C_UNK, s32);                /* extern */
s32 func_02080910(M2C_UNK);                         /* extern */
s32 func_020809f8(M2C_UNK);                         /* extern */
extern s32 data_0215358c;

void func_02080bbc(void) {
    if (data_0215358c != 0) {
        return;
    }
    data_0215358c = 1;
    func_020808fc(0, func_020809f8(0));
    func_020808e8(0, func_02080910(0));
    func_020808e8(2, 0);
    func_020808fc(2, 0);
    func_020808fc(3, func_020809f8(3));
    func_020808e8(3, func_02080910(3));
    func_020808fc(4, func_020809f8(4));
    func_020808e8(4, func_02080910(4));
    func_020808fc(5, func_020809f8(5));
    func_020808e8(5, func_02080910(5));
    func_020808fc(6, func_020809f8(6));
    func_020808e8(6, func_02080910(6));
}
