#include "m2c.h"
s32 func_01ffdb08(s32 arg0);
s32 func_020b0f74(s32 arg0, s32 arg1);
void func_020afb54(s32 arg0, s32 arg1);
extern void *data_02159e70;
void func_020e3e2c(s32 arg0);
extern void *data_02159e74;
void func_020ec470(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void func_020fbda4(s32 arg0, s32 arg1) {
    s16 v;

    func_01ffdb08(arg1);
    if (func_020b0f74(arg0, arg1) == 0) {
        return;
    }
    v = *(s16 *) (arg0 + 0x90);
    switch (v) {
        case 0:
            return;
        case 1:
            func_020afb54(arg0, arg1);
            return;
        case 4:
            return;
    }
}
