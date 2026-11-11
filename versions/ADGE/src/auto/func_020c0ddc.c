/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020c056c();                                /* extern */
extern s32 data_02156eb8;

void func_020c0ddc(void) {
    if (func_020c056c() != 0) {
        data_02156eb8 = 1;
    }
}
