#include "m2c.h"
extern void *data_02159e70;
s32 func_02003a34(void);
void func_02003c00(s32);
void func_020d7880(s32);
void func_0210a458(u8 *arg0) {
    s32 *p = (s32 *) (arg0 + 0x1D08);
    s32 state;

    M2C_FIELD(arg0, s32 *, 0) = M2C_FIELD(arg0, s32 *, 4);
    state = M2C_FIELD(arg0, s32 *, 0);
    switch (state) {
    case 0:
        if (M2C_FIELD((u8 *) data_02159e70 + 0x4000, s32 *, 0x8BC) == 1) {
            M2C_FIELD(arg0, s32 *, 0x48) = -1;
            M2C_FIELD(arg0, s32 *, 4) = 1;
            func_02003c00(0x14);
        }
        break;
    case 1:
        if (func_02003a34() != 0) {
            *p = M2C_FIELD(arg0, s32 *, 0x48);
            func_020d7880(0x1E);
        }
        break;
    }
}
