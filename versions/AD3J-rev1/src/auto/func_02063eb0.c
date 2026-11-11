/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_020641c4();                         /* extern */
s32 func_02063d8c();                         /* extern */
M2C_UNK func_02063c1c();                            /* extern */

void func_02063eb0(M2C_UNK arg0) {
    if (func_02063d8c() != 0) {
        return;
    }
    do {

    } while (func_020641c4(0) != 0);
    if (func_02063d8c(arg0) != 0) {
        return;
    }
    func_02063c1c();
    if (func_02063d8c(arg0) != 0) {
        return;
    }
    do {
        func_020641c4(1);
    } while (func_02063d8c(arg0) == 0);
}
