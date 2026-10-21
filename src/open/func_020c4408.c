#include "m2c.h"
typedef struct {
    M2C_UNK unk_00;
    M2C_UNK unk_04;
    M2C_UNK unk_08;
    M2C_UNK unk_0C;
    M2C_UNK unk_10;
    M2C_UNK unk_14;
} UnkStruct_020fa0d4;

void func_020b27dc(void *arg0);
void func_020c471c(void *arg0);
void func_020c45c0(void *arg0);
void func_01ff832c(M2C_UNK arg0, void *arg1, void *arg2, void *arg3);
void func_020b23f4(void *arg0, M2C_UNK (*arg1)(void *), void *arg2);
void func_020b2360(void *arg0, M2C_UNK arg1);
void func_020b2274(void *arg0);
void func_020c454c(void *arg0);
extern s32 data_02140c14;
extern s32 data_02140c18;
extern UnkStruct_020fa0d4 data_02140c1c;
void func_020c4408(void *arg0) {
    UnkStruct_020fa0d4 local;
    M2C_UNK vec[6];
    M2C_UNK val;
    M2C_UNK a0;
    M2C_UNK a1;
    M2C_UNK a2;

    switch (M2C_FIELD(arg0, s16 *, 0x90)) {
    case 2:
        func_020b27dc(arg0);
        val = data_02140c18;
        a2 = M2C_FIELD(arg0, s32 *, 0xDC);
        a1 = M2C_FIELD(arg0, s32 *, 0xD8);
        a0 = M2C_FIELD(arg0, s32 *, 0xD4);
        vec[0] = a0;
        vec[1] = a1;
        vec[2] = a2;
        a2 = M2C_FIELD(arg0, s32 *, 0xE8);
        a1 = M2C_FIELD(arg0, s32 *, 0xE4);
        a0 = M2C_FIELD(arg0, s32 *, 0xE0);
        vec[3] = a0;
        vec[4] = a1;
        vec[5] = a2;
        func_01ff832c(-val, vec, (void *) ((u8 *) arg0 + 0xBC), (void *) ((u8 *) arg0 + 0xBC));
        func_01ff832c(-data_02140c14, &vec[3], (void *) ((u8 *) arg0 + 0xBC), (void *) ((u8 *) arg0 + 0xBC));
        break;
    case 3:
        func_020c471c(arg0);
        break;
    case 1:
        func_020c45c0(arg0);
        break;
    case 4:
        local = data_02140c1c;
        func_020b23f4(arg0, (M2C_UNK (*)(void *)) func_020c454c, &local);
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
