#include "m2c.h"
s32 func_02078714(s32 arg0, s32 arg1) {
    s32 base;
    s32 table;
    u16 index;
    s32 addr;

    base  = arg0 + M2C_FIELD(arg0, s32 *, M2C_FIELD(arg0, u16 *, 0xC));
    table = base + 8;
    index = M2C_FIELD(base, u16 *, 0xE);
    addr  = table + index + 4 + M2C_FIELD(table, u16 *, index) * arg1;
    if (addr != 0) {
        return base + M2C_FIELD(addr, s32 *, 0);
    }
    return 0;
}
