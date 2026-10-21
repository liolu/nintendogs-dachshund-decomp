#include "m2c.h"
void func_020bc788(s32 arg0);
void func_020bc5e8(s32 arg0);
void func_020bc580(s32 arg0) {
    switch (M2C_FIELD(arg0, s16 *, 0x14)) {
    case 0:
        func_020bc788(arg0);
        break;
    case 1:
        func_020bc5e8(arg0);
        break;
    case 2:
        func_020bc788(arg0);
        func_020bc5e8(arg0);
        break;
    case 3:
        func_020bc5e8(arg0);
        func_020bc788(arg0);
        break;
    }
}
