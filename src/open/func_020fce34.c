#include "m2c.h"

typedef struct {
    M2C_UNK unk_00;
    M2C_UNK unk_04;
    M2C_UNK unk_08;
    M2C_UNK unk_0C;
    M2C_UNK unk_10;
    M2C_UNK unk_14;
} UnkStruct_020fce34;

M2C_UNK func_020aff08(void *, s32, M2C_UNK, M2C_UNK, s32, M2C_UNK *, M2C_UNK *, s32, M2C_UNK *, M2C_UNK *); /* extern */
s32 func_020b1d6c(u16, s32);                        /* extern */
M2C_UNK func_020b26f0(void *, s32, s32, s32, s32, s32, s32); /* extern */
void func_020b23f4(void *arg0, M2C_UNK (*arg1)(void *), void *arg2);
void func_020b2360(void *arg0, M2C_UNK arg1);
void func_020b2274(void *arg0);
void func_020b27dc(void *);
void func_020fcff4(void *);
void func_020fcf84(void *);
extern M2C_UNK func_020fd140;
extern M2C_UNK func_020fd14c;
extern M2C_UNK func_020fd160;
extern M2C_UNK func_020fd1c4;
extern UnkStruct_020fce34 data_02149dd4;
void func_020fce34(void *arg0) {
    UnkStruct_020fce34 local;

    switch (M2C_FIELD(arg0, s16 *, 0x90)) {
    case 2:
        func_020b27dc(arg0);
        break;
    case 3:
        func_020b26f0(arg0, 0x50, 0x50, 0x70, 0x1EC, 0x800, 4);
        func_020aff08(arg0, M2C_FIELD(arg0, s32 *, 0xF8), 0, 0,
                      func_020b1d6c(M2C_FIELD(arg0, u16 *, 0xA0), M2C_FIELD(arg0, s32 *, 0xF8)),
                      &func_020fd1c4, &func_020fd160, 0, &func_020fd14c, &func_020fd140);
        break;
    case 1:
        func_020fcff4(arg0);
        break;
    case 4:
        local = data_02149dd4;
        func_020b23f4(arg0, (M2C_UNK (*)(void *)) func_020fcf84, &local);
        break;
    case 5:
        func_020b2360(arg0, 0x1000);
        break;
    case 8:
        func_020b2274(arg0);
        break;
    case 0:
    case 6:
    case 7:
    default:
        break;
    }
}
