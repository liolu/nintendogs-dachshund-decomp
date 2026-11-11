/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020d60e4(M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK func_020d6a1c();                            /* extern */
s32 func_020dad78(M2C_UNK, M2C_UNK, s32, M2C_UNK, s32, s32, s32, s32, s32, s32); /* extern */
M2C_UNK func_020eadc0();                            /* extern */
s32 func_020eaddc();                                /* extern */
M2C_UNK func_020ec440(M2C_UNK, s32, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK data_02145384;
extern void *data_02159e70;

void func_020e877c(void *arg0) {
    if ((M2C_FIELD(data_02159e70, s32 *, 0xBC) == 0xB) && (func_020eaddc() == 0)) {
        return;
    }
    func_020d6a1c();
    func_020eadc0();
    func_020d60e4(0xE, &data_02145384, 3);
    func_020ec440(3, M2C_FIELD(data_02159e70, s32 *, 0x2354), 0, 0x800);
    M2C_FIELD(arg0, s32 *, 0x1C) = -0xFF;
    M2C_FIELD(arg0, s32 *, 0x24) = 1;
    M2C_FIELD(arg0, s32 *, 0x20) =
        func_020dad78(0, 3, M2C_FIELD(data_02159e70, s32 *, 0x2354), 5, 0xA, 0x16, 8, 0xE0, 0, 0xE0);
}
