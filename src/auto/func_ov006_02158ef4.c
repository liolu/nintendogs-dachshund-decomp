/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_0211fd48(void);
extern u8 *data_ov006_0215bb60;

void func_ov006_02158ef4(void) {
    if (func_0211fd48() != 0) {
        *(s32 *) (data_ov006_0215bb60 + 0x28) = 1;
    }
}
