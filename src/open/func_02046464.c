#include "m2c.h"
extern s32 func_020466b0(s32, s32, s32);
extern void func_020464a0(s32);
void func_02046464(s32 arg0) {
    M2C_FIELD(arg0, u16 *, 0x12E) = 0x8000;
    if (func_020466b0(arg0, 0, 1) == 0) {
        func_020464a0(arg0);
    }
}
