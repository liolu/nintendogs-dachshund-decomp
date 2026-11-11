/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_02022b6c(void *arg0);
s32 func_0203535c(void);
void func_ov003_0218758c(void *arg0, s32 a1, s32 a2, s32 a3);

void func_ov003_021847ec(void *arg0) {
    s32 temp_r4;

    temp_r4 = func_0203535c();
    func_02022b6c(arg0);
    func_ov003_0218758c(arg0, 8, 0x7f, temp_r4);
}
