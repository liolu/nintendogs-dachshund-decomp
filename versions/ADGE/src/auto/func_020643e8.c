/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_02063db4(void);

s32 func_020643e8(void) {
    if (func_02063db4() != 0) {
        return 0x8000;
    }
    return (s32) * (u16 *) 0x027FFCFA;
}
