/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_ov007_0215be24(void);
extern void *data_ov007_0215e7fc;

void func_ov007_0215cdf0(void) {
    s16 temp;

    if (data_ov007_0215e7fc == NULL) {
        return;
    }
    temp = *(s16 *) ((u8 *) data_ov007_0215e7fc + 0x12c);
    if (temp > 0) {
        *(s16 *) ((u8 *) data_ov007_0215e7fc + 0x12c) = (s16) (temp - 1);
    }
    func_ov007_0215be24();
}
