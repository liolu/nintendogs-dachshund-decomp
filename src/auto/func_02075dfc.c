/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_01ffe490(s32, s32 *, M2C_UNK);         /* extern */
extern M2C_UNK data_02150330;
extern s32 data_02150334;
extern s32 data_0215037c;
extern s32 data_021503ac;

void func_02075dfc(void) {
    s32 sp0;
    s32 temp_r1;

    func_01ffe490(0x1610, &data_02150334, 0x11);
    func_01ffe490(0x19, &data_0215037c, 0xC);
    sp0 = 2;
    func_01ffe490(0x10, &sp0, 1);
    func_01ffe490(0x15, &data_021503ac, 0x20);
    temp_r1                                = M2C_FIELD(&data_02150330, s32 *, 0xFC) & ~1;
    M2C_FIELD(&data_02150330, s32 *, 0xFC) = temp_r1;
    M2C_FIELD(&data_02150330, s32 *, 0xFC) = (s32) (temp_r1 | 2);
}
