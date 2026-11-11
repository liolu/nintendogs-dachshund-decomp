/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_02070f18(M2C_UNK, M2C_UNK, M2C_UNK);
void func_0208dd94(M2C_UNK, M2C_UNK);

extern M2C_UNK data_0215422c;
extern M2C_UNK data_02154350;

void func_0208ff28(s32 arg0, s32 arg1) {
    if ((arg0 == 0x43) && (M2C_FIELD(&data_0215422c, u16 *, 0x18) == 0x1E)) {
        func_0208dd94(0x64, 0x3C);
        M2C_FIELD(&data_02154350, s16 *, 0x10) = 0x64;
    }
    func_02070f18(0x13, arg0, arg1);
}
