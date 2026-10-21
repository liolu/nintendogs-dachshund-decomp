#include "m2c.h"

extern s32 data_0214da80;
extern void *data_0215a04c;
extern void *data_0214da84;
s32 func_02114d0c(s32, s32);
s32 func_0200c360(s32, s32);
void func_020ca4f4(void *, void *);

void func_02042120(s32 arg0, s32 arg1) {
    s32 result;
    u16 v;
    s8 *p;

    result = func_02114d0c(arg0, 0);
    data_0214da80 = result;
    func_020ca4f4((void *) arg1, (void *) result);
    v = *(u16 *) data_0215a04c;
    if (v == 0 || v == 0x11 || v == 8 || v == 0x10) {
        p = (s8 *) data_0214da84;
        M2C_FIELD(p, s32 *, 0x60) = func_0200c360(arg0, arg1);
        func_020ca4f4((void *) arg1, (void *) M2C_FIELD((s8 *) data_0214da84, s32 *, 0x60));
    }
}
