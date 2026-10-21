#include "m2c.h"

extern u8 *data_02159e74;
void func_0206cbc4(u16 fill, s32 dest, s32 size);

static inline void MI_CpuClear16(void *dest, u32 size) {
    volatile u16 zero = 0;

    func_0206cbc4(zero, (s32) dest, size);
}

void func_020db55c(void) {
    s32 i;
    u8 *p;

    *(u16 *) data_02159e74 = 0;
    *(u16 *) data_02159e74 = 0;

    p = data_02159e74 + 4;
    for (i = 0; i < 24; i++) {
        *(u32 *) (p + 4) = 0;
        *(u32 *) (p + 8) = 0;
        *(u16 *) (p + 0xC) = 0;
        *(u16 *) (p + 0xE) = 0;
        *(u32 *) (p + 0x14) = 0;
        MI_CpuClear16(p + 0x18, 0x1A0);
        p += 0x1B8;
    }

    *(u32 *) (data_02159e74 + 0x7348) = (s32) (data_02159e74 + 0x2948);
}
