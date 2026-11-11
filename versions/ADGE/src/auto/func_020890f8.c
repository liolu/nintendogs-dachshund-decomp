/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_0208cf5c(M2C_UNK, M2C_UNK);
void func_0208dd94(M2C_UNK, M2C_UNK);
void func_0208ed44(M2C_UNK, M2C_UNK);
void func_0209026c(M2C_UNK);

extern M2C_UNK data_0215422c;
extern M2C_UNK data_02154350;

void func_020890f8(void) {
    func_0208dd94((s32) M2C_FIELD(&data_02154350, u16 *, 0x10), 0x3C);
    func_0208cf5c(0x64, 0x3C);
    func_0208ed44(0x7F, 0x3C);
    func_0209026c(0x3C);
    M2C_FIELD(&data_0215422c, s32 *, 0x1C) = 0;
}
