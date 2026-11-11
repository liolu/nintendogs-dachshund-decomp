/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_020c046c(void);
void func_020c02ac(void *, void *);
void func_ov007_0215b88c(void);

void func_ov007_0215b8bc(void) {
    s32 sp0;

    if (func_020c046c() == 0) {
        return;
    }
    func_020c02ac(func_ov007_0215b88c, &sp0);
}
