/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 *data_ov005_02165fa0;

void func_ov005_0215ee78(s16 arg0) {
    s16 i;

    *(s16 *) (data_ov005_02165fa0 + 0x70) = arg0;
    for (i = 0; i < 6; i++) {
        if (arg0 & (1 << i)) {
            switch (i) {
                case 0:
                case 3:
                    *(s32 *) (data_ov005_02165fa0 + 0x58) = 0x1000;
                    break;
                case 1:
                    *(s32 *) (data_ov005_02165fa0 + 0x54) = 0x1000;
                    break;
                case 2:
                case 4:
                    *(s32 *) (data_ov005_02165fa0 + 0x5C) = 0x1000;
                    break;
                case 5:
                    *(s32 *) (data_ov005_02165fa0 + 0x60) = 0x1000;
                    break;
            }
        }
    }
}
