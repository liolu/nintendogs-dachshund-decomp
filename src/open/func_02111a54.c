#include "m2c.h"
s32 func_02111b88(void *, s32);
extern void *data_0215a04c;
extern u8 data_0215422c[];
extern void *data_0214d750;
extern u8 data_0212baf0[];
extern u8 data_0212bb10[];
extern u8 data_0212bb90[];
extern u8 data_0212bc10[];
extern u8 data_0212bc90[];
s32 func_0208ee68(u8 *arg0);
void func_02111a54(u8 *arg0, s16 *arg1) {
    u8 *temp;
    s32 i;
    u16 *p;
    s16 idx;

    temp = data_0215a04c;
    func_02111b88(temp, 0);
    *(u16 *) (temp + 0x4) = 0;
    *(s16 *) (temp + 0xc) = arg1[1];
    *(s16 *) (temp + 0x12) = arg1[2];
    *(s16 *) (temp + 0x14) = arg1[3];
    *(s16 *) (temp + 0x16) = arg1[4];
    *(s16 *) (temp + 0x18) = arg1[5];
    p = (u16 *) (temp + 0x20);
    for (i = 0; i < 3; i++) {
        p[0] |= 1;
        p[1] = i;
        p += 10;
    }
    idx = arg1[0];
    if (idx >= 0) {
        *(u16 *) ((u8 *) data_0215a04c + 0x20 + idx * 0x14) |= 4;
    }
    if (arg0 != NULL) {
        *(u32 *) arg0 = 0x434E5454;
        *(u16 *) (arg0 + 4) = 0;
        *(s16 *) (arg0 + 6) = -1;
        *(s16 *) (arg0 + 8) = -1;
    }
}
