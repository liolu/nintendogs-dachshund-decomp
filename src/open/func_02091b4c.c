#include "m2c.h"
extern u8 data_02154578[];
extern u8 data_02154580[];
void func_02070efc(u8 *, s32);
extern s32 data_0215449c[];
extern s32 *data_0215467c[];
extern volatile s32 data_02154670[];
void func_02070e7c(void *arg0, s32 arg1, s32 arg2);
void func_02070f88(void *arg0, s32 arg1);
void func_02091b4c(void) {
    u8 *p = data_02154578;
    s16 i;

    M2C_FIELD(p, u16 *, 4) = 0;
    M2C_FIELD(p, u32 *, 0x34) = 0;
    M2C_FIELD(p, u32 *, 0x38) = 0;
    func_02070efc(data_02154580, 0);
    M2C_FIELD(p, u32 *, 0) = 0;
    M2C_FIELD(p, u16 *, 0x3C) = 0;
    M2C_FIELD(p, u32 *, 0x40) = 0;
    for (i = 0; i < 5; i = (s16) (i + 1)) {
        M2C_FIELD((int) p + i * 4, u32 *, 0xC) = 0x28;
        M2C_FIELD(p + i * 4, u32 *, 0x20) = 0;
    }
}
