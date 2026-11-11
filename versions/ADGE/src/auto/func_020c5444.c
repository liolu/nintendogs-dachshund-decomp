/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_020c5464(void);
M2C_UNK func_020c54a4(void);

s32 func_020c5444(void) {
    s32 temp_r4;

    temp_r4 = func_020c54a4();
    return (0x100 - temp_r4) - func_020c5464();
}
