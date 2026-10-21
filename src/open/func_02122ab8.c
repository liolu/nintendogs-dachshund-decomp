#include "m2c.h"
s32 func_02116da0(s32);
s32 func_020e77bc(void);
s32 func_020e5458(void);
s32 func_020cab80(void);
void func_02116dec(s32, s32);
void func_02116d20(s32, s32);
void func_020d2c64(s32, s32, s32, s32, s32);
s32 func_02116cb4(s32);
void func_02116f14(s32);
void func_02122ab8(s32 arg0) {
    u16 *a;
    u16 t;
    s16 v;

    switch (M2C_FIELD(arg0, s16 *, 0x2E)) {
    case 0:
        func_02116da0(arg0);
        return;
    case 1:
        if (func_020e77bc() != 3) {
            return;
        }
        a = (u16 *) func_020e5458();
        t = *a;
        v = 0;
        if (t == 0) {
            v = 1;
        } else if (((s32 (*)(u16 *)) func_020cab80)(a) != 0) {
            v = 2;
        }
        switch (v) {
        case 0:
            func_02116dec(arg0, 0x18);
            func_02116d20(arg0, 0);
            return;
        case 1:
        case 2:
            func_02116dec(arg0, 0x17);
            func_02116d20(arg0, 0);
            func_020d2c64(2, 0xC1E, 0, 0, 0);
            return;
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
