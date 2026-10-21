#include "m2c.h"
M2C_UNK func_02002e50();
M2C_UNK func_02002e48();
M2C_UNK func_02111b58();
M2C_UNK func_02111b2c();
M2C_UNK func_02002fc0();
M2C_UNK func_02002e60();
M2C_UNK func_021110a0();
M2C_UNK func_0211100c();
M2C_UNK func_02110f60();
extern M2C_UNK func_0210e4f0;

s32 func_02122dd4(s32 arg0) {
    u8 sp4[32];
    s32 h;
    s32 ret;
    s32 again;
    s32 v;

    ret = 0;
    again = 1;
    h = func_02002e48(func_02002e50());
    if (arg0 != 0) {
        func_02111b58(h);
    }
    if (arg0 != 0) {
        func_02111b2c();
        func_02002fc0(sp4, &func_0210e4f0);
        func_02002e60(sp4, 0);
    }
    do {
        func_021110a0();
        func_02002fc0(sp4, &func_0210e4f0);
        v = func_02002e60(sp4, 0);
        if (v == 0x17) {
            func_0211100c();
            func_02002fc0(sp4, &func_0210e4f0);
            v = func_02002e60(sp4, 0);
        } else {
            again = 0;
            if (v != 1) {
                ret = 1;
            }
        }
    } while (again != 0);
    if (arg0 != 0) {
        func_02110f60();
    }
    return ret;
}
