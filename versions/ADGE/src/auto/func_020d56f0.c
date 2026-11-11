/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020c1b3c(void);

extern s32 data_02159e6c;

void func_020d56f0(void) {
    if (data_02159e6c == 0) {
        return;
    }
    func_020c1b3c();
    data_02159e6c = 0;
}
