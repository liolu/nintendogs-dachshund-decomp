/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

void func_02001ea0(void);

extern s32 data_02155494;
extern s32 data_02155498;

void func_020f7cd4(void) {
    if (data_02155494 == 0) {
        return;
    }
    if (data_02155498 == 0) {
        return;
    }
    func_02001ea0();
    data_02155498 = 0;
}
