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
    Struct12 *entryC;
} ScaleList;

void func_0206823c(Struct12 *, Struct12 *, Struct12 *);
void func_02068270(Struct12 *, Struct12 *, Struct12 *);

void func_020bcdf0(ScaleList *list, s32 m) {
    Struct12 pos;
    Struct12 zero;
    Struct12 *pb;
    s32 i;
    s32 v;

    zero.f0 = 0;
    zero.f4 = 0;
    zero.f8 = 0;
    for (i = 0; i < list->count; i++) {
        if (list->flags[i] == 1) {
            continue;
        }
        func_0206823c(&list->entryA[i], &list->entryC[i], &pos);
        pos.f0 = (s32) (((s64) pos.f0 * m + 0x800) >> 12);
        pos.f4 = (s32) (((s64) pos.f4 * m + 0x800) >> 12);
        pos.f8 = (s32) (((s64) pos.f8 * m + 0x800) >> 12);
        func_02068270(&list->entryB[i], &pos, &list->entryB[i]);
        pb = &list->entryB[i];
        v = pb->f0;
        if (v <= 0) {
            v = -v;
        }
        if (v < 0x29) {
            pb->f0 = zero.f0;
        }
        v = pb->f4;
        if (v <= 0) {
            v = -v;
        }
        if (v < 0x29) {
            pb->f4 = zero.f4;
        }
        v = pb->f8;
        if (v <= 0) {
            v = -v;
        }
        if (v < 0x29) {
            pb->f8 = zero.f8;
        }
    }
}
