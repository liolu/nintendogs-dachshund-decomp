/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

extern M2C_UNK data_0214cd9c;
extern M2C_UNK data_0214ce78;

s32 func_02003a6c(void) {
    if ((M2C_FIELD(&data_0214ce78, u16 *, 4) == 0) && (M2C_FIELD(&data_0214cd9c, u16 *, 4) == 0)) {
        return 1;
    }
    return 0;
}
