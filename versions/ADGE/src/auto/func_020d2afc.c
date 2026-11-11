#include "engine.h"
#include "m2c.h"

void func_02088760(M2C_UNK, M2C_UNK);

extern M2C_UNK data_02130ea8;
extern s32 data_02143c58;

void func_020d2afc(s32 arg0) {
    data_02143c58 = arg0;
    func_02088760(0, *((M2C_UNK *) ((s8 *) &data_02130ea8 + (arg0 * 8))));
}
