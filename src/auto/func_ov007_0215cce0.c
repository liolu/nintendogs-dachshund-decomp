/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_ov007_0215bac8(void);
s32 func_ov007_0215bb48(void);
s32 func_ov007_0215badc(void);
extern u8 data_ov007_0215e7fc[];

s32 func_ov007_0215cce0(void) {
    s32 s;

    if (func_ov007_0215bac8() != 0) {
        return 5;
    }
    s = func_ov007_0215bb48();
    switch (s) {
        case 0:
            return 0;
        case 1:
            return 1;
        case 2:
        case 3:
            if (func_ov007_0215badc() != 0) {
                if (*(s32 *) (*(u8 **) data_ov007_0215e7fc + 4) == 0) {
                    return 2;
                }
                return 4;
            }
            return 3;
        case 4:
            return 3;
        default:
            return 5;
    }
}
