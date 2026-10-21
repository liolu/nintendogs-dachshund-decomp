#include "m2c.h"
void func_02116da0(s32 arg0);
void func_02116dec(s32 arg0, s32 arg1);
void func_02116d20(s32 arg0, s32 arg1);
s32 func_02116cb4(s32 arg0);
void func_02116f14(s32 arg0);
s32 func_020e77bc(void);
void func_020ce748(u16 *arg0);
M2C_UNK func_020e5458(void);
void func_02120268(s32 arg0) {
    s32 v;
    s32 ok;

    switch (M2C_FIELD(arg0, s16 *, 0x2E)) {
    case 0:
        func_02116da0(arg0);
        return;
    case 1:
        v = func_020e77bc();
        ok = 0;
        if (v != 2) {
            if (v == 3) {
                func_020ce748((u16 *) func_020e5458());
                ok = 1;
            }
        } else {
            ok = 1;
        }
        if (ok) {
            func_02116dec(arg0, 0xD);
            func_02116d20(arg0, 2);
        }
        return;
    case 2:
    case 3:
        break;
    case 4:
        if (func_02116cb4(arg0) == 0) {
            return;
        }
        func_02116f14(arg0);
        return;
    }
}
