/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_0214d5fc[];

void func_ov009_0215a360(u8 *arg0) {
    s32 lim;

    if ((u16) (*(u16 *) (data_0214d5fc + 2) & 0x40) != 0) {
        *(s16 *) (arg0 + 0x6c) = *(s16 *) (arg0 + 0x6c) + 0x100;
        if (*(s16 *) (arg0 + 0x6c) > 0x3f00) {
            *(s16 *) (arg0 + 0x6c) = 0x3f00;
        }
    }
    if ((u16) (*(u16 *) (data_0214d5fc + 2) & 0x80) != 0) {
        lim                    = 0x3f00;
        lim                    = 0 - lim;
        *(s16 *) (arg0 + 0x6c) = *(s16 *) (arg0 + 0x6c) - 0x100;
        if (*(s16 *) (arg0 + 0x6c) < lim) {
            *(s16 *) (arg0 + 0x6c) = lim;
        }
    }
    if ((u16) (*(u16 *) (data_0214d5fc + 2) & 0x20) != 0) {
        *(s16 *) (arg0 + 0x6e) = *(s16 *) (arg0 + 0x6e) - 0x100;
    }
    if ((u16) (*(u16 *) (data_0214d5fc + 2) & 0x10) != 0) {
        *(s16 *) (arg0 + 0x6e) = *(s16 *) (arg0 + 0x6e) + 0x100;
    }
    if ((u16) (*(u16 *) (data_0214d5fc + 2) & 0x200) != 0) {
        *(s32 *) (arg0 + 0x68) = *(s32 *) (arg0 + 0x68) + 0x100;
        if (*(s32 *) (arg0 + 0x68) > 0x18000) {
            *(s32 *) (arg0 + 0x68) = 0x18000;
        }
    }
    if ((u16) (*(u16 *) (data_0214d5fc + 2) & 0x100) != 0) {
        *(s32 *) (arg0 + 0x68) = *(s32 *) (arg0 + 0x68) - 0x100;
        if (*(s32 *) (arg0 + 0x68) < 0x4000) {
            *(s32 *) (arg0 + 0x68) = 0x4000;
        }
    }
}
