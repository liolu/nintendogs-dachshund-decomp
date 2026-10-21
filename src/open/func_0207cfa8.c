#include "m2c.h"
typedef struct {
    u32 quotient;
    u32 remainder;
} UDivMod;

extern UDivMod func_0205e15c(u32, u32);
extern void func_020cf19c();
extern s32 func_020c5d1c(s32, s32);
void *func_0207d038(void *arg0, void *arg1);
u16 func_0207cfa8(M2C_UNK arg0, s32 arg1) {
    return (u16) ((u32) (arg1 + 1) % M2C_FIELD(arg0, u32 *, 4));
}
