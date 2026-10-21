#include "m2c.h"
M2C_UNK func_020b29bc(M2C_UNK);
void func_020a7d20(M2C_UNK, M2C_UNK, M2C_UNK);
void func_020a7de0(s32);
void func_020b95c4(M2C_UNK);
void func_020b95d0(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
extern void *data_02156ec0;
extern s32 data_02156ecc[];
void func_0206f6c4(void);
void func_020bed10(s32);
void func_020bed24(s32);
void func_020becfc(s32);
s32 func_020bf090(void);
void func_020c1388(M2C_UNK);
void func_020c16b0(M2C_UNK, M2C_UNK, M2C_UNK);
void func_020c136c(void);
s32 func_020b29bc(s32);
s32 func_01ffdb08(s16);
void func_020b31c4(void *, s32);
void func_020ba16c(s32, s32, void *, s32, s32, s32);
s32 func_020a7e48(void);
s8 *func_020a5fcc(void);
void func_020b43d0(void *, s32 *, s32, s32);
void func_020ba364(s32, s32);
s32 func_02061d7c(void);
s32 func_020a7d98(void);
void func_020a7dac(s32);
void func_020a7d84(s32);
s32 func_020a7df4(void);
s32 func_020a7e04(void);
void func_020b95d0(s32, s32, s32, s32);
void func_020b95c4(s32);
void func_0202755c(M2C_UNK, M2C_UNK);
s32 func_020681f8(M2C_UNK, M2C_UNK);
extern M2C_UNK data_02150e58;
extern s16 data_02124e68[];
void func_02067690();
void func_01ff810c();
void func_020c2028(s32 arg0) {
    s32 temp_r4;
    s32 v[3];

    temp_r4 = func_020b29bc(-1);
    if (temp_r4 == -1) {
        func_020b95d0(arg0, 2, -1, 0);
        return;
    }
    if (M2C_FIELD(arg0, s32 *, 0x34) == 4) {
        return;
    }
    v[0] = 0x1000;
    v[1] = 0x5000;
    v[2] = 0x1000;
    func_020a7d20((s32) v, 0x5000, 0x1000);
    func_020a7de0(0);
    func_020b95c4(arg0);
    func_020b95d0(arg0, 4, temp_r4, 0);
}
