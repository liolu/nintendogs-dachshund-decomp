/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_020657ec(void);
void func_0206e004(M2C_UNK, M2C_UNK, M2C_UNK);

extern u16 data_021560fc;
extern M2C_UNK data_02156140;

void func_0211f354(s32 arg0, s32 arg1) {
    func_0206e004(arg1, (s32) &data_02156140, 0x40);
    M2C_FIELD(&data_02156140, s16 *, 0x18) = (s16) func_020657ec();
    M2C_FIELD(&data_02156140, s16 *, 0x32) = (s16) arg0;
    data_021560fc += 1;
    M2C_FIELD(&data_02156140, u16 *, 0xC) = (u16) data_021560fc;
}
