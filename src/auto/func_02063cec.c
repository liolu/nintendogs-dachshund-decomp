/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02063d0c();                                /* extern */
s32 func_02063d4c();                                /* extern */

s32 func_02063cec(void) {
    s32 temp_r4;

    temp_r4 = func_02063d4c();
    return (0x100 - temp_r4) - func_02063d0c();
}
