/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020a6df8(s16);                         /* extern */
extern void *data_021555f8;

void func_020a6920(s32 arg0, s32 arg1) {
    switch (arg1) {                                 /* irregular */
        case 0:
            return;
        case 3:
            M2C_FIELD(data_021555f8, s16 *, 0x2C) = 0;
            return;
        case 1:
            func_020a6df8(M2C_FIELD(data_021555f8, s16 *, 0x22));
            M2C_FIELD(data_021555f8, s16 *, 0x2C) = 2;
            return;
    }
}
