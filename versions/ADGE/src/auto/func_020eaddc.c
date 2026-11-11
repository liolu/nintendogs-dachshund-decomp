/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_0214d758;
extern void *data_02159e70;

s32 func_020eaddc(void) {
    if ((M2C_FIELD(data_02159e70, s32 *, 0xC844) == 0) && (M2C_FIELD(&data_0214d758, u16 *, 4) == 2)) {
        return 1;
    }
    return 0;
}
