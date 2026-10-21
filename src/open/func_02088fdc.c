#include "engine.h"
#include "m2c.h"
extern u8 *data_02154228;
extern u8 *data_021542fc;
extern u8 data_02154350[];
extern u8 data_0215422c[];
void func_020992dc(void *, void *, s32, s32);
void func_0208ca4c(s32);

void func_02088fdc(s32 arg0) {
    u8 *p = data_02154228;

    *(u16 *) (p + 0x4E30) = 1;
    func_020992dc(data_021542fc, p, arg0, *(s16 *) (data_02154350 + 0x32) + 0x100);
    func_0208ca4c(arg0);
    *(s32 *) (data_0215422c + 0x28) = 1;
    *(s32 *) (data_0215422c + 0x2C) = 1;
    *(s32 *) (data_0215422c + 0x30) = 0;
    *(s32 *) (data_0215422c + 0x34) = 0;
}
