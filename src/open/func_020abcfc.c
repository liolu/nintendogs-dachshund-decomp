#include "m2c.h"

typedef struct {
    u32 unk_00;
    u32 unk_04;
    u32 unk_08;
    u32 unk_0C;
    u32 unk_10;
    u32 unk_14;
} UnkStruct_020abcfc;

void func_020ac014(void *);
void func_020ac97c(void *);
void func_020acc6c(void *);
void func_020acf4c(void *);
M2C_UNK func_020afc84(void *, s32, void *, void *, s32, M2C_UNK *, s32, M2C_UNK *, M2C_UNK *, M2C_UNK *);
M2C_UNK func_020aff08(void *, s32, void *, void *, s32, M2C_UNK *, s32, M2C_UNK *, M2C_UNK *, M2C_UNK *);
s32 func_020b1d6c(u16, s32);
void func_020b2274(void *);
void func_020b2360(void *arg0, M2C_UNK arg1);
void func_020b23f4(void *arg0, M2C_UNK (*arg1)(void *), void *arg2);
void func_020b2748(void *, s32);
M2C_UNK func_020c2b8c(M2C_UNK);
s32 func_01ffdb08();
s32 func_02033ee8();
extern M2C_UNK func_020ac754;
extern M2C_UNK func_020ac82c;
extern M2C_UNK func_020ac8bc;
extern M2C_UNK func_020ac96c;
extern u16 *data_0215a04c;
extern s32 data_0213ea2c;
extern UnkStruct_020abcfc data_0213eaa8;
void func_020abf28(void *);

void func_020abcfc(void *arg0) {
    UnkStruct_020abcfc local;

    switch (M2C_FIELD(arg0, s16 *, 0x90)) {
    case 1:
        if (M2C_FIELD(arg0, s32 *, 0xB4) > 0x1000) {
            M2C_FIELD(arg0, s32 *, 0xB4) = 0x1000;
        }
        switch (M2C_FIELD(M2C_FIELD(arg0, void **, 0x214), s16 *, 8)) {
        case 0:
            func_020acf4c(arg0);
            break;
        case 1:
            func_020ac97c(arg0);
            break;
        case 2:
            func_020acc6c(arg0);
            break;
        }
        func_020c2b8c(-1);
        if ((func_01ffdb08() != 0) && (func_02033ee8() != 0)) {
            func_020afc84(arg0, M2C_FIELD(arg0, s32 *, 0xF8), arg0 + 0xFC, arg0 + 0x108,
                          func_020b1d6c(M2C_FIELD(arg0, u16 *, 0xA0), M2C_FIELD(arg0, s32 *, 0xF8)),
                          &func_020ac96c, 0, &func_020ac8bc, &func_020ac82c, &func_020ac754);
        } else {
            func_020aff08(arg0, M2C_FIELD(arg0, s32 *, 0xF8), arg0 + 0xFC, arg0 + 0x108,
                          func_020b1d6c(M2C_FIELD(arg0, u16 *, 0xA0), M2C_FIELD(arg0, s32 *, 0xF8)),
                          &func_020ac96c, 0, &func_020ac8bc, &func_020ac82c, &func_020ac754);
        }
        if (*data_0215a04c == 1) {
            M2C_FIELD(arg0, s32 *, 0xA8) += data_0213ea2c;
        }
        break;
    case 2:
        func_020b2748(arg0, 0x7000);
        break;
    case 3:
        func_020ac014(arg0);
        break;
    case 4:
        local = data_0213eaa8;
        func_020b23f4(arg0, (M2C_UNK (*)(void *)) func_020abf28, &local);
        break;
    case 5:
        func_020b2360(arg0, 0x1000);
        break;
    case 8:
        func_020b2274(arg0);
        break;
    default:
        break;
    }
}
