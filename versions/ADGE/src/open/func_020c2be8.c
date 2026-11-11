#include "m2c.h"
extern s16 data_02124e68[];
extern void func_02067690();
extern void func_01ff810c();
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
void func_020a7de0(s32);
void func_020b95d0(s32, s32, s32, s32);
void func_020b95c4(s32);
void func_020a7d20(M2C_UNK, M2C_UNK, M2C_UNK);
void func_0202755c(M2C_UNK, M2C_UNK);
s32 func_020681f8(M2C_UNK, M2C_UNK);
extern M2C_UNK data_02150e58;
void func_02067690();
void func_01ff810c();
void func_020c2be8(s32 arg0, s32 arg1, s32 arg2) {
    s32 buf[12];
    s32 i = arg2 >> 4;
    s32 j = i * 2;
    s32 k = j + 1;

    func_02067690(buf, arg1, data_02124e68[j], data_02124e68[k]);
    func_01ff810c(buf, arg0, arg0);
}
