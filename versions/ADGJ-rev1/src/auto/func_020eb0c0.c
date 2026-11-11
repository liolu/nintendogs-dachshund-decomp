/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern M2C_UNK data_021306bc;
extern void *data_0214b150;

u8 func_020eb0c0(s32 arg0) {
    void *temp_lr;

    temp_lr = data_0214b150 + 0x2C;
    return *((u8 *) ((s8 *) &data_021306bc + (arg0 * 4)) +
             (s16) (u16) ((u32) ((((M2C_FIELD(temp_lr, s32 *, 8) +
                                    (M2C_FIELD(data_0214b150, s32 *, 0x2C) + M2C_FIELD(temp_lr, s32 *, 4))) *
                                   0x10DCD) +
                                  1)
                                 << 0x10) >>
                          0x1E));
}
