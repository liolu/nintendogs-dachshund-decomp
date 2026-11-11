/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0202fa6c(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_ov004_0216a128();                      /* extern */
extern u16 *data_0215a04c;

void func_0202fa18(M2C_UNK arg0) {
    if (*data_0215a04c == 9) {
        func_ov004_0216a128();
        return;
    }
    func_0202fa6c(arg0, 0);
}
