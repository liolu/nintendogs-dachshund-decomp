/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_0206b57c(M2C_UNK, M2C_UNK, M2C_UNK);
void func_0206bcb0(M2C_UNK, M2C_UNK, M2C_UNK);

extern s32 data_0214cf54;
extern void *data_0214cf58;
extern void *data_0214cf5c;

void func_02006018(void) {
    func_0206b57c(M2C_FIELD(data_0214cf5c, s32 *, 0x14), 0, 0xC00);
    func_0206bcb0(M2C_FIELD(data_0214cf58, s32 *, 0xC), 0x1E0, 6);
    data_0214cf54 = 1;
}
