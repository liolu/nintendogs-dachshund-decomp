#include "m2c.h"

typedef struct {
    s32 x;
    s32 y;
    s32 z;
} Vec;

typedef struct {
    Vec v0;
    Vec v1;
    Vec v2;
    s32 f24;
    s32 f28;
} Elem;

typedef struct {
    s32 count;
    u8 unk_04[0x1c];
    Elem elems[1];
} KeyframeList;

typedef struct {
    Vec v0;
    Vec v1;
    Vec v2;
    s32 f34;
} Out;

typedef struct {
    KeyframeList *list;
    s32 f4;
    s32 f8;
    s32 fC;
    Out out;
} Ctx;

extern s64 data_02124d28;
s32 func_02067ca0(s32, s32, s32, s32);
void func_020b7bc8(const void *, const void *, const void *, const void *, s32, Vec *);
s32 func_020b7e28(s32, s32, s32, s32, s32);
void func_02006a20(const Vec *, Vec *);

void func_020ba65c(Ctx *ctx) {
    Elem *elems;
    KeyframeList *list;
    Out *out;
    s32 idx;
    Elem *cur;
    Elem *next1;
    Elem *next2;
    Elem *prev;
    s32 sel;
    s32 t;
    s64 m;

    list = ctx->list;
    idx = ctx->f8;
    elems = list->elems;
    out = &ctx->out;

    if (idx >= list->count - 1) {
        idx = list->count - 2;
        sel = elems[idx].f28 - 1;
    } else {
        sel = ctx->f4;
    }
    cur = &elems[idx];
    next1 = &elems[idx + 1];
    t = func_02067ca0(sel, cur->f28, sizeof(Elem), idx + 1);

    if (idx == list->count - 2) {
        next2 = &elems[list->count - 1];
    } else {
        next2 = &elems[idx + 2];
    }
    if (idx == 0) {
        prev = &elems[0];
    } else {
        prev = &elems[idx - 1];
    }

    func_020b7bc8(prev, cur, next1, next2, t, &out->v0);
    func_020b7bc8(&prev->v1, &cur->v1, &next1->v1, &next2->v1, t, &out->v1);
    func_020b7bc8(&prev->v2, &cur->v2, &next1->v2, &next2->v2, t, &out->v2);

    m = (s64) out->v2.x * out->v2.x + (s64) out->v2.y * out->v2.y + (s64) out->v2.z * out->v2.z;
    if (m >= data_02124d28) {
        func_02006a20(&out->v2, &out->v2);
    }

    out->f34 = func_020b7e28(prev->f24, cur->f24, next1->f24, next2->f24, t);
}
