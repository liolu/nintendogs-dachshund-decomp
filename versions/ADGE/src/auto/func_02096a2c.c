/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_02097550(void);

extern s32 data_02154624;

void func_02096a2c(void) {
    if (data_02154624 != 1) {
        return;
    }
    func_02097550();
    data_02154624 = 0;
}
