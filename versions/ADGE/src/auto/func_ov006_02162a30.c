/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_ov006_02162b8c(void);
extern s32 *data_ov006_02164264;

void func_ov006_02162a30(s32 arg0) {
    if (*(s32 *) ((u8 *) data_ov006_02164264 + 0x184) == 0) {
        if (arg0 != 0) {
            *(s32 *) ((u8 *) data_ov006_02164264 + 0x180) = 1;
            func_ov006_02162b8c();
        }
    } else if (arg0 == 0) {
        *(s32 *) ((u8 *) data_ov006_02164264 + 0x180) = 0;
    }
    *(s32 *) ((u8 *) data_ov006_02164264 + 0x184) = arg0;
}
