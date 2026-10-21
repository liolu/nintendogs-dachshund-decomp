#include "m2c.h"
extern void *data_02159e74;
void func_020ec470(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
extern void *data_02159e70;
void func_020e3e2c(s32 arg0);
s32 func_01ffdb08(s32 arg0);
s32 func_020b0f74(s32 arg0, s32 arg1);
void func_020afb54(s32 arg0, s32 arg1);
void func_020dab18(void) {
    s32 i;
    s8 *p;
    s8 *q;

    p = (s8 *) data_02159e74 + 4;
    for (i = 0; i < 0x18; i++, p += 0x1B8) {
        if (M2C_FIELD(p, s32 *, 4) != 0 && M2C_FIELD(p, s32 *, 8) == 0) {
            q = p + 0x18;
            if (M2C_FIELD(q, s32 *, 0x20) != 0) {
                M2C_FIELD(q, s32 *, 0x20) = 0;
                func_020ec470(M2C_FIELD(q, s32 *, 0), M2C_FIELD(p, s32 *, 0x10),
                              M2C_FIELD(q, u16 *, 0x1C) << 5, M2C_FIELD(p, s32 *, 0x14));
            }
        }
    }
}
