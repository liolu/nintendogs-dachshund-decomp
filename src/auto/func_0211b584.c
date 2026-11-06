/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02106e90(s16);                             /* extern */
M2C_UNK func_02108160(M2C_UNK);                     /* extern */
M2C_UNK func_02118e5c(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
extern void *data_02153720;

void func_0211b584(M2C_UNK arg0) {
    s32 temp_r0;

    temp_r0 = func_02106e90(M2C_FIELD(data_02153720, s16 *, 0x7C));
    switch (temp_r0) {                              /* irregular */
        case 11:
            func_02108160(1);
            func_02118e5c(arg0, 0x13, -1, 0);
            return;
        case 12:
            func_02108160(1);
            func_02118e5c(arg0, 3, -1, 0);
            return;
    }
}
