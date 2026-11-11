/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_0208ca3c(void);
void func_02099120(void);

extern M2C_UNK data_0215422c;

void func_02088f38(void) {
    func_02099120();
    func_0208ca3c();
    M2C_FIELD(&data_0215422c, s32 *, 0x2C) = 0;
}
