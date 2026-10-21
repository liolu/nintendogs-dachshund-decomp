#include "m2c.h"

typedef struct {
    s32 a;
    s32 b;
    s32 c;
} Three;

extern void *data_0215a04c;
extern void *data_0215a048;
extern void *data_0215a064;
extern s16 data_02124e68[];
void func_020a5c2c(void *);
s32 func_02068480(s32, s32);
void func_02037130(void *, s32);

void func_0200ccc4(s32 p) {
    s32 v[4];
    s32 idx;
    s32 idx1;
    s16 *tbl;
    s32 base;
    Three *src;

    if (*(u16 *) data_0215a04c == 9) {
        M2C_FIELD(p, s32 *, 0x26C) = 0;
        M2C_FIELD(p, s32 *, 0x270) = 0;
        M2C_FIELD(p, s32 *, 0x274) = 0x2000;
    } else {
        func_020a5c2c(v);
        idx = (func_02068480(v[0], v[2]) >> 4) * 2;
        idx1 = idx + 1;
        tbl = data_02124e68;
        base = M2C_FIELD(data_0215a048, s32 *, 0xC) - 0x2008;
        M2C_FIELD(p, s32 *, 0x26C) = (s32) (((s64) base * tbl[idx] + 0x800) >> 12);
        M2C_FIELD(p, s32 *, 0x270) = 0;
        M2C_FIELD(p, s32 *, 0x274) = (s32) (((s64) base * tbl[idx1] + 0x800) >> 12);
    }
    src = (Three *) M2C_FIELD((u8 *) data_0215a064, void **, 0x1C);
    src = (Three *) ((u8 *) src + 0x30);
    M2C_FIELD(p, Three *, 0x278) = *src;
    M2C_FIELD(p, Three *, 0x3B4) = M2C_FIELD(p, Three *, 0x278);
    func_02037130((void *) p, 0x300);
}
