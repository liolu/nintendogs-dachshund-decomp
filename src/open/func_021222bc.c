#include "m2c.h"
extern void *data_0215a064;
extern void *data_02159e30;
extern u8 data_0214cadc[];
extern u8 data_02130fb4[];
s32 func_020cf000(s32);
s32 func_020cac38(s32);
s32 func_020cbbe8(s32, s32, s32);
s32 func_021222bc(s32 arg0) {
    s32 r4 = (s32) data_0214cadc;
    s32 v;
    s32 idx;

    switch (arg0) {
    case 0x30000:
        v = func_020cf000(M2C_FIELD(data_0215a064, s32 *, 0x140));
        if (v != 0) {
            r4 = v + 0xC;
        }
        break;
    case 0x30003:
        r4 = func_020cac38(M2C_FIELD(M2C_FIELD(data_0215a064, void **, 0x13C), u16 *, 2));
        break;
    case 0x30006:
        idx = M2C_FIELD(M2C_FIELD(data_0215a064, void **, 0x13C), u16 *, 2);
        r4 = func_020cbbe8(M2C_FIELD(data_02159e30, s32 *, 4), M2C_FIELD(data_02130fb4, s32 *, idx * 0x1C), 0);
        break;
    }
    return r4;
}
