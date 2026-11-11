/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_0208fe68(void);

extern M2C_UNK data_0215422c;

s32 func_02089050(void) {
    if ((func_0208fe68() != 0) || (M2C_FIELD(&data_0215422c, s32 *, 0x20) != 0)) {
        return 1;
    }
    return 0;
}
