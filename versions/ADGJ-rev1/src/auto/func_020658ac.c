/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02065320();                                /* extern */

u16 func_020658ac(void) {
    if (func_02065320() != 0) {
        return 0x8000U;
    }
    return *(u16 *) 0x027FFCFA;
}
