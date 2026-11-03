/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern M2C_UNK data_0214a79c;
extern M2C_UNK data_0214a878;

s32 func_0200399c(void) {
    if ((M2C_FIELD(&data_0214a878, u16 *, 4) == 2) && (M2C_FIELD(&data_0214a79c, u16 *, 4) == 2)) {
        return 1;
    }
    return 0;
}
