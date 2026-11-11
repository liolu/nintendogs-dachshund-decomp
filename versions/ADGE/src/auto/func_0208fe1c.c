/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_02070c3c(M2C_UNK);

extern M2C_UNK data_02154464;

s32 func_0208fe1c(void) {
    s32 temp_r0;

    temp_r0 = func_02070c3c((s32) &data_02154464);
    if ((temp_r0 == 4) || (temp_r0 == 5) || (temp_r0 == 0x3E)) {
        return 1;
    }
    return 0;
}
