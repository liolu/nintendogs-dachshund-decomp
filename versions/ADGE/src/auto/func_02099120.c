/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_02099164(void);

extern s32 data_02154e44;
extern s32 data_02154e48;

void func_02099120(void) {
    if (data_02154e48 == 0) {
        return;
    }
    data_02154e44 = 1;
    func_02099164();
}
