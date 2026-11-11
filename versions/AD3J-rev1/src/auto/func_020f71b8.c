/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

void func_020f7cd4(void);

extern s32 data_021550ac;

void func_020f71b8(void) {
    if (data_021550ac != 1) {
        return;
    }
    func_020f7cd4();
    data_021550ac = 0;
}
