#include "m2c.h"
s32 func_02027700(s32, s8 *);
void func_02035fd8(s32);
s32 func_0202fa5c(s32);
void func_0203e5e8(s32, s32);
s32 func_02051f4c(s32 arg0, s8 *arg1) {
    s32 r;

    switch (*(s16 *) (arg1 + 0xEA)) {
    default:
        r = func_02027700(arg0, arg1);
        switch (r) {
        case -1:
        case 1:
            return 0;
        case 0:
            func_02035fd8(arg0);
            return func_0202fa5c(arg0);
        }
        break;
    case 0x292:
        r = func_02027700(arg0, arg1);
        switch (r) {
        case 1:
            func_0203e5e8(arg0, 0x290);
            return 1;
        case -1:
        case 0:
            func_02035fd8(arg0);
            return func_0202fa5c(arg0);
        }
        break;
    case 0x293:
        r = func_02027700(arg0, arg1);
        switch (r) {
        case -1:
        case 0:
        case 1:
            return 0;
        }
        break;
    case 0x294:
        r = func_02027700(arg0, arg1);
        switch (r) {
        case -1:
        case 1:
            return 0;
        case 0:
            func_02035fd8(arg0);
            return func_0202fa5c(arg0);
        }
        break;
    }
    return 0;
}
