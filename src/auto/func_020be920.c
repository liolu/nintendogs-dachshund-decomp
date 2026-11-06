/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020a36f8(void *, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s32, s32); /* extern */
s32 func_020b5024(M2C_UNK, M2C_UNK *);              /* extern */
M2C_UNK func_020b91bc(M2C_UNK, s32);                /* extern */
M2C_UNK func_020b9218(M2C_UNK, s32);                /* extern */
M2C_UNK func_020b93d4(M2C_UNK, s32);                /* extern */
M2C_UNK func_020b9408(M2C_UNK, s32);                /* extern */
M2C_UNK func_020bdfe0(void *);                      /* extern */
M2C_UNK func_020be204(void *, M2C_UNK, M2C_UNK *, M2C_UNK, s32, s32, s32); /* extern */
extern M2C_UNK data_02140b04;
extern M2C_UNK data_02140b10;
extern M2C_UNK data_02140b1c;
extern M2C_UNK data_02140b28;
extern M2C_UNK data_02140b58;
extern M2C_UNK data_02140b68;
extern M2C_UNK data_02140b78;
extern M2C_UNK data_02140b90;

void func_020be920(void *arg0) {
    s32 temp_r6;
    s32 temp_r6_2;
    s32 temp_r7;
    s32 temp_r8;
    s32 var_r5;
    void *temp_r4;
    void *var_r4;

    M2C_FIELD(arg0, s32 *, 4) = 0;
    M2C_FIELD(arg0, s32 *, 0) = 0;
    temp_r4                   = arg0 + 0x174;
    temp_r6                   = func_020b5024(0, &data_02140b58);
    temp_r8                   = func_020b5024(0, &data_02140b68);
    temp_r7                   = func_020b5024(0, &data_02140b78);
    temp_r6_2                 = func_020b5024(0, &data_02140b90);
    func_020b93d4(0, temp_r6);
    func_020b9408(0, temp_r8);
    func_020b9218(0, temp_r7);
    func_020b91bc(0, temp_r6_2);
    func_020a36f8(arg0 + 8, 0, 0x15, 4, 3, M2C_FIELD(arg0, s32 *, 0x174), 0, 0);
    func_020a36f8(arg0 + 0x30, 0, 0x15, 8, 3, M2C_FIELD(temp_r4, s32 *, 4), 0, 0);
    func_020a36f8(arg0 + 0x58, 0, 0x15, 0xC, 3, M2C_FIELD(temp_r4, s32 *, 8), 0, 0);
    func_020a36f8(arg0 + 0x80, 0, 0x1F, 0x10, 4, M2C_FIELD(temp_r4, s32 *, 0xC), 0, 0);
    func_020be204(arg0 + 0xA8, 0, &data_02140b10, 0, 0, -0x40, 8);
    func_020be204(arg0 + 0xC8, 0, &data_02140b1c, 1, 0, -0x40, 8);
    func_020be204(arg0 + 0xE8, 0, &data_02140b04, 2, 0, -0x40, 8);
    func_020be204(arg0 + 0x108, 0, &data_02140b28, 3, 0x80, 0, 8);
    var_r4 = arg0 + 0xA8;
    var_r5 = 0;
    do {
        func_020bdfe0(var_r4);
        var_r5 += 1;
        var_r4 += 0x20;
    } while (var_r5 < 4);
}
