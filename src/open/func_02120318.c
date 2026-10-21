#include "m2c.h"

s32 func_020e77bc(void);
u16 *func_020e5458(void);
s32 func_020cab80(u16 *arg0);
void func_02116da0(s32 arg0);
void func_02116dec(s32 arg0, s32 arg1);
void func_02116d20(s32 arg0, s32 arg1);
s32 func_02116cb4(s32 arg0);
void func_02116f14(s32 arg0);
void func_020d2c64(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void func_020e77dc(void);
void func_020ce7e8(void);
void func_02120434(void);

void func_02120318(s32 arg0) {
    s32 v;
    s32 ok;
    s32 f;
    u16 *a;

    switch (M2C_FIELD(arg0, s16 *, 0x2E)) {
    case 0:
        func_02116da0(arg0);
        return;
    case 1:
        v = func_020e77bc();
        ok = 0;
        switch (v) {
        case 3:
            a = (u16 *) func_020e5458();
            f = 0;
            if (*a == 0) {
                f = 1;
            } else if (func_020cab80(a) != 0) {
                f = 1;
            }
            if (f) {
                func_020d2c64(2, 0xC3A, 0, (s32) func_02120434, 0);
                func_020e77dc();
            } else {
                func_020e5458();
                func_020ce7e8();
                ok = 1;
            }
            break;
        case 2:
            ok = 1;
            break;
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
