/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 *data_ov004_0216e3c0;

void func_ov004_0215ac8c(void) {
    *(volatile s32 *) 0x04001014 = (*(s16 *) (*(u8 **) (data_ov004_0216e3c0 + 0x36C4) + 2) & 0x1FF) |
                                   (0x01FF0000 & (*(s16 *) (*(u8 **) (data_ov004_0216e3c0 + 0x36C4) + 4) << 0x10));
    *(volatile s32 *) 0x04001018 = (*(s16 *) (*(u8 **) (data_ov004_0216e3c0 + 0x36C4) + 2) & 0x1FF) |
                                   (0x01FF0000 & (*(s16 *) (*(u8 **) (data_ov004_0216e3c0 + 0x36C4) + 4) << 0x10));
    *(volatile s32 *) 0x0400101C = (*(s16 *) (*(u8 **) (data_ov004_0216e3c0 + 0x36C4) + 2) & 0x1FF) |
                                   (0x01FF0000 & (*(s16 *) (*(u8 **) (data_ov004_0216e3c0 + 0x36C4) + 4) << 0x10));
}
