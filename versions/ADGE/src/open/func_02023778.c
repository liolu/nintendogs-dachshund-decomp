#include "m2c.h"
extern M2C_UNK data_02138ed4;
extern u8 data_02134fa8[];
extern s8 data_0213aa2d[];
s64 func_02080d64();
void func_02080df4();
s32 func_020ce5fc();
void func_020ce618();
void func_020ce1a0();
M2C_UNK func_0202405c(M2C_UNK arg0, M2C_UNK arg1);
extern void *data_0215a04c;
extern u8 *data_0214da84;
extern void *data_0215a034;
s32 func_01ffdb08(s32);
void *func_020038a8(s32 arg0, s32 arg1);
void func_020fdc5c(s32 arg0);
void func_020fd470(void *arg0);
void func_020fdb30(void);
void func_020fe4cc(void);
s32 func_02023778(void *arg0, s16 arg1) {
    M2C_UNK entry;
    u16 id;
    u16 count;
    u8 *row;

    if ((arg1 < 0) || (arg1 >= 0x14)) {
        entry = 0;
    } else {
        entry = M2C_FIELD(arg0, s32 *, 0x9E8) + 0x90 + (arg1 * 0x3C);
    }
    if (entry == 0) {
        return 0;
    }
    id = M2C_FIELD(entry, u16 *, 0);
    if (id == 0) {
        return 0;
    }
    count = M2C_FIELD(entry, u16 *, 2);
    if (count == 0) {
        return 0;
    }
    if ((id >= 0x4F) && (id < 0x63)) {
        entry = M2C_FIELD(&data_02138ed4, s32 *, 0x13C);
    } else {
        entry = *((M2C_UNK *) ((s8 *) &data_02138ed4 + (id * 4)));
    }
    row = data_02134fa8 + ((M2C_FIELD(entry, u8 *, 2) - 1) * 5);
    return (count < row[M2C_FIELD(M2C_FIELD(arg0, s32 *, 0x9E8), u8 *, 0x13) - 1]) ? 1 : 2;
}
