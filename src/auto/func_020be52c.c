/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020a36f8(void *, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s32, s32); /* extern */
M2C_UNK func_020a3d7c(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
s32 func_020a8a64(M2C_UNK, s32, s32, M2C_UNK, s32); /* extern */
M2C_UNK func_020a8db4(s32, M2C_UNK);                /* extern */
s32 func_020b5024(M2C_UNK, M2C_UNK *);              /* extern */
M2C_UNK func_020b91bc(M2C_UNK, s32);                /* extern */
M2C_UNK func_020b9218(M2C_UNK, s32);                /* extern */
M2C_UNK func_020b93a0(M2C_UNK, s32);                /* extern */
M2C_UNK func_020b93d4(M2C_UNK, s32);                /* extern */
M2C_UNK func_020b9408(M2C_UNK, s32);                /* extern */
M2C_UNK func_020bdfe0(void *);                      /* extern */
M2C_UNK func_020be204(void *, M2C_UNK, M2C_UNK *, M2C_UNK, s32, s32, s32); /* extern */
extern M2C_UNK data_02140970;
extern M2C_UNK data_02140978;
extern M2C_UNK data_021409a0;
extern M2C_UNK data_021409b0;
extern M2C_UNK data_021409c0;
extern M2C_UNK data_021409d0;
extern M2C_UNK data_021409e8;
extern void *data_02153740;

void func_020be52c(void *arg0) {
    s32 temp_r4;
    s32 temp_r6;
    s32 temp_r6_2;
    s32 temp_r7;
    s32 temp_r8;

    M2C_FIELD(arg0, s32 *, 4)     = 0;
    M2C_FIELD(arg0, s32 *, 0)     = 0;
    M2C_FIELD(arg0, s32 *, 0x30)  = 0x63;
    M2C_FIELD(arg0, s32 *, 0x38)  = 0;
    M2C_FIELD(arg0, s32 *, 0x3C)  = 0;
    M2C_FIELD(arg0, s32 *, 0x150) = 0;
    temp_r6                       = func_020b5024(0, &data_021409a0);
    temp_r4                       = func_020b5024(0, &data_021409b0);
    temp_r8                       = func_020b5024(0, &data_021409c0);
    temp_r7                       = func_020b5024(0, &data_021409d0);
    temp_r6_2                     = func_020b5024(0, &data_021409e8);
    func_020b93d4(0, temp_r6);
    func_020b9408(0, temp_r4);
    func_020b93a0(0, temp_r8);
    func_020b9218(0, temp_r7);
    func_020b91bc(0, temp_r6_2);
    func_020a3d7c(0, 0, 5);
    func_020a36f8(arg0 + 8, 0, 5, 0, 2, M2C_FIELD(arg0, s32 *, 0x30), 0, 0xC);
    M2C_FIELD(arg0, s32 *, 0x34) = func_020a8a64(1, temp_r7, temp_r4, 4, M2C_FIELD(data_02153740, s32 *, 0x34AC));
    func_020a8db4(M2C_FIELD(arg0, s32 *, 0x34), 0);
    func_020be204(arg0 + 0x40, 0, &data_02140978, 0, -0x40, 0, 0x10);
    func_020be204(arg0 + 0x60, 0, &data_02140970, 4, 0, -0x40, 0x10);
    func_020bdfe0(arg0 + 0x40);
    func_020bdfe0(arg0 + 0x60);
}
