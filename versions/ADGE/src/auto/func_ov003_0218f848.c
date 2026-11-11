/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02029248(void *);
void func_0202f694(void *);
void func_02033dd4(void *);
s32 func_0203535c(void *);
void func_0203e5e8(void *, s32);
s32 func_020446fc(void);
M2C_UNK func_ov003_0218c67c(void *);

void func_ov003_0218f848(void *arg0) {
    func_0202f694(arg0);
    if (func_020446fc() != 2) {
        func_02029248(arg0);
        func_02033dd4(arg0);
        func_ov003_0218c67c(arg0);
        return;
    }
    if (func_0203535c(arg0) == 0) {
        return;
    }
    func_02029248(arg0);
    func_02033dd4(arg0);
    M2C_FIELD(arg0, s32 *, 0x488) = 0;
    func_0203e5e8(arg0, 0x3F0);
}
