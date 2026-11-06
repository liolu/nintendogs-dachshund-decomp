/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020c3748();                                /* extern */
M2C_UNK func_020c94b0();                            /* extern */
M2C_UNK func_020cd3d8(M2C_UNK, s32, M2C_UNK, M2C_UNK, s32); /* extern */
extern void *data_02154c70;

void func_02091af4(void *arg0) {
    s16 temp_r0;

    if (M2C_FIELD(data_02154c70, s32 *, 0xA4) == 0) {
        return;
    }
    temp_r0 = M2C_FIELD(data_02154c70, s16 *, 0x9A);
    switch (temp_r0) {                              /* irregular */
        case 0:
            if (func_020c3748() != 0) {
                M2C_FIELD(arg0, s16 *, 4) = 0x10;
                M2C_FIELD(arg0, s16 *, 6) = 0;
                return;
            }
            M2C_FIELD(arg0, s16 *, 4) = 0xF;
            M2C_FIELD(arg0, s16 *, 6) = 0;
            func_020cd3d8(1, 0x837, 0, 0, 0);
            return;
        case 1:
            M2C_FIELD(arg0, s16 *, 4) = 0x11;
            M2C_FIELD(arg0, s16 *, 6) = 0;
            func_020c94b0();
            return;
    }
}
