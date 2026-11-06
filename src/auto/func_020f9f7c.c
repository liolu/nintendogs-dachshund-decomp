/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern s32 data_02155978;
extern s32 data_0215597c;
extern s32 data_02155980;
extern s32 data_02155984;

void func_020f9f7c(s32 arg0) {
    if (arg0 == 0) {
        return;
    }
    data_0215597c = 1;
    data_02155980 = 0;
    data_02155984 = arg0 + 0xC;
    data_02155978 = 0;
}
