/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_02074474(M2C_UNK, M2C_UNK);
void func_020744ec(M2C_UNK, M2C_UNK);

void func_020743d8(s32 arg0, s32 arg1) {
    u8 temp_r0;

    temp_r0 = *M2C_FIELD(arg1, u8 **, 8);
    switch (temp_r0) {                              /* irregular */
        case 0x4D:
            func_02074474(arg0 + 0x3C, arg1);
            func_020744ec(arg0 + 8, arg1);
            return;
        case 0x4A:
            func_02074474(arg0 + 0x44, arg1);
            func_020744ec(arg0 + 0x10, arg1);
            return;
        case 0x56:
            func_02074474(arg0 + 0x4C, arg1);
            func_020744ec(arg0 + 0x18, arg1);
            return;
    }
}
