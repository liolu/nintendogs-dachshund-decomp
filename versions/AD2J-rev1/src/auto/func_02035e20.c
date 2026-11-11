/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern M2C_UNK data_02138378;
extern u16 *data_02153708;

void func_02035e20(void *arg0) {
    if (*data_02153708 == 0xC) {
        return;
    }
    M2C_FIELD(arg0, s16 *, 0x14A) = (s16) M2C_FIELD(arg0, s16 *, 0x148);
    M2C_FIELD(arg0, s16 *, 0x14E) = (s16) M2C_FIELD(arg0, s16 *, 0x14C);
    M2C_FIELD(arg0, s16 *, 0x148) = (s16) M2C_FIELD(arg0, s16 *, 0x146);
    if (*data_02153708 == 3) {
        M2C_FIELD(arg0, s16 *, 0x14C) = 0x14;
    } else {
        M2C_FIELD(arg0, s16 *, 0x14C) =
            (s16) ((s16 *) &data_02138378)[(M2C_FIELD(M2C_FIELD(arg0, void **, 0x9E4), u8 *, 0x12) - 1)];
    }
    M2C_FIELD(arg0, s16 *, 0x146) = -1;
}
