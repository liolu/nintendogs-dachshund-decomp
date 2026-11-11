/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_02080ca4(void);

extern s16 data_0214cbc0;

void func_02000eac(s32 arg0, s32 arg1) {
    if ((arg1 & 0x3F) == 1) {
        data_0214cbc0 = 1;
        return;
    }
    func_02080ca4();
}
