#include "m2c.h"
extern void *data_02156ec0;
extern s32 data_02156ecc[];
void func_0206fc80(s32);
void func_0206f6c4(void);
void func_020bef34(void);
void func_020c19f4(void) {
    s32 i;

    func_0206fc80(0xFFFF);
    func_0206f6c4();
    M2C_FIELD(data_02156ec0, s32 *, 4) = 0;
    for (i = 0; i < 0x10; i++) {
        data_02156ecc[i] = 0;
    }
    M2C_FIELD(data_02156ec0, s32 *, 0x10C) = 0;
    M2C_FIELD(data_02156ec0, s32 *, 0x110) = 0;
    M2C_FIELD(data_02156ec0, s32 *, 0x124) = 0;
    M2C_FIELD(data_02156ec0, s32 *, 0x128) = 0;
    func_020bef34();
}
