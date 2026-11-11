#include "m2c.h"
void func_02000bd4(s32 arg0, volatile s32 *arg1) {
    while (1) {
        arg1[1] = func_02080c28();
        arg1[0] = func_0207f044(0x27FFFE8) & 0x40;
        if (arg1[0] != 0) {
            return;
        }
        if (func_0207f0e4(arg0) == 0) {
            return;
        }
        func_02080c3c(arg1[1]);
        WaitByLoop(1);
    }
}
