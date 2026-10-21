#include "m2c.h"

typedef struct {
    s32 x;
    s32 y;
    s32 z;
} V3;

extern s16 data_02124e68[];
void func_020b758c(void *, void *, void *, void *, void *, void *);
void func_020ba364(u8 *arg0, u8 *arg1) {
    u8 *src = arg0;
    u8 *dst = arg1;
    s32 x;
    s16 *t;
    s64 prod;
    u32 v;
    s32 idx;
    s32 i2;
    s32 i3;

    *(V3 *) (dst + 0x30) = *(V3 *) src;
    *(V3 *) (dst + 0x3c) = *(V3 *) (src + 0xC);
    func_020b758c(dst + 0x60, dst + 0x54, dst + 0x48, dst + 0x30, dst + 0x3C, src + 0x18);
    x = *(s32 *) (src + 0x24);
    prod = (s64) x * 0xB60B60B60BLL + 0x80000000000LL;
    v = (u32) (prod >> 32);
    idx = (s32) ((v << 4) >> 16) >> 4;
    i2 = idx * 2;
    i3 = i2 + 1;
    t = data_02124e68;
    *(s16 *) (dst + 0x6C) = t[i2];
    *(s16 *) (dst + 0x6E) = t[i3];
}
