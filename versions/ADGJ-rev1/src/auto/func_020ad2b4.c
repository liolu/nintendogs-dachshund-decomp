/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020c76d4(void *);                      /* extern */
extern void *data_02153740;
extern M2C_UNK func_020ad310;
extern M2C_UNK func_020adc58;

void func_020ad2b4(void) {
    func_020c76d4(data_02153740 + 0x3938);
    M2C_FIELD(data_02153740, M2C_UNK **, 0x395C) = &func_020adc58;
    M2C_FIELD(data_02153740, M2C_UNK **, 0x3960) = &func_020ad310;
}
