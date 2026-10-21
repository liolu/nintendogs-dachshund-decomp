/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0205e050(M2C_UNK);                     /* extern */
M2C_UNK func_020634a8();                            /* extern */
extern M2C_UNK (*data_0214b48c)();
extern s32 data_0214b494;

void func_0205e184(M2C_UNK arg0) {
    if (data_0214b494 == 0) {
        func_020634a8();
        if (data_0214b48c != NULL) {
            data_0214b48c();
            data_0214b48c = NULL;
        }
    }
    func_0205e050(arg0);
}
