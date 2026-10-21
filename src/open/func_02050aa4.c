#include "m2c.h"
s32 func_02027884(s32, s32);
s32 func_0202dfe4(s32);
s32 func_02027700(s32, s32);
void func_0203e5e8(s32, s32);
s32 func_02050aa4(s32 arg0, s32 arg1, s32 arg2) {
    s32 ok;

    if (func_02027884(arg1, arg0) >= 1) {
        if (func_0202dfe4(arg1) == 0) {
            ok = 1;
            goto check;
        }
    }
    ok = 0;
check:
    if (ok) {
        switch (func_02027700(arg0, arg1)) {
        case -1:
        case 1:
            return 0;
        case 0:
            func_0203e5e8(arg0, arg2);
            return 1;
        }
    } else {
        switch (func_02027700(arg0, arg1)) {
        case 1:
            switch (arg2) {
            case 0x29A:
                func_0203e5e8(arg0, 0x29E);
                return 1;
            case 0x29B:
                func_0203e5e8(arg0, 0x29F);
                return 1;
            case 0x29C:
                func_0203e5e8(arg0, 0x2A0);
                return 1;
            }
            break;
        case -1:
        case 0:
            func_0203e5e8(arg0, arg2);
            return 1;
        }
    }
    return 0;
}
