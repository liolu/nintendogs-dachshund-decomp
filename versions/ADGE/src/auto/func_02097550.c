/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_02001f04(void);

extern s32 data_02154a0c;
extern s32 data_02154a10;

void func_02097550(void) {
    if (data_02154a0c == 0) {
        return;
    }
    if (data_02154a10 == 0) {
        return;
    }
    func_02001f04();
    data_02154a10 = 0;
}
