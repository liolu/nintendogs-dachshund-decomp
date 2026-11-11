/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_ov004_0216d62c(u8 *);                /* extern */
s32 func_ov004_0216d678(u8 *);                /* extern */
s32 func_ov004_0216d6c0(u8 *);                /* extern */
extern u8 *data_ov004_0216e3c4;

void func_ov004_0216c680(void) {
    u8 *temp_r2;
    u8 *temp_r2_2;
    u8 *temp_r2_3;
    u8 *temp_r2_4;
    u8 *temp_r2_5;
    u8 *temp_r2_6;
    u8 *temp_r2_7;
    u8 *temp_r2_8;

    if ((*(s16 *) ((u8 *) (data_ov004_0216e3c4) + 0x46)) == -1) {
        temp_r2                                = (*(u8 **) ((u8 *) (data_ov004_0216e3c4) + 0));
        (*(u16 *) ((u8 *) (temp_r2) + 0x20))   = (u16) ((*(u16 *) ((u8 *) (temp_r2) + 0x20)) & ~1);
        temp_r2_2                              = (*(u8 **) ((u8 *) (data_ov004_0216e3c4) + 4));
        (*(u16 *) ((u8 *) (temp_r2_2) + 0x20)) = (u16) ((*(u16 *) ((u8 *) (temp_r2_2) + 0x20)) & ~1);
        func_ov004_0216d6c0((*(u8 **) ((u8 *) (data_ov004_0216e3c4) + 0)));
        temp_r2_3                              = (*(u8 **) ((u8 *) (data_ov004_0216e3c4) + 8));
        (*(u16 *) ((u8 *) (temp_r2_3) + 0x20)) = (u16) ((*(u16 *) ((u8 *) (temp_r2_3) + 0x20)) | 1);
        temp_r2_4                              = (*(u8 **) ((u8 *) (data_ov004_0216e3c4) + 0xC));
        (*(u16 *) ((u8 *) (temp_r2_4) + 0x20)) = (u16) ((*(u16 *) ((u8 *) (temp_r2_4) + 0x20)) | 1);
        func_ov004_0216d62c((*(u8 **) ((u8 *) (data_ov004_0216e3c4) + 8)));
        return;
    }
    temp_r2_5                              = (*(u8 **) ((u8 *) (data_ov004_0216e3c4) + 0));
    (*(u16 *) ((u8 *) (temp_r2_5) + 0x20)) = (u16) ((*(u16 *) ((u8 *) (temp_r2_5) + 0x20)) & ~1);
    temp_r2_6                              = (*(u8 **) ((u8 *) (data_ov004_0216e3c4) + 4));
    (*(u16 *) ((u8 *) (temp_r2_6) + 0x20)) = (u16) ((*(u16 *) ((u8 *) (temp_r2_6) + 0x20)) & ~1);
    func_ov004_0216d678((*(u8 **) ((u8 *) (data_ov004_0216e3c4) + 0)));
    temp_r2_7                              = (*(u8 **) ((u8 *) (data_ov004_0216e3c4) + 8));
    (*(u16 *) ((u8 *) (temp_r2_7) + 0x20)) = (u16) ((*(u16 *) ((u8 *) (temp_r2_7) + 0x20)) & ~1);
    temp_r2_8                              = (*(u8 **) ((u8 *) (data_ov004_0216e3c4) + 0xC));
    (*(u16 *) ((u8 *) (temp_r2_8) + 0x20)) = (u16) ((*(u16 *) ((u8 *) (temp_r2_8) + 0x20)) & ~1);
    func_ov004_0216d62c((*(u8 **) ((u8 *) (data_ov004_0216e3c4) + 8)));
}
