/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020eb9a8(M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
s32 func_020f0af4(s32);                             /* extern */
extern M2C_UNK data_02144448;
extern M2C_UNK data_0214444c;
extern M2C_UNK data_02144450;
extern M2C_UNK data_02144454;
extern M2C_UNK data_02144458;
extern void *data_02159e70;

void func_020d85a0(s32 arg0) {
    if (func_020f0af4(arg0 + 4) != 0) {
        M2C_FIELD(data_02159e70, s32 *, 0x48C4) = 1;
        func_020eb9a8(2, &data_0214444c, 0);
    }
    if (func_020f0af4(arg0 + 0x40) != 0) {
        M2C_FIELD(data_02159e70, s32 *, 0x48C4) = 2;
        func_020eb9a8(2, &data_02144454, 0);
    }
    if (func_020f0af4(arg0 + 0x7C) != 0) {
        M2C_FIELD(data_02159e70, s32 *, 0x48C4) = 3;
        func_020eb9a8(2, &data_02144458, 0);
    }
    if (func_020f0af4(arg0 + 0xB8) != 0) {
        M2C_FIELD(data_02159e70, s32 *, 0x48C4) = 4;
        func_020eb9a8(2, &data_02144450, 0);
    }
    if (func_020f0af4(arg0 + 0xF4) == 0) {
        return;
    }
    M2C_FIELD(data_02159e70, s32 *, 0x48C4) = 5;
    func_020eb9a8(2, &data_02144448, 0);
}
