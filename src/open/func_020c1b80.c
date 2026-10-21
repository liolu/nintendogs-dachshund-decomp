#define M2C_SELF_func_020bf57c
#define M2C_SELF_func_020066f0
#include "m2c.h"

extern void *data_02156ec0;
extern u8 data_0212c5cc[];
void func_020bf57c(s32, void *, s32);
s32 func_020066f0(u32, void (*)(void));

void func_020c1ce0(void);
void func_020c1b80(s32 arg0, s32 arg1, s32 arg2) {
    s32 i;
    u32 x;
    u32 a;
    u32 b;
    u32 size;

    func_020bf57c(arg0, data_0212c5cc, arg2);
    data_02156ec0 = (void *) func_020038a8((s32 *) arg0, 0x134);
    M2C_FIELD(data_02156ec0, s32 *, 0x120) = arg1;
    M2C_FIELD(data_02156ec0, s32 *, 0x114) = arg2;
    M2C_FIELD(data_02156ec0, u16 *, 0x10A) = 1;
    M2C_FIELD(data_02156ec0, s32 *, 0x118) = 0;
    M2C_FIELD(data_02156ec0, s32 *, 0x11C) = 0;
    for (i = 0; i < 2; i++) {
        ((s32 *) data_02156ec0)[i + 0x10] = 0;
        ((s32 *) data_02156ec0)[i + 0x20] = func_020038a8((s32 *) arg0, 0x28);
        x = M2C_FIELD(data_02156ec0, s32 *, 0x114);
        a = ((x + 0x1F1) / 0x1F2 + 0x1F) & ~0x3;
        size = 0;
        if (a != 0) {
            size = a;
        }
        if (size < a) {
            size = a;
        }
        b = ((x + 0x71) / 0x72 + 0x1F) & ~0x3;
        if (size < b) {
            size = b;
        }
        ((s32 *) data_02156ec0)[i + 0x30] = func_020038a8((s32 *) arg0, size);
    }
    M2C_FIELD(data_02156ec0, s32 *, 0x3C) = func_02003850((s32 *) arg0, 0x200, 0x20);
    func_020066f0(0xB, func_020c1ce0);
}
