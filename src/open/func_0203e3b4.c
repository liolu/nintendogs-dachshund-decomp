#include "m2c.h"

extern u8 data_0214da84[];

typedef struct {
    s32 x, y, z;
} V3;

typedef struct {
    s32 m[4];
} M4;

typedef struct {
    M4 m[3];
} M3x4;

typedef struct {
    u8 pad[0x3C];
    M3x4 mat;
} Node3C;

void func_0206810c(V3 *a, V3 *b, V3 *c);
void func_01ff8980(s32);
void func_02068270(s32, s32, s32);
M2C_UNK func_01ffe160(M2C_UNK);

static inline void copy_mat(M3x4 *dst, M3x4 *src) {
    *dst = *src;
}

M2C_UNK func_0203e3b4(s32 arg0) {
    s32 i;
    s32 flag;
    u8 *p;
    V3 tmp;
    V3 c;
    V3 a;
    V3 b;
    s32 v;

    i = M2C_FIELD(arg0, s16 *, 0x88);
    if ((i < 0) || (i >= 3)) {
        p = NULL;
    } else {
        p = (u8 *) M2C_FIELD((u8 *) M2C_FIELD(data_0214da84, void **, 0) + i * 4, void **, 0x54);
    }
    if (p == NULL) {
        goto invalid;
    }
    if (M2C_FIELD(p, s16 *, 0xEA) == 0x47A) {
        goto invalid;
    }
    if (M2C_FIELD(p, s16 *, 0xEA) == 0x47F) {
        goto invalid;
    }
    flag = 0;
    M2C_FIELD(arg0, u16 *, 0x20) = M2C_FIELD(arg0, u16 *, 0x20) & ~1;
    v = (s32) (((s64) M2C_FIELD(M2C_FIELD(p, void **, 0x9E8), s32 *, 8) * 0xB54 + 0x800) >> 12);
    M2C_FIELD(arg0, s32 *, 0x24) = v;
    M2C_FIELD(arg0, s32 *, 0x28) = v;
    M2C_FIELD(arg0, s32 *, 0x2C) = v;
    if (M2C_FIELD(p, s8 *, 0x9E) != 0) {
        goto set;
    }
    if (M2C_FIELD(p, s32 *, 0x460) >= 0x1000) {
        goto test;
    }
set:
    flag = 1;
test:
    if (flag) {
        a.x = 0;
        a.y = 0x1000;
        a.z = 0;
        b = *(V3 *) (p + 0x1A4);
        func_0206810c(&a, &b, &c);
        func_01ff8980((s32) &c);
        func_0206810c(&c, &a, &b);
        M2C_FIELD(arg0, s32 *, 0x3C) = c.x;
        M2C_FIELD(arg0, s32 *, 0x40) = c.y;
        M2C_FIELD(arg0, s32 *, 0x44) = c.z;
        M2C_FIELD(arg0, s32 *, 0x48) = a.x;
        M2C_FIELD(arg0, s32 *, 0x4C) = a.y;
        M2C_FIELD(arg0, s32 *, 0x50) = a.z;
        M2C_FIELD(arg0, s32 *, 0x54) = b.x;
        M2C_FIELD(arg0, s32 *, 0x58) = b.y;
        M2C_FIELD(arg0, s32 *, 0x5C) = b.z;
    } else {
        ((Node3C *) arg0)->mat = ((Node3C *) p)->mat;
    }
    *(V3 *) (arg0 + 0x30) = *(V3 *) (p + 0x33C);
    tmp = *(V3 *) (p + 0x934);
    func_02068270(arg0 + 0x30, (s32) &tmp, arg0 + 0x30);
    M2C_FIELD(arg0, s32 *, 0x34) = M2C_FIELD(p, s32 *, 0x918);
    goto end;

invalid:
    M2C_FIELD(arg0, u16 *, 0x20) = M2C_FIELD(arg0, u16 *, 0x20) | 1;
end:
    return func_01ffe160(arg0);
}
