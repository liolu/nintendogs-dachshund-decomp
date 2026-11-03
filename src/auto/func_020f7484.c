/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

void func_020f7cd4(void);

extern s32 data_021550ac;
extern s32 data_021550bc;
extern s32 data_021550e8;

void func_020f7484(void) {
    if (data_021550e8 != 0) {
        return;
    }
    func_020f7cd4();
    data_021550bc = data_021550ac;
    data_021550e8 = 1;
}
