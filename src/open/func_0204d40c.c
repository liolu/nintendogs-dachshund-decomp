#include "m2c.h"
void func_0203e5ac(M2C_UNK, M2C_UNK, M2C_UNK);
void func_02026468(M2C_UNK);
void func_02025e44(M2C_UNK);
extern u32 *data_0214da84;
s32 func_0204d40c(s32 arg0) {
    u32 *seed;
    u32 r;
    u16 sel;

    seed = data_0214da84;
    r = *seed * 0x10DCD + 1;
    *seed = r;
    sel = (u16) ((r << 16) >> 29);
    switch (sel) {
    case 0:
        func_0203e5ac(arg0, 0, 0x17F);
        func_02026468(arg0);
        M2C_FIELD(arg0, s32 *, 0x46C) = 1;
        return 1;
    case 1:
        func_0203e5ac(arg0, 0, 0x180);
        func_02026468(arg0);
        M2C_FIELD(arg0, s32 *, 0x46C) = 2;
        return 2;
    case 2:
        func_0203e5ac(arg0, 0, 0x182);
        func_02025e44(arg0);
        M2C_FIELD(arg0, s32 *, 0x46C) = 3;
        return 3;
    case 3:
        func_0203e5ac(arg0, 0, 0x183);
        func_02026468(arg0);
        M2C_FIELD(arg0, s32 *, 0x46C) = 4;
        return 4;
    case 4:
        func_0203e5ac(arg0, 0, 0x184);
        func_02026468(arg0);
        M2C_FIELD(arg0, s32 *, 0x46C) = 5;
        return 5;
    case 5:
        func_0203e5ac(arg0, 0, 0x165);
        func_02025e44(arg0);
        M2C_FIELD(arg0, s32 *, 0x46C) = 6;
        return 6;
    case 6:
        func_0203e5ac(arg0, 0, 0x168);
        func_02026468(arg0);
        M2C_FIELD(arg0, s32 *, 0x46C) = 7;
        return 7;
    case 7:
        func_0203e5ac(arg0, 0, 0x169);
        func_02026468(arg0);
        M2C_FIELD(arg0, s32 *, 0x46C) = 8;
        return 8;
    case 8:
        func_0203e5ac(arg0, 0, 0x181);
        func_02026468(arg0);
        M2C_FIELD(arg0, s32 *, 0x46C) = 9;
        return 9;
    }
}
