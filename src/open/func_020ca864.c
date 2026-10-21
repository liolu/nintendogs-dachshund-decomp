#include "m2c.h"
void func_020ca864(s32 arg0, s32 arg1, s32 arg2) {
    u8 buf[0x80];
    s32 base;
    s32 idx;
    s32 *entry;
    void *p;
    u32 n;
    u32 i;

    n = func_02077d30(buf, (u8 *) M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C), void **, 8) + M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C), void **, 8), s32 *, 4), arg1);
    base = (s32) M2C_FIELD(M2C_FIELD(arg0, void **, 0x1C), void **, 0x5C);
    idx = (s16) arg1 * 0xC;
    entry = (s32 *) (base + idx);
    p = (void *) arg2;
    if (*entry != 0) {
        p = (void *) *entry;
    }
    entry[1] = (s32) p;
    *(s32 *) p |= 1 << (s16) (arg1 & 0xFFFF);
    for (i = 0; i < n; i++) {
        func_020ca864(arg0, buf[i], (s32) p);
    }
}
