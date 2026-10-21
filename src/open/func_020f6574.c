#include "m2c.h"

typedef struct {
    s32 x;
    s32 y;
    s32 z;
} Vec;

typedef struct {
    s32 unk0;
    s32 items[1];
} Tbl;

extern u8 *data_0214cd98;
extern s32 *data_021555f8;
s32 func_0206823c(s32, s32, Vec *);
void func_02068270(s32, Vec *, s32);

void func_020f6574(s32 arg0, s32 arg1) {
    Vec acc = {0, 0, 0};
    Vec v;
    s16 idx;
    s16 i;
    s16 end;
    s32 step;
    s32 var_r5;
    s32 d;

    idx = M2C_FIELD(arg0, s16 *, 0x88);
    if ((idx & 3) == (M2C_FIELD(data_0214cd98, s32 *, 0x28) & 3)) {
        i = (s16) (idx + 1);
        end = 7;
        step = 1;
    } else {
        i = 6;
        end = idx;
        step = -1;
    }
    for (; i <= end; i = (s16) (i + step)) {
        if (i < 0 || M2C_FIELD(data_021555f8, s16 *, 0x20) <= i) {
            var_r5 = 0;
        } else {
            var_r5 = ((Tbl *) data_021555f8)->items[i];
        }
        if (var_r5 != 0) {
            d = arg1 + (s32) (((s64) (*(s32 *) ((u8 *) var_r5 + 0x24)) * 0x166C + 0x800) >> 12);
            func_0206823c(arg0 + 0xBC, (s32) ((u8 *) var_r5 + 0xBC), &v);
            if (v.x < d && v.x > -d && v.y < d && v.y > -d && v.z < d && v.z > -d) {
                if (v.x > 0) {
                    acc.x += d - v.x;
                } else {
                    acc.x += v.x - d;
                }
                if (v.y > 0) {
                    acc.y += (d - v.y) * 2;
                } else {
                    acc.y += (v.y - d) * 2;
                }
                if (v.z > 0) {
                    acc.z += d - v.z;
                } else {
                    acc.z += v.z - d;
                }
            }
        }
    }
    if (acc.x > 0xA4) {
        acc.x = 0xA4;
    }
    if (acc.y > 0xA4) {
        acc.y = 0xA4;
    }
    if (acc.z > 0xA4) {
        acc.z = 0xA4;
    }
    if (acc.x < -0xA4) {
        acc.x = -0xA4;
    }
    if (acc.y < -0xA4) {
        acc.y = -0xA4;
    }
    if (acc.z < -0xA4) {
        acc.z = -0xA4;
    }
    func_02068270(arg0 + 0xBC, &acc, arg0 + 0xBC);
    acc.x >>= 3;
    acc.y >>= 3;
    acc.z >>= 3;
    func_02068270(arg0 + 0xB0, &acc, arg0 + 0xB0);
}
