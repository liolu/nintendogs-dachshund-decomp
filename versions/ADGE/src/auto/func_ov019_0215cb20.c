/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef void (*fn_t)(u8 *);
extern fn_t data_ov019_0215f508[];

void func_ov019_0215cb20(u8 *arg0) {
    s16 idx = *(s16 *) (arg0 + 0x1E);
    data_ov019_0215f508[idx](arg0);
}
