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
    s32 *arr3;
    Vec *arr4;
    u16 unk_14;
    s32 stride;
} Ctx;

void *func_020038a8(M2C_UNK, M2C_UNK);              /* extern */

void func_020bd108(Ctx *ctx, M2C_UNK heap, s32 count, s32 stride) {
    Vec *e1;
    Vec *e2;
    s32 i;

    ctx->arr1 = func_020038a8(heap, count * 12);
    ctx->arr4 = func_020038a8(heap, count * 12);
    ctx->arr2 = func_020038a8(heap, count * 12);
    ctx->arr3 = func_020038a8(heap, count * 4);
    ctx->count = count;
    for (i = 0; i < count; i++) {
        e1 = &ctx->arr1[i];
        e1->x = 0;
        e1->y = -i * stride;
        e1->z = 0;
        e2 = &ctx->arr2[i];
        e2->x = 0;
        e2->y = 0;
        e2->z = 0;
        ctx->arr3[i] = 0;
    }
    ctx->unk_14 = 0;
    ctx->stride = stride;
}
