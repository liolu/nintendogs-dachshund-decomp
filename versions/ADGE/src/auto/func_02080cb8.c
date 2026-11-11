/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_02080ca4(void);

extern s16 data_02154188;

void func_02080cb8(s32 arg0, s32 arg1) {
    if (((u32) ((arg1 & 0x7F00) << 8) >> 0x10) == 0x10) {
        data_02154188 = 1;
        return;
    }
    func_02080ca4();
}
