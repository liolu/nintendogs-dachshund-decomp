/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_01ffda04(s16);
void func_02028f90(s32, s32, s32);
extern void *data_02153734;

void func_ov003_02157cf4(void) {
    func_02028f90(func_01ffda04(*(s16 *) ((u8 *) data_02153734 + 2)), 0x51, 1);
}
