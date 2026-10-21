#include "m2c.h"

typedef struct {
    s32 x;
    s32 y;
    s32 z;
} Vec;

extern void *func_01ffdb08(s32 arg0);
extern s32 func_02033edc(void);
extern void func_02027658(void *arg0, void *arg1);
extern void func_02068270(void *arg0, Vec *arg1, Vec *arg2);
extern s32 func_02067c84(s32 arg0);

s32 func_020b2c40(Vec *v) {
    u8 buf[0x10];
    s16 i;
    s32 count;
    void *p;
    s32 r;

    count = 0;
    v->x = 0;
    v->y = 0;
    v->z = 0;
    for (i = 0; i < 3; i++) {
        p = func_01ffdb08(i);
        if (p != 0 && func_02033edc() == 0) {
            func_02027658(p, buf);
            func_02068270(buf, v, v);
            count++;
        }
    }
    if (count > 0) {
        r = func_02067c84(count << 12);
        v->x = ((s64) v->x * r + 0x800) >> 12;
        v->y = ((s64) v->y * r + 0x800) >> 12;
        v->z = ((s64) v->z * r + 0x800) >> 12;
    }
    return count;
}
