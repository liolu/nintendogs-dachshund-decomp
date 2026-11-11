#include "m2c.h"
s32 func_01ffdb08(s16);
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
extern s16 data_02124e68[];
void func_02067690();
void func_01ff810c();
s32 func_020c2b8c(s16 arg0) {
    arg0 = (s16) (arg0 + 1);
    if (func_01ffdb08(arg0) == 0) {
        do {
            arg0 = (s16) (arg0 + 1);
            if (arg0 >= 3) {
                return -1;
            }
        } while (func_01ffdb08(arg0) == 0);
    }
    return arg0;
}
