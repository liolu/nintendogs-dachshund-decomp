/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern M2C_UNK data_02139a90;
extern u16 *data_0215a04c;

void func_02035fd8(void *arg0) {
    if (*data_0215a04c == 0xC) {
        return;
    }
    M2C_FIELD(arg0, s16 *, 0x142) = (s16) M2C_FIELD(arg0, s16 *, 0x140);
    M2C_FIELD(arg0, s16 *, 0x146) = (s16) M2C_FIELD(arg0, s16 *, 0x144);
    M2C_FIELD(arg0, s16 *, 0x140) = (s16) M2C_FIELD(arg0, s16 *, 0x13E);
    if (*data_0215a04c == 3) {
        M2C_FIELD(arg0, s16 *, 0x144) = 0x14;
    } else {
        M2C_FIELD(arg0, s16 *, 0x144) =
            (s16) ((s16 *) &data_02139a90)[(M2C_FIELD(M2C_FIELD(arg0, void **, 0x9E8), u8 *, 0x12) - 1)];
    }
    M2C_FIELD(arg0, s16 *, 0x13E) = -1;
}
