/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern void (*data_ov019_0215f43c[])(void *);

void func_ov019_0215ba1c(void *arg0) {
    s32 idx = M2C_FIELD(arg0, s16 *, 0x1E);
    data_ov019_0215f43c[idx](arg0);
}
