/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02003d1c(M2C_UNK);                     /* extern */
M2C_UNK func_020b7f38(M2C_UNK, s16, s16);           /* extern */
extern void *data_02153740;

void func_020b4b34(void *arg0) {
    s32 temp_r1;

    M2C_FIELD(arg0, s32 *, 0) = 0;
    temp_r1                   = M2C_FIELD(data_02153740, s32 *, 0xBC);
    switch (temp_r1) {                              /* irregular */
        case 7:
            func_020b7f38(0x14, M2C_FIELD(arg0, s16 *, 0x888), M2C_FIELD(arg0, s16 *, 0x88A));
            return;
        case 12:
            func_020b7f38(0x14, M2C_FIELD(arg0, s16 *, 0x888), M2C_FIELD(arg0, s16 *, 0x88A));
            return;
        case 3:
            func_02003d1c(0x14);
            return;
    }
}
