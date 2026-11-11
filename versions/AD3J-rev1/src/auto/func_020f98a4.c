/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

void func_020f98e8(void);

extern s32 data_021558cc;
extern s32 data_021558d0;

void func_020f98a4(void) {
    if (data_021558d0 == 0) {
        return;
    }
    data_021558cc = 1;
    func_020f98e8();
}
