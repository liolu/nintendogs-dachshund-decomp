#include "m2c.h"
extern void *data_02159e70;
s32 func_020a3cac(s32 arg0) {
    s32 *p;
    s32 result = 0;
    s32 mode;

    p = (s32 *) ((u8 *) data_02159e70 + 0xC4);
    if (arg0 != 0x30002) {
        return result;
    }
    mode = p[7];
    switch (mode) {
    case 0:
        result = (s32) ((u8 *) p + 0xEC + p[3] * 16);
        break;
    case 1:
        result = (s32) ((u8 *) p + 0x11C + p[4] * 16);
        break;
    case 2:
        if (p[3] >= 0) {
            result = (s32) ((u8 *) p + 0xEC + p[3] * 16);
        } else if (p[4] >= 0) {
            result = (s32) ((u8 *) p + 0x11C + p[4] * 16);
        }
        break;
    }
    return result;
}
