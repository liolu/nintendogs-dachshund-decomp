#include "m2c.h"

typedef struct {
    u32 quotient;
    u32 remainder;
} UDivMod;

extern UDivMod func_0205e15c(u32, u32);

void func_02119744(s16 *arg0, u32 arg1, u32 *arg2) {
    s16 k;
    s32 i;
    s16 j;
    s16 tmp;
    u32 seed;

    for (k = 0; k < arg1; k++) {
        arg0[k] = k;
    }
    for (i = 0; i < arg1; i++) {
        seed = *arg2 * 0x10DCD + 1;
        *arg2 = seed;
        j = i + (u16) seed % (arg1 - i);
        tmp = arg0[i];
        if (tmp != 0x1F && arg0[j] != 0x1F) {
            arg0[i] = arg0[j];
            arg0[j] = tmp;
        }
    }
}
