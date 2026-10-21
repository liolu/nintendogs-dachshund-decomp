#include "m2c.h"

extern void *data_0215a04c;
extern void *data_0215a044;
extern u16 data_02134e70[];
extern void *data_0214d750;

s32 func_01ffdb08(s32);
s32 func_0202816c(s32);
s32 func_020d00dc(void *, s32, s32);
s32 func_02119da8(s32, s32, s32);
s32 func_020ceeac(s32);
void func_02027bcc(s32, u16);
s32 func_020d0010(s32, s32, s32, s32);
s32 func_020cd76c(s32, s32, s32, s32, s32, s32);
s32 func_020cfa30(s32, s32, s32);
s32 func_02028174(s32);

void func_02119aa8(s32 arg0, s32 arg1) {
    s32 h;
    void *p;
    s16 f4;
    s16 mode;
    s16 idx;
    s16 v;

    h = func_01ffdb08(M2C_FIELD(data_0215a04c, s16 *, 0xE));
    p = (void *) func_0202816c(h);
    f4 = M2C_FIELD(arg1, s16 *, 4);
    mode = M2C_FIELD(data_0215a044, s16 *, 0);
    v = mode;
    switch (mode) {
    case 0:
        break;
    case 1:
        if (f4 >= 1 && f4 <= 3) {
            v = 2;
        }
        break;
    case 2:
        if (f4 >= 1 && f4 <= 3) {
            v = 3;
        } else {
            v = 1;
        }
        break;
    case 3:
        if (f4 >= 1 && f4 <= 3) {
            v = 4;
        } else {
            v = 2;
        }
        break;
    case 4:
        if (f4 >= 1 && f4 <= 3) {
            v = 5;
        } else {
            v = 3;
        }
        break;
    case 5:
        if (f4 < 1 || f4 > 3) {
            v = 4;
        }
        break;
    }
    if (v != mode) {
        func_020d00dc(p, M2C_FIELD(data_0215a04c, s16 *, 6), v);
    }
    func_020ceeac(func_02119da8(M2C_FIELD(data_0215a04c, s16 *, 6), M2C_FIELD(data_0215a044, s16 *, 0), f4));
    idx = f4 - 1;
    if (idx < 0 || idx >= 3) {
        idx = 3;
    }
    func_02027bcc(h, data_02134e70[idx]);
    func_020d0010((s32) p, M2C_FIELD(data_0215a04c, s16 *, 6), M2C_FIELD(data_0215a044, s16 *, 0), f4);
    switch (M2C_FIELD(data_0215a04c, s16 *, 6)) {
    case 0:
        func_020cd76c((s32) p, M2C_FIELD(data_0215a04c, s16 *, 6), M2C_FIELD(data_0215a044, s16 *, 0), f4,
                      M2C_FIELD(arg1, s16 *, 8), 0);
        break;
    case 1:
        func_020cd76c((s32) p, M2C_FIELD(data_0215a04c, s16 *, 6), M2C_FIELD(data_0215a044, s16 *, 0), f4,
                      M2C_FIELD(arg1, s16 *, 0xe), M2C_FIELD(arg1, s16 *, 0xc));
        break;
    case 2:
        func_020cd76c((s32) p, M2C_FIELD(data_0215a04c, s16 *, 6), M2C_FIELD(data_0215a044, s16 *, 0), f4,
                      M2C_FIELD(arg1, s16 *, 0x10), 0);
        break;
    }
    func_020cfa30((s32) p, (s32) data_0214d750 + 0x1c, (s32) data_0214d750 + 0x2c);
    func_02128174:
    ;
    func_02028174(h);
}
