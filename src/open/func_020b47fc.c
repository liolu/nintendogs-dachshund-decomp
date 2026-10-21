#include "m2c.h"

typedef struct { unsigned int w[3]; } Unk12;

void func_020b47fc(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2) {
    if (arg2 != 0) {
        *(Unk12 *) arg0 = *(Unk12 *) arg1;
        *(Unk12 *) ((s8 *) arg0 + 0xC) = *(Unk12 *) ((s8 *) arg2 + 0xBC);
        *(s32 *) ((s8 *) arg0 + 0x18) = 0;
        *(s32 *) ((s8 *) arg0 + 0x1C) = 0x1000;
        *(s32 *) ((s8 *) arg0 + 0x20) = 0;
        *(s32 *) ((s8 *) arg0 + 0x24) = 0x14000;
    }
}
