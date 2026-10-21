#include "m2c.h"

extern void *data_0215a064;

M2C_UNK func_02003a00(void);
void func_020cf19c(M2C_UNK, M2C_UNK);

typedef struct {
    u16 x;
    u16 y;
} Pair;

typedef struct {
    u8 pad[0x100];
    s16 unk100;
    u16 unk102;
    u16 unk104;
    u16 unk106;
} Ctx;

void func_02120710(s32 arg0) {
    u16 state;
    void *p;

    state = M2C_FIELD(arg0, u16 *, 4);
    switch (state) {
    case 0:
        if (func_02003a00() != 0) {
            M2C_FIELD(arg0, u16 *, 4) = 0xA00;
            M2C_FIELD(arg0, s16 *, 6) = 0;
        }
        return;
    case 0xA00: {
        Pair *q;

        if (M2C_FIELD(data_0215a064, s16 *, 0x100) != 2) {
            return;
        }
        M2C_FIELD(arg0, u16 *, 4) = 1;
        M2C_FIELD(arg0, s32 *, 0xC) = 1;
        p = M2C_FIELD(arg0, void **, 0x1C);
        if (p == 0) {
            return;
        }
        q = (Pair *) ((u8 *) data_0215a064 + 0x104);
        *(Pair *) ((u8 *) p + 8) = *q;
        if ((s16) q->x != -1) {
            func_020cf19c((M2C_UNK) q, -1);
        }
        return;
    }
    }
}
