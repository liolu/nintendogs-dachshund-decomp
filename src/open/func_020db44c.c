#include "m2c.h"

extern void *data_02159e74;
void func_0206cbc4(u16, void *, s32);

static inline void MI_CpuFill16(void *dest, u16 data, u32 size) {
    volatile u16 v = data;

    func_0206cbc4(v, dest, size);
}

void func_020db44c(s32 arg0, u32 arg1) {
    s32 *p = (s32 *) ((s32) data_02159e74 + 4 + arg0 * 0x1B8);
    u32 nib = arg1 & 0xF;
    u16 val = 0;
    s32 i;

    if (p[2] != 0 && p[1] != 0 && p[4] != 0) {
        for (i = 0; i < 8; i++) {
            val = val | (nib << (i * 4));
        }
        MI_CpuFill16((void *) p[4], val, p[5]);
    }
    *(s32 *) ((s32) data_02159e74 + arg0 * 0x1B8 + 0x1B0) = 1;
}
