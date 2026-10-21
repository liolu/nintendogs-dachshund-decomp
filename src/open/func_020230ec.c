#include "m2c.h"
extern M2C_UNK data_02138ed4;
extern u8 data_02134fa8[];
void func_020230ec(void *arg0) {
    s16 i;
    M2C_UNK entry;
    u16 id;
    u16 count;
    M2C_UNK item;
    u8 *row;
    u8 v;
    s32 cat;

    for (i = 0; i < 0x14; i = (s16) (i + 1)) {
        if ((i < 0) || (i >= 0x14)) {
            entry = 0;
        } else {
            entry = M2C_FIELD(arg0, s32 *, 0x9E8) + 0x90 + (i * 0x3C);
        }
        if (entry == 0) {
            cat = 0;
        } else {
            id = M2C_FIELD(entry, u16 *, 0);
            if (id == 0) {
                cat = 0;
            } else {
                count = M2C_FIELD(entry, u16 *, 2);
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
        if (cat == 1) {
            if (func_020956d0(M2C_FIELD(arg0, s8 *, 0x88), i) != 0) {
                func_0202405c(arg0, entry);
            }
        }
    }
    M2C_FIELD(arg0, s16 *, 0xF6) = (s16) func_0202333c(arg0);
    func_02023e90(arg0);
}
