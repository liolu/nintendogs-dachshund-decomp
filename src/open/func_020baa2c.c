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
s32 func_0205df50(s32, s32);
void func_02006a20(const Vec *, Vec *);

void func_020baa2c(Ctx *ctx) {
    s32 idx;
    KeyframeList *list;
    Elem *elems;
    Elem *cur;
    Elem *next;
    long t;
    s64 m;
    s64 d;

    list = ctx->list;
    idx = ctx->f8;
    elems = list->elems;

    t = func_0205df50(ctx->f4 << 12, elems[idx].f28);

    if (idx >= list->count - 1) {
        ctx->out = *(Out *) &elems[idx];
        return;
    }

    cur = &elems[idx];
    next = &elems[idx + 1];

    ctx->out.v0.x = cur->v0.x + (s32) (((s64) (next->v0.x - cur->v0.x) * t + 0x800) >> 12);
    ctx->out.v0.y = cur->v0.y + (s32) (((s64) (next->v0.y - cur->v0.y) * t + 0x800) >> 12);
    ctx->out.v0.z = cur->v0.z + (s32) (((s64) (next->v0.z - cur->v0.z) * t + 0x800) >> 12);
    ctx->out.v1.x = cur->v1.x + (s32) (((s64) (next->v1.x - cur->v1.x) * t + 0x800) >> 12);
    ctx->out.v1.y = cur->v1.y + (s32) (((s64) (next->v1.y - cur->v1.y) * t + 0x800) >> 12);
    ctx->out.v1.z = cur->v1.z + (s32) (((s64) (next->v1.z - cur->v1.z) * t + 0x800) >> 12);
    ctx->out.v2.x = cur->v2.x + (s32) (((s64) (next->v2.x - cur->v2.x) * t + 0x800) >> 12);
    ctx->out.v2.y = cur->v2.y + (s32) (((s64) (next->v2.y - cur->v2.y) * t + 0x800) >> 12);
    ctx->out.v2.z = cur->v2.z + (s32) (((s64) (next->v2.z - cur->v2.z) * t + 0x800) >> 12);

    m = (s64) ctx->out.v2.x * ctx->out.v2.x + (s64) ctx->out.v2.y * ctx->out.v2.y + (s64) ctx->out.v2.z * ctx->out.v2.z;
    if (m >= data_02124d28) {
        func_02006a20(&ctx->out.v2, &ctx->out.v2);
    }

    d = next->f24 - cur->f24;
    ctx->out.f34 = cur->f24 + (s32) ((t * d + 0x800) >> 12);
}
