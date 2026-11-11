/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_01ffdb08(s16);                             /* extern */
s32 func_0202816c();                                /* extern */
s32 func_020cbbe8(s32, u16, M2C_UNK);               /* extern */
void *func_020e8384(s16, s16);                      /* extern */
extern void *data_02159e30;
extern void *data_02159e70;
extern void *data_0215a04c;

s32 func_02120b2c(s32 arg0) {
    s32 var_r4;

    var_r4 = 0;
    switch (arg0) {                                 /* irregular */
        case 0x30002:
            if (func_01ffdb08(M2C_FIELD(data_0215a04c, s16 *, 0xE)) != 0) {
                var_r4 = func_0202816c() + 0x78;
            }
            break;
        case 0x30006:
            var_r4 = func_020cbbe8(
                M2C_FIELD(data_02159e30, s32 *, 0x10),
                M2C_FIELD(func_020e8384(M2C_FIELD(data_02159e70, s16 *, 0x48B4), M2C_FIELD(data_02159e70, s16 *, 0x48B6)),
                          u16 *, 6),
                0);
            break;
    }
    return var_r4;
}
