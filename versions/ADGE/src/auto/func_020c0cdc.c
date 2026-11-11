/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020c0410();                                /* extern */
extern s32 data_02156eb8;

void func_020c0cdc(void) {
    if (func_020c0410() != 0) {
        data_02156eb8 = 1;
    }
}
