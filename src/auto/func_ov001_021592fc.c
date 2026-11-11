/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 *data_ov001_02159d60;

void func_ov001_021592fc(void) {
    if (*(s32 *) (data_ov001_02159d60 + 0x2C) != 0) {
        *(s32 *) (data_ov001_02159d60 + 0xC104) = 0;
        *(s32 *) (data_ov001_02159d60 + 0xC124) = 1;
    } else {
        *(s32 *) (data_ov001_02159d60 + 0xC104) = 1;
        *(s32 *) (data_ov001_02159d60 + 0xC124) = 0;
    }
    if (*(s32 *) (data_ov001_02159d60 + 0x30) != 0) {
        *(s32 *) (data_ov001_02159d60 + 0xC0F4) = 0;
        *(s32 *) (data_ov001_02159d60 + 0xC114) = 1;
    } else {
        *(s32 *) (data_ov001_02159d60 + 0xC0F4) = 1;
        *(s32 *) (data_ov001_02159d60 + 0xC114) = 0;
    }
    *(s16 *) (data_ov001_02159d60 + 0xC10E) = (s16) (*(s32 *) (data_ov001_02159d60 + 0x24) >> 12);
    *(s16 *) (data_ov001_02159d60 + 0xC12E) = (s16) (*(s32 *) (data_ov001_02159d60 + 0x24) >> 12);
    *(s16 *) (data_ov001_02159d60 + 0xC0FE) = (s16) (*(s32 *) (data_ov001_02159d60 + 0x28) >> 12);
    *(s16 *) (data_ov001_02159d60 + 0xC11E) = (s16) (*(s32 *) (data_ov001_02159d60 + 0x28) >> 12);
}
