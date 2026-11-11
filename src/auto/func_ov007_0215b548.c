/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_020c0410(void);
extern u8 *data_ov007_0215e7e0;

void func_ov007_0215b548(void) {
    if (func_020c0410() != 0) {
        *(s32 *) (data_ov007_0215e7e0 + 0x28) = 1;
    }
}
