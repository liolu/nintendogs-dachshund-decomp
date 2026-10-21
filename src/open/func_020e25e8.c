#include "m2c.h"
/* test */
extern void *data_02159e70;
void func_020f0fd8(s32 arg0);
s32 func_020e7ec4(s32 arg0, s32 arg1);
s32 func_02073a38(s32 arg0, s32 *arg1);
void func_020e25e8(void) {
    u8 *base;

    base = (u8 *) data_02159e70 + 0x5028;
    if (M2C_FIELD(data_02159e70, s32 *, 0x5028) == 0) {
        return;
    }
    switch (M2C_FIELD(base, s32 *, 0x1AC)) {
    case 2:
    case 3:
        func_020f0fd8((s32) (base + 0x198));
        break;
    }
    switch (M2C_FIELD(base, s32 *, 0x1CC)) {
    case 2:
    case 3:
        func_020f0fd8((s32) (base + 0x1B8));
        break;
    }
}
