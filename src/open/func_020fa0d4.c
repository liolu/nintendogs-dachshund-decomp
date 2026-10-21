#include "m2c.h"

typedef struct {
    M2C_UNK unk_00;
    M2C_UNK unk_04;
    M2C_UNK unk_08;
    M2C_UNK unk_0C;
    M2C_UNK unk_10;
    M2C_UNK unk_14;
} UnkStruct_020fa0d4;

void func_020fa424(void *arg0);
void func_020fa378(void *arg0);
void func_020fa21c(void *arg0);
void func_020fa1a8(void *arg0);
void func_020b23f4(void *arg0, M2C_UNK (*arg1)(void *), void *arg2);
void func_020b2360(void *arg0, M2C_UNK arg1);
void func_020b2274(void *arg0);
extern UnkStruct_020fa0d4 data_02149c24;
void func_020fa0d4(void *arg0) {
    UnkStruct_020fa0d4 local;

    switch (M2C_FIELD(arg0, s16 *, 0x90)) {
    case 2:
        func_020fa424(arg0);
        break;
    case 3:
        func_020fa378(arg0);
        break;
    case 1:
        func_020fa21c(arg0);
        break;
    case 4:
        local = data_02149c24;
        func_020b23f4(arg0, (M2C_UNK (*)(void *)) func_020fa1a8, &local);
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
