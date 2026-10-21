#include "m2c.h"

extern u8 data_0215422c[];
extern void *data_0214d750;
extern u8 data_0212baf0[];
extern u8 data_0212bb10[];
extern u8 data_0212bb90[];
extern u8 data_0212bc10[];
extern u8 data_0212bc90[];
s32 func_0208ee68(u8 *arg0);

extern void *data_0215a04c;
s32 func_02111b88(void *, s32);
u8 func_02091c0c(s32 arg0) {
    u16 v;
    u8 *p;
    u8 *tbl;

    p = (u8 *) data_0214d750 + 0x1C;
    v = M2C_FIELD(data_0215422c, u16 *, 0x18);
    if (v == 0x18) {
        tbl = (u8 *) data_0212baf0 + func_0208ee68(p) * 4;
    } else {
        switch (M2C_FIELD(p, u32 *, 4)) {
        case 3:
        case 4:
        case 5:
            tbl = (u8 *) data_0212bc10 + v * 4;
            break;
        case 6:
        case 7:
        case 8:
            tbl = (u8 *) data_0212bb90 + v * 4;
            break;
        case 9:
        case 10:
        case 11:
            tbl = (u8 *) data_0212bc90 + v * 4;
            break;
        case 1:
        case 2:
        case 12:
            tbl = (u8 *) data_0212bb10 + v * 4;
            break;
        default:
            tbl = (u8 *) data_0212bc10 + v * 4;
            break;
        }
    }
    return tbl[arg0];
}
