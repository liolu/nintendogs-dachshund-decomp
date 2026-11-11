/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_ov005_02160708(void);
extern s32 *data_ov005_02161dc4;

void func_ov005_021605ac(s32 arg0) {
    if (*(s32 *) ((u8 *) data_ov005_02161dc4 + 0x184) == 0) {
        if (arg0 != 0) {
            *(s32 *) ((u8 *) data_ov005_02161dc4 + 0x180) = 1;
            func_ov005_02160708();
        }
    } else if (arg0 == 0) {
        *(s32 *) ((u8 *) data_ov005_02161dc4 + 0x180) = 0;
    }
    *(s32 *) ((u8 *) data_ov005_02161dc4 + 0x184) = arg0;
}
