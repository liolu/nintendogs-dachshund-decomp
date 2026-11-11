/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_02070c3c(M2C_UNK);

extern s32 data_02154464;

s32 func_0208fe68(void) {
    if ((data_02154464 != 0) && (func_02070c3c((s32) &data_02154464) == 0x7B)) {
        return 1;
    }
    return 0;
}
