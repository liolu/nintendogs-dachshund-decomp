#include "m2c.h"
extern s8 *data_02159e3c;
void func_020d1164(s32 arg0, s32 arg1, u32 arg2);
void func_020d0f88(s32 arg0) {
    u16 i;

    func_020d1164((s32) data_02159e3c, 0, 0);
    func_020d1164((s32) data_02159e3c, 6, 0);
    for (i = 0; i < 3; i++) {
        func_020d1164((s32) data_02159e3c, 1, (u16) (s16) i);
    }
    for (i = 0; i < 3; i++) {
        func_020d1164((s32) data_02159e3c, 2, (u16) (s16) i);
    }
    func_020d1164(arg0, 3, 0);
    for (i = 0; i < 5; i++) {
        func_020d1164(arg0, 4, i);
    }
    for (i = 0; i < 5; i++) {
        func_020d1164(arg0, 5, i);
    }
}
