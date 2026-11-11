/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 *data_ov001_0215c540;

void func_ov001_0215ba74(void) {
    if (*(s32 *) (data_ov001_0215c540 + 0x2C) != 0) {
        *(s32 *) (data_ov001_0215c540 + 0xC104) = 0;
        *(s32 *) (data_ov001_0215c540 + 0xC124) = 1;
    } else {
        *(s32 *) (data_ov001_0215c540 + 0xC104) = 1;
        *(s32 *) (data_ov001_0215c540 + 0xC124) = 0;
    }
    if (*(s32 *) (data_ov001_0215c540 + 0x30) != 0) {
        *(s32 *) (data_ov001_0215c540 + 0xC0F4) = 0;
        *(s32 *) (data_ov001_0215c540 + 0xC114) = 1;
    } else {
        *(s32 *) (data_ov001_0215c540 + 0xC0F4) = 1;
        *(s32 *) (data_ov001_0215c540 + 0xC114) = 0;
    }
    *(s16 *) (data_ov001_0215c540 + 0xC10E) = (s16) (*(s32 *) (data_ov001_0215c540 + 0x24) >> 12);
    *(s16 *) (data_ov001_0215c540 + 0xC12E) = (s16) (*(s32 *) (data_ov001_0215c540 + 0x24) >> 12);
    *(s16 *) (data_ov001_0215c540 + 0xC0FE) = (s16) (*(s32 *) (data_ov001_0215c540 + 0x28) >> 12);
    *(s16 *) (data_ov001_0215c540 + 0xC11E) = (s16) (*(s32 *) (data_ov001_0215c540 + 0x28) >> 12);
}
