/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020d5bb4(void *, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s32, s32); /* extern */
s32 func_020e7ec4(M2C_UNK, M2C_UNK *);              /* extern */
M2C_UNK func_020ec0d8(M2C_UNK, s32);                /* extern */
M2C_UNK func_020ec134(M2C_UNK, s32);                /* extern */
M2C_UNK func_020ec2f4(M2C_UNK, s32);                /* extern */
M2C_UNK func_020ec328(M2C_UNK, s32);                /* extern */
M2C_UNK func_020f0f3c(void *);                      /* extern */
M2C_UNK func_020f1160(void *, M2C_UNK, M2C_UNK *, M2C_UNK, s32, s32, s32); /* extern */
extern M2C_UNK data_02146e34;
extern M2C_UNK data_02146e40;
extern M2C_UNK data_02146e4c;
extern M2C_UNK data_02146e58;
extern M2C_UNK data_02146e88;
extern M2C_UNK data_02146e98;
extern M2C_UNK data_02146ea8;
extern M2C_UNK data_02146ec0;

void func_020f1880(void *arg0) {
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
    temp_r6                   = func_020e7ec4(0, &data_02146e88);
    temp_r8                   = func_020e7ec4(0, &data_02146e98);
    temp_r7                   = func_020e7ec4(0, &data_02146ea8);
    temp_r6_2                 = func_020e7ec4(0, &data_02146ec0);
    func_020ec2f4(0, temp_r6);
    func_020ec328(0, temp_r8);
    func_020ec134(0, temp_r7);
    func_020ec0d8(0, temp_r6_2);
    func_020d5bb4(arg0 + 8, 0, 0x15, 4, 3, M2C_FIELD(arg0, s32 *, 0x174), 0, 0);
    func_020d5bb4(arg0 + 0x30, 0, 0x15, 8, 3, M2C_FIELD(temp_r4, s32 *, 4), 0, 0);
    func_020d5bb4(arg0 + 0x58, 0, 0x15, 0xC, 3, M2C_FIELD(temp_r4, s32 *, 8), 0, 0);
    func_020d5bb4(arg0 + 0x80, 0, 0x1F, 0x10, 4, M2C_FIELD(temp_r4, s32 *, 0xC), 0, 0);
    func_020f1160(arg0 + 0xA8, 0, &data_02146e40, 0, 0, -0x40, 8);
    func_020f1160(arg0 + 0xC8, 0, &data_02146e4c, 1, 0, -0x40, 8);
    func_020f1160(arg0 + 0xE8, 0, &data_02146e34, 2, 0, -0x40, 8);
    func_020f1160(arg0 + 0x108, 0, &data_02146e58, 3, 0x80, 0, 8);
    var_r4 = arg0 + 0xA8;
    var_r5 = 0;
    do {
        func_020f0f3c(var_r4);
        var_r5 += 1;
        var_r4 += 0x20;
    } while (var_r5 < 4);
}
