#include "m2c.h"
extern void *data_0214da84;
void func_020ca368(void *);
s32 func_020ca3a8(s32, s32);
void func_020437e0(s32 arg0) {
    s16 i;
    s32 e;
    u8 *base;

    i = 0;
    do {
        e = M2C_FIELD((u8 *) data_0214da84 + i * 4, s32 *, 0x48);
        if (e != 0) {
            func_020ca368((void *) (e + 0x98));
        }
        i = (s16) (i + 1);
    } while (i < 3);

    base = data_0214da84;
    M2C_FIELD(base, s32 *, 0x7408) = func_020ca3a8(arg0, M2C_FIELD(base, s32 *, 0x7404));
    base = data_0214da84;
    M2C_FIELD(base, s32 *, 0x741C) = func_020ca3a8(arg0, M2C_FIELD(base, s32 *, 0x7418));
}
