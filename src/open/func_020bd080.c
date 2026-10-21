#include "m2c.h"

typedef struct {
    s32 x;
    s32 y;
    s32 z;
} Vec;

typedef struct {
    s32 count;
    Vec *arr1;
    Vec *arr2;
    s32 unk[3];
    s32 stride;
} Ctx;

void func_020bd080(Ctx *c, Vec *in) {
    s32 i;
    Vec *a;
    Vec *b;
    s32 y;
    s32 x;
    s32 z;

    for (i = 0; i < c->count; i++) {
        a = c->arr1;
        z = in->z;
        x = in->x;
        y = in->y - i * c->stride;
        a[i].x = x;
        a[i].y = y;
        a[i].z = z;
        b = c->arr2;
        b[i].x = 0;
        b[i].y = 0;
        b[i].z = 0;
    }
}
