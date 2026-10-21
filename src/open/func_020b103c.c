#include "m2c.h"
typedef struct {
    s32 x;
    s32 y;
    s32 z;
} Vec;

extern s64 data_02124d28;
void func_0208b948(s32, s32, s32);
void func_02068270(s32, s32, s32);
void func_02006a20(Vec *, Vec *);
void func_020a9624(Vec *, Vec *, s32, Vec *);
void func_01ff832c(s32, Vec *, Vec *, Vec *);
void func_020b103c(void *arg0, void *arg1, s32 arg2, s32 arg3) {
    Vec ref;
    Vec neg;
    s64 mag;
    s32 scale;
    s32 b0;
    s32 b8;
    s32 sum;

    ref = *(Vec *) ((u8 *) arg0 + 0xB0);
    b8 = M2C_FIELD(arg0, s32 *, 0xB8);
    b0 = M2C_FIELD(arg0, s32 *, 0xB0);
    if (b8 <= 0) {
        b8 = -b8;
    }
    if (b0 <= 0) {
        b0 = -b0;
    }
    sum = b0 + b8;
    if (arg3 >= 0) {
        func_0208b948((s32) ((u8 *) arg0 + 0x190), 1, sum);
    }
    scale = arg2 - 0x400;
    if (scale < 0) {
        scale = 0;
    }
    func_02068270((s32) ((u8 *) arg0 + 0xBC), (s32) arg1, (s32) ((u8 *) arg0 + 0xBC));
    neg.x = -M2C_FIELD(arg0, s32 *, 0xBC);
    neg.y = -M2C_FIELD(arg0, s32 *, 0xC0);
    neg.z = -M2C_FIELD(arg0, s32 *, 0xC4);
    mag = (s64) neg.x * neg.x + (s64) neg.y * neg.y + (s64) neg.z * neg.z;
    if (mag >= data_02124d28) {
        func_02006a20(&neg, &neg);
    }
    neg.y = 0;
    func_020a9624(&ref, &neg, scale, (Vec *) ((u8 *) arg0 + 0xB0));
    func_01ff832c(0xA4, &neg, (Vec *) ((u8 *) arg0 + 0xB0), (Vec *) ((u8 *) arg0 + 0xB0));
    if (M2C_FIELD(arg0, u16 *, 0xA0) == 0x3C) {
        M2C_FIELD(arg0, u16 *, 0xA0) = 0;
    }
}
