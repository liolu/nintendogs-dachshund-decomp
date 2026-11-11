/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

extern s32 data_02154ef0;
extern s32 data_02154ef4;
extern s32 data_02154ef8;
extern s32 data_02154efc;

void func_020997f0(s32 arg0) {
    if (arg0 == 0) {
        return;
    }
    data_02154ef4 = 1;
    data_02154ef8 = 0;
    data_02154efc = arg0 + 0xC;
    data_02154ef0 = 0;
}
