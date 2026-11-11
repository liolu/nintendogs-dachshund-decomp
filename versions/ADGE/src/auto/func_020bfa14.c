/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_02064280(void);
void func_0206cc0c(M2C_UNK, M2C_UNK, M2C_UNK);

extern u16 data_02155674;
extern M2C_UNK data_021556a0;

void func_020bfa14(s32 arg0, s32 arg1) {
    func_0206cc0c(arg1, (s32) &data_021556a0, 0x40);
    M2C_FIELD(&data_021556a0, s16 *, 0x18) = (s16) func_02064280();
    M2C_FIELD(&data_021556a0, s16 *, 0x32) = (s16) arg0;
    data_02155674 += 1;
    M2C_FIELD(&data_021556a0, u16 *, 0xC) = (u16) data_02155674;
}
