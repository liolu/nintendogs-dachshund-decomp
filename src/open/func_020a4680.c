#include "engine.h"
#include "m2c.h"
extern void *data_02159e70;
s32 func_01ffdb08(s16 a);

typedef struct {
    u8 pad[0xC4];
    s16 f[1];
} Ctx;

typedef struct {
    u8 pad[0x68];
    s16 f[1];
} At68;

s32 func_02024104(s32 a, s16 b);
void func_020daae8(s32 a, void *b);
void func_020da98c(s32 a, s32 b, void *c, void *d, s32 e);
#pragma opt_propagation off
#pragma schedule off
void func_020a4680(s32 arg0, s32 arg1) {
    s8 *p = (s8 *) data_02159e70;
    s8 *q = p + 0xC4;
    s32 r;

    r = func_02024104(func_01ffdb08((s16) M2C_FIELD(p, s32 *, 0x1DD4)),
                      *(s16 *) (q + arg1 * 2 + 0x68));
    func_020daae8(0, (void *) (arg0 + 0x16));
    func_020da98c(0, M2C_FIELD((s8 *) data_02159e70, s32 *, 0x232C), (void *) (arg0 + 0x16),
                  (void *) (arg0 + 1), r + 0x12);
}
#pragma schedule on
