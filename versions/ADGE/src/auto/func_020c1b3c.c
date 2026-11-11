/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_0206f6c4(void);
void func_020bf3e0(void);

extern s32 data_02156ec0;

void func_020c1b3c(void) {
    if (data_02156ec0 == 0) {
        return;
    }
    func_0206f6c4();
    func_020bf3e0();
    data_02156ec0 = 0;
}
