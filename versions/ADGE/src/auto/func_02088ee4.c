/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_0206cd2c(M2C_UNK, M2C_UNK, M2C_UNK);
void func_02099630(void);

extern s32 data_02154228;
extern M2C_UNK data_0215422c;

void func_02088ee4(void) {
    s32 temp_r4;

    temp_r4 = data_02154228;
    func_0206cd2c(temp_r4, 0, 0x4E30);
    M2C_FIELD(temp_r4, s16 *, 0x4E30)      = 0;
    M2C_FIELD(&data_0215422c, s32 *, 0x28) = 0;
    M2C_FIELD(&data_0215422c, s32 *, 0x2C) = 0;
    M2C_FIELD(&data_0215422c, s32 *, 0x34) = 1;
    func_02099630();
}
