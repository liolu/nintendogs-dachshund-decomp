#include "m2c.h"
typedef struct DivMod {
    s32 quotient;
    s32 remainder;
} DivMod;

extern DivMod func_0205df50(s32 dividend, s32 divisor);

extern void func_02097cdc();
extern void func_02070074();
void func_020cbb18(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
void func_02065914(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5);
s32 func_0209fe48(void *arg0, s32 arg1) {
    return (M2C_FIELD(arg0, s32 *, 0x50) + arg1 + 1) % M2C_FIELD(arg0, s32 *, 0x3C);
}
