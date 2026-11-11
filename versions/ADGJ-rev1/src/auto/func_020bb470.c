/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020af7d4();                            /* extern */
M2C_UNK func_020bdf44(void *);                      /* extern */
M2C_UNK func_020be07c(void *);                      /* extern */
extern void *data_02153740;

void func_020bb470(void *arg0) {
    s16 temp_r0_2;
    s32 temp_r0;

    M2C_FIELD(arg0, s32 *, 0) = 0;
    temp_r0                   = M2C_FIELD(data_02153740, s32 *, 0xB4);
    if ((temp_r0 == 4) || (temp_r0 == 0x1E) || (temp_r0 == 0x26)) {
        func_020bdf44(arg0 + 0x234);
        func_020bdf44(arg0 + 0x254);
        func_020bdf44(arg0 + 0x274);
        temp_r0_2 = M2C_FIELD(arg0, s16 *, 0x928);
        switch (temp_r0_2) {                        /* irregular */
            case 0:
                return;
            case 1:
                func_020bdf44(arg0 + 0x294);
                return;
            case 2:
                func_020bdf44(arg0 + 0x294);
                func_020bdf44(arg0 + 0x2B4);
                func_020bdf44(arg0 + 0x2D4);
                return;
        }
    } else {
        func_020be07c(arg0 + 0x234);
        func_020be07c(arg0 + 0x254);
        func_020be07c(arg0 + 0x274);
        func_020be07c(arg0 + 0x294);
        func_020be07c(arg0 + 0x2B4);
        func_020be07c(arg0 + 0x2D4);
        func_020af7d4();
    }
}
