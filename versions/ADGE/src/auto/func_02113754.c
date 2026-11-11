/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_020a5fcc(void);

extern void *data_0215a058;

void func_02113754(s32 arg0) {
    void *temp_r0;

    M2C_FIELD(data_0215a058, s16 *, 0xA) = 1;
    M2C_FIELD(data_0215a058, s16 *, 0xC) = (s16) arg0;
    if (M2C_FIELD(data_0215a058, u16 *, 6) != 1) {
        M2C_FIELD(data_0215a058, s16 *, 8) = 1;
        return;
    }
    M2C_FIELD(data_0215a058, s16 *, 8) = 0;
    temp_r0                            = (void *) func_020a5fcc();
    M2C_FIELD(temp_r0, u16 *, 0x26)    = (u16) (M2C_FIELD(temp_r0, u16 *, 0x26) ^ 1);
}
