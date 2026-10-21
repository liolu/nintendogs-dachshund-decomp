#include "m2c.h"
extern u8 data_0213942c[];
extern u8 data_02139044[];
extern u8 data_02139014[];
extern s32 *data_0214da84;
s32 func_02027884(void *arg0, void *arg1) {
    s16 x;
    u8 *p0;
    u8 *p1;
    u32 v;
    s32 k;
    u32 c;
    s32 n;
    u8 t;
    s32 temp;
    s32 count;
    s32 i;

    p0 = M2C_FIELD(arg0, u8 **, 0x9E8);
    p1 = M2C_FIELD(arg1, u8 **, 0x9E8);
    v = *(u32 *) (data_0213942c
                  + M2C_FIELD(p0, u16 *, 0) * 0x4C
                  + M2C_FIELD(p1, u16 *, 0) * 4);
    x = *(s16 *) ((u8 *) arg0 + M2C_FIELD(arg1, s8 *, 0x88) * 2 + 0x132);
    switch (v) {
        case 3:
            x = (s16) (x + 2000);
            break;
        case 2:
            x = (s16) (x + 1000);
            break;
        case 1:
            break;
        case 0:
            x = (s16) (x - 1000);
            break;
    }
    k = M2C_FIELD(arg0, s8 *, 0x8E);
    c = *(u32 *) (data_02139044 + k * 0x14 + M2C_FIELD(arg1, s8 *, 0x8E) * 4);
    switch (c) {
        case 0:
            x = (s16) (x - 1000);
            break;
        case 1:
            break;
        case 2:
            x = (s16) (x + 1000);
            break;
    }
    switch (M2C_FIELD(arg0, s8 *, 0x8B)) {
        case 1:
        case 3:
            x = (s16) (x + 1000);
            break;
        case 2:
            x = (s16) (x - 1000);
            break;
    }
    t = M2C_FIELD(p0, u8 *, 0x14);
    if (t != 0) {
        if (t == 2) {
            if (M2C_FIELD(p0, u8 *, 3) == M2C_FIELD(p1, u8 *, 3)) {
                x = (s16) (x + 1000);
            } else {
                x = (s16) (x - 1000);
            }
        }
    } else {
        if (M2C_FIELD(p0, u8 *, 3) == M2C_FIELD(p1, u8 *, 3)) {
            x = (s16) (x - 1000);
        } else {
            x = (s16) (x + 1000);
        }
    }
    n = k * 9;
    if (x <= 3500) {
        n += 6;
    } else if (x <= 7000) {
        n += 3;
    }
    temp = *data_0214da84 * 0x10DCD + 1;
    *data_0214da84 = temp;
    count = (s32) (u16) (((u32) (u16) temp * 100) >> 16);
    for (i = 0; i < 3; i++) {
        count -= data_02139014[n];
        if (count < 0) {
            return (s8) (2 - i);
        }
        n++;
    }
    return 1;
}
