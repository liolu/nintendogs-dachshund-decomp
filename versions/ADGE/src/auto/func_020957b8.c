/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

extern s32 data_0213d17c;

void func_020957b8(s32 arg0, s32 arg1) {
    if (arg1 != 0) {
        data_0213d17c |= 1 << arg0;
        return;
    }
    data_0213d17c &= 0xFFFF ^ (1 << arg0);
}
