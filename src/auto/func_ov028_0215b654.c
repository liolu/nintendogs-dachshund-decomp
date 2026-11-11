/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_020c0278(void);
extern u8 *data_ov028_0215c030;

void func_ov028_0215b654(void) {
    if (func_020c0278() != 0) {
        *(s32 *) (data_ov028_0215c030 + 0x1C) = 0;
    }
}
