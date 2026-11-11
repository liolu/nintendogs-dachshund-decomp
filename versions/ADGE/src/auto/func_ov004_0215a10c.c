/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_01ffdb08(s16);
void func_02028fd4(s32, s32, s32);
extern u8 *data_0215a078;

void func_ov004_0215a10c(void) {
    s16 v = *(s16 *) (data_0215a078 + 2);
    func_02028fd4(func_01ffdb08(v), 0x50, 1);
}
