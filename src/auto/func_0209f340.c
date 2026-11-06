/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_01ffda04(s16);                             /* extern */
s32 func_02028144();                                /* extern */
void *func_020b54bc(s16, s16);                      /* extern */
s32 func_020c6534(s32, u16, M2C_UNK);               /* extern */
extern void *data_02153708;
extern void *data_02153740;
extern void *data_02154c3c;

s32 func_0209f340(s32 arg0) {
    s32 var_r4;

    var_r4 = 0;
    switch (arg0) {                                 /* irregular */
        case 0x30002:
            if (func_01ffda04(M2C_FIELD(data_02153708, s16 *, 0xE)) != 0) {
                var_r4 = func_02028144() + 0x78;
            }
            break;
        case 0x30006:
            var_r4 = func_020c6534(
                M2C_FIELD(data_02154c3c, s32 *, 0x10),
                M2C_FIELD(func_020b54bc(M2C_FIELD(data_02153740, s16 *, 0x3524), M2C_FIELD(data_02153740, s16 *, 0x3526)),
                          u16 *, 6),
                0);
            break;
    }
    return var_r4;
}
