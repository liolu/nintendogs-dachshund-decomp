#include "m2c.h"

typedef struct {
    s32 f0;
    s32 f4;
    s32 f8;
} Struct12;

typedef struct {
    s32 count;
    Struct12 *entryA;
    Struct12 *entryB;
    s32 *flags;
} ScaleList;

s32 func_020b1db4(void *, s32, void *);
void func_02068270(Struct12 *, Struct12 *, Struct12 *);

s32 func_020bcbb4(ScaleList *arg0, s32 arg1, s32 arg2) {
    s32 result = 0;
    s32 i;
    Struct12 local;

    for (i = 0; i < arg0->count; i++) {
        if (arg0->flags[i] == 1) {
            continue;
        }
        local.f0 = 0;
        local.f4 = 0;
        local.f8 = 0;
        if (func_020b1db4(&arg0->entryA[i], arg1, &local)) {
            func_02068270(&arg0->entryA[i], &local, &arg0->entryA[i]);
            if (arg0->entryB[i].f4 < 0) {
                arg0->entryB[i].f4 = 0;
            }
            result = 1;
            arg0->entryB[i].f0 = (s32) (((s64) arg0->entryB[i].f0 * arg2 + 0x800) >> 12);
            arg0->entryB[i].f8 = (s32) (((s64) arg0->entryB[i].f8 * arg2 + 0x800) >> 12);
        }
    }
    return result;
}
