#include "m2c.h"

typedef struct {
    s32 w0;
    s32 w1;
} Pair;

typedef struct {
    u8 pad[0x178];
    s32 arr1[3];
    Pair arr2[1];
} Ctx;

extern Ctx *data_0215a030;

s32 func_020fd5a4(u32 *arg0) {
    Ctx *ctx;
    u8 idx;

    if (data_0215a030->arr1[((u8 *) arg0)[2]] != 0) {
        return 0;
    }
    data_0215a030->arr1[((u8 *) arg0)[2]] = 1;
    ctx = *(Ctx * volatile *) &data_0215a030;
    idx = *(volatile u8 *) ((u8 *) arg0 + 2);
    *(Pair *) ((u8 *) ctx + 0x184 + idx * 8) = *(Pair *) arg0;
    return 1;
}
