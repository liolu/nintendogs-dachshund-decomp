/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_02097550(void);

extern s32 data_02154624;
extern s32 data_02154634;
extern s32 data_02154660;

void func_02096cf8(void) {
    if (data_02154660 != 0) {
        return;
    }
    func_02097550();
    data_02154634 = data_02154624;
    data_02154660 = 1;
}
