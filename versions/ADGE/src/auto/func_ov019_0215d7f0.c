/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef void (*fn_t)(u8 *);
extern fn_t data_ov019_0215f2a8[];

void func_ov019_0215d7f0(u8 *arg0) {
    s16 idx = *(s16 *) (arg0 + 0x1E);
    data_ov019_0215f2a8[idx](arg0);
}
