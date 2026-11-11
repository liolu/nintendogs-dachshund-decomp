/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_020a5fcc(void);

extern void *data_0215a058;

void func_0211371c(void) {
    void *temp_r0;

    M2C_FIELD(data_0215a058, s16 *, 8) = -1;
    temp_r0                            = (void *) func_020a5fcc();
    M2C_FIELD(temp_r0, u16 *, 0x26)    = (u16) (M2C_FIELD(temp_r0, u16 *, 0x26) ^ 1);
}
