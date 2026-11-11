/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0205e3e8(M2C_UNK);                     /* extern */
M2C_UNK func_02063840();                            /* extern */
extern M2C_UNK (*data_0214da8c)();
extern s32 data_0214da94;

void func_0205e51c(M2C_UNK arg0) {
    if (data_0214da94 == 0) {
        func_02063840();
        if (data_0214da8c != NULL) {
            data_0214da8c();
            data_0214da8c = NULL;
        }
    }
    func_0205e3e8(arg0);
}
