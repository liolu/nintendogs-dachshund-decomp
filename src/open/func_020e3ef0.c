#include "m2c.h"

extern void *data_02159fc4;
extern void *data_02144b50[];
M2C_UNK func_0206cbc4();

void func_020e3ef0(void *arg0) {
    volatile u16 z;

    data_02159fc4 = arg0;
    *(s32 *) ((s8 *) arg0 + 0) = 0;
    *(s32 *) ((s8 *) arg0 + 4) = 0;
    *(s32 *) ((s8 *) arg0 + 0xC) = (s32) data_02144b50[*(s32 *) ((s8 *) arg0 + 0)];
    *(s32 *) ((s8 *) arg0 + 8) = 0;
    z = 0;
    func_0206cbc4(z, (s8 *) arg0 + 0x10, 0x188);
}
