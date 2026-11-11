/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_ov006_02159474(void);
s32 func_ov006_021594f4(void);
s32 func_ov006_02159488(void);
extern u8 data_ov006_0215bb64[];

s32 func_ov006_0215a3b8(void) {
    s32 s;

    if (func_ov006_02159474() != 0) {
        return 5;
    }
    s = func_ov006_021594f4();
    switch (s) {
        case 0:
            return 0;
        case 1:
            return 1;
        case 2:
        case 3:
            if (func_ov006_02159488() != 0) {
                if (*(s32 *) (*(u8 **) data_ov006_0215bb64 + 4) == 0) {
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
