/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020e24a8(void);
void func_020f0ea0(M2C_UNK);
void func_020f0fd8(M2C_UNK);

extern void *data_02159e70;

void func_020ee3b0(s32 arg0) {
    s16 temp_r0_2;
    s32 temp_r0;

    M2C_FIELD(arg0, s32 *, 0) = 0;
    temp_r0                   = M2C_FIELD(data_02159e70, s32 *, 0xB4);
    if ((temp_r0 == 4) || (temp_r0 == 0x1E) || (temp_r0 == 0x26)) {
        func_020f0ea0(arg0 + 0x234);
        func_020f0ea0(arg0 + 0x254);
        func_020f0ea0(arg0 + 0x274);
        temp_r0_2 = M2C_FIELD(arg0, s16 *, 0x1CB8);
        switch (temp_r0_2) {                        /* irregular */
            case 0:
                return;
            case 1:
                func_020f0ea0(arg0 + 0x294);
                return;
            case 2:
                func_020f0ea0(arg0 + 0x294);
                func_020f0ea0(arg0 + 0x2B4);
                func_020f0ea0(arg0 + 0x2D4);
                return;
        }
    } else {
        func_020f0fd8(arg0 + 0x234);
        func_020f0fd8(arg0 + 0x254);
        func_020f0fd8(arg0 + 0x274);
        func_020f0fd8(arg0 + 0x294);
        func_020f0fd8(arg0 + 0x2B4);
        func_020f0fd8(arg0 + 0x2D4);
        func_020e24a8();
    }
}
