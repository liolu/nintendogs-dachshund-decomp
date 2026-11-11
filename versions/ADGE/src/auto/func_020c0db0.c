/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020c0514();                                /* extern */
extern s32 data_02156eb0;

void func_020c0db0(void) {
    if (func_020c0514() != 0) {
        data_02156eb0 = 1;
    }
}
