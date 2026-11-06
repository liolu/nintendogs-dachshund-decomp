/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02003d50(M2C_UNK);                     /* extern */
M2C_UNK func_020b7f88(M2C_UNK, s16, s16);           /* extern */
extern void *data_02153740;

void func_020fbef8(void *arg0) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(data_02153740, s32 *, 0xBC);
    switch (temp_r0) {                              /* irregular */
        case 23:
            func_02003d50(0xA);
            func_020b7f88(0x14, M2C_FIELD(arg0, s16 *, 0x888), M2C_FIELD(arg0, s16 *, 0x88A));
            return;
        case 27:
            func_020b7f88(0x14, M2C_FIELD(arg0, s16 *, 0x888), M2C_FIELD(arg0, s16 *, 0x88A));
            return;
    }
}
