#include "m2c.h"

typedef struct {
    u8 pad[0x5C];
    u32 arr[16];
} UnkData;

extern UnkData data_02154350;
extern void func_02070ddc(void **, s32, s32);

void func_0208c2e4(s32 x) {
    UnkData *p;
    UnkData *q;
    s32 a;
    s32 b;
    s16 i;
    s16 j;

    p = &data_02154350;
    a = (0x2328 - x) >> 5;
    b = (x - 0x1388) >> 5;
    if (a > 0x7f) {
        a = 0x7f;
    } else if (a < 0) {
        a = 0;
    }
    if (b > 0x7f) {
        b = 0x7f;
    } else if (b < 0) {
        b = 0;
    }
    q = &data_02154350;
    func_02070ddc((void **) p, 0x3ec, a);
    for (i = 0; i < 16; i++) {
        if ((u16) (1 << i) & 0x3ec) {
            q->arr[i] = a << 12;
        }
    }
    q = &data_02154350;
    func_02070ddc((void **) p, 0x400, b);
    for (j = 0; j < 16; j++) {
        if ((u16) (1 << j) & 0x400) {
            q->arr[j] = b << 12;
        }
    }
}
