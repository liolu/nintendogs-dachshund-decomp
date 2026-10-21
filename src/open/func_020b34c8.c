#include "m2c.h"

typedef struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} Struct12;

extern s32 data_0213ecbc;
extern s32 data_0213ecb8;
extern s32 data_0213ecb4;
s32 func_01ffdb08(s32);
void func_ov006_0216018c(void *);
void func_020b2a54(s32, s32 *);
void func_0206823c(void *, void *, void *);
void func_020c2c3c(void *, s32);
void func_01ff832c(s32, s32 *, s32 *, s32);
void *func_0200c488(s32, s32);

void func_020b34c8(s32 arg0, s32 arg1) {
    Struct12 a;
    Struct12 b;
    Struct12 c;
    s32 *dst;
    s32 idx;

    dst = (s32 *) arg0;
    idx = func_01ffdb08(arg1);
    if (idx != 0) {
        func_ov006_0216018c(&a);
        func_020b2a54(idx, (s32 *) &b);
        func_0206823c(&a, &b, &c);
        func_020c2c3c(&c, 0x1E000);
        func_01ff832c(0x800, (s32 *) &c, (s32 *) &b, (s32) (dst + 3));
    } else {
        *(Struct12 *) (dst + 3) = *(Struct12 *) ((u8 *) func_0200c488(0, 0) + 8);
    }
    *(Struct12 *) dst = *(Struct12 *) (dst + 3);
    dst[1] += data_0213ecbc;
    dst[2] += data_0213ecb8;
    dst[6] = 0;
    dst[7] = 0x1000;
    dst[8] = 0;
    dst[9] = data_0213ecb4;
}
