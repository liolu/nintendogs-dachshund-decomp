#include "m2c.h"

extern void func_020db0fc();
extern void func_020daae8();
extern void func_020eb9fc();

typedef struct {
    u16 unk0;
    u16 unk2;
    s32 unk4;
} GapEntry;

typedef struct {
    GapEntry entries[5];
} GapTable;

typedef struct {
    u16 unk0;
    u16 unk2;
} Pair;

typedef struct {
    u8 pad[0x28];
    Pair pairs[8];
} Work;

extern GapTable data_0213daac;

void func_0209cfb4(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2) {
    GapTable var_gap;
    s32 i;
    s32 idx;

    var_gap = data_0213daac;
    for (i = 0; i < 5; i++) {
        idx = var_gap.entries[i].unk4;
        ((Work *) arg0)->pairs[idx].unk0 = var_gap.entries[i].unk0;
        ((Work *) arg0)->pairs[idx].unk2 = var_gap.entries[i].unk2;
        func_020db0fc(0, arg1, arg2, ((Work *) arg0)->pairs[idx].unk0, 0);
        func_020daae8(0, ((Work *) arg0)->pairs[idx].unk0);
    }
    M2C_FIELD(arg0, s32 *, 4) = 1;
    M2C_FIELD(arg0, s32 *, 0xC) = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 1;
    func_020eb9fc(2, 2, 0);
    func_020eb9fc(2, 3, 0);
    func_020eb9fc(2, 5, 0);
    func_020eb9fc(2, 6, 0);
}
