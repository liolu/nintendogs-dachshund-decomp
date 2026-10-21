#include "m2c.h"
s32 func_02033f30(M2C_UNK arg0) {
    s32 v;

    v = M2C_FIELD(arg0, s16 *, 0xEA);
    switch (v) {
    case 995:
    case 996:
        if ((M2C_FIELD(arg0, s16 *, 0x162) == M2C_FIELD(arg0, s16 *, 0x152)) &&
            (M2C_FIELD(arg0, s16 *, 0x14E) >= 15)) {
            return 1;
        }
        return 0;
    case 997:
    case 998:
        if ((M2C_FIELD(arg0, s16 *, 0x162) == M2C_FIELD(arg0, s16 *, 0x152)) &&
            (M2C_FIELD(arg0, s16 *, 0x14E) >= 1)) {
            return 1;
        }
        return 0;
    case 999:
    case 1000:
        if ((M2C_FIELD(arg0, s16 *, 0x162) == M2C_FIELD(arg0, s16 *, 0x152)) &&
            (M2C_FIELD(arg0, s16 *, 0x14E) >= 1)) {
            return 1;
        }
        return 0;
    }
    return 0;
}
