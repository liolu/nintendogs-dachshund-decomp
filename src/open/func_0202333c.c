#include "m2c.h"
extern M2C_UNK data_02138ed4;
extern u8 data_02134fa8[];

typedef struct {
    s32 unk0;
    s32 unk4;
} Key;

s32 func_0202333c(void *arg0) {
    M2C_UNK entry;
    M2C_UNK elem;
    u16 id;
    u16 count;
    M2C_UNK item;
    u8 *row;
    u8 v;
    s32 cat;
    s32 best;
    s16 j;
    s16 i;
    Key key;

    for (i = 0; i < 0x14; i = (s16) (i + 1)) {
        if ((i < 0) || (i >= 0x14)) {
            entry = 0;
        } else {
            entry = M2C_FIELD(arg0, s32 *, 0x9E8) + 0x90 + (i * 0x3C);
        }
        if (entry == 0) {
            continue;
        }
        if (M2C_FIELD(entry, u16 *, 2) == 0 && M2C_FIELD(entry, u16 *, 0) == 0) {
            return i;
        }
    }
    best = -1;
    func_020d0668(&key);
    for (j = 0; j < 0x14; j = (s16) (j + 1)) {
        if ((j < 0) || (j >= 0x14)) {
            elem = 0;
        } else {
            elem = M2C_FIELD(arg0, s32 *, 0x9E8) + 0x90 + (j * 0x3C);
        }
        if (elem == 0) {
            cat = 0;
        } else {
            id = M2C_FIELD(elem, u16 *, 0);
            if (id == 0) {
                cat = 0;
            } else {
                count = M2C_FIELD(elem, u16 *, 2);
                if (count == 0) {
                    cat = 0;
                } else {
                    if ((id >= 0x4F) && (id < 0x63)) {
                        item = M2C_FIELD(&data_02138ed4, s32 *, 0x13C);
                    } else {
                        item = *((M2C_UNK *) ((s8 *) &data_02138ed4 + (id * 4)));
                    }
                    row = data_02134fa8 + ((M2C_FIELD(item, u8 *, 2) - 1) * 5);
                    v = row[M2C_FIELD(M2C_FIELD(arg0, s32 *, 0x9E8), u8 *, 0x13) - 1];
                    if (count < v) {
                        cat = 1;
                    } else {
                        cat = 2;
                    }
                }
            }
        }
        if (cat == 2) {
            continue;
        }
        if ((key.unk0 != 0 || key.unk4 != 0)
            && func_020d058c((u8 *) elem + 8, (u8 *) &key) == 0) {
            continue;
        }
        best = j;
        key = *(Key *) ((u8 *) elem + 8);
    }
    return best;
}
