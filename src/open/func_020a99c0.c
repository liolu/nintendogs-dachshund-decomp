#include "m2c.h"

typedef struct {
    s32 f0;
    s32 f1;
    s32 f2;
} M2C_S12;

extern u8 data_0215a064[];
extern u8 data_02150e58[];
s32 func_0206823c(s32 arg0, M2C_S12 *arg1, M2C_S12 *arg2);
void func_02006a20(M2C_S12 *arg0, M2C_S12 *arg1, s32 arg2);

#include "m2c.h"

typedef struct {
    s32 x;
    s32 y;
    s32 z;
} VecFx32;

void func_020a99c0(s32 arg0, s32 arg1, M2C_S12 *arg2, s32 *arg3, M2C_S12 *arg4) {
    M2C_S12 local;
    s32 temp_a;
    s32 temp_b;
    s32 temp_c;

    local = *(M2C_S12 *) (M2C_FIELD(M2C_FIELD(data_0215a064, u8 **, 0), u8 **, 0x1C) + 0x30);
    func_0206823c(arg1, &local, arg4);
    arg4->f1 = 0;
    func_02006a20(arg4, arg4, 0);
    arg3[0] = 0;
    arg3[1] = 0x1000;
    arg3[2] = 0;
    temp_c = M2C_FIELD(data_02150e58, s32 *, 0x64);
    temp_b = M2C_FIELD(data_02150e58, s32 *, 0x58);
    temp_a = M2C_FIELD(data_02150e58, s32 *, 0x4C);
    arg2->f0 = temp_a;
    arg2->f1 = temp_b;
    arg2->f2 = temp_c;
    arg2->f0 = -arg2->f0;
    arg2->f1 = -arg2->f1;
    arg2->f2 = -arg2->f2;
}
