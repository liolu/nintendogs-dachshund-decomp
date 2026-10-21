#include "m2c.h"
#include "stdarg.h"
extern s32 data_0214cf54;
extern char data_0214cf60[];
extern u8 data_0214cfe0[];
s32 func_0205ed18(char *, u32, const char *, va_list);
void func_02005e68(s32 arg0, s32 arg1, const char *fmt, ...) {
    va_list ap;
    char *p;
    u8 c;
    s32 x;
    s32 y;

    if (data_0214cf54 == 0) {
        return;
    }
    y = arg1;
    ap = (va_list) ((char *) ((u32) &fmt & ~3U) + (((sizeof(fmt) + 3U) & ~3U)));
    func_0205ed18(data_0214cf60, 0x80, fmt, ap);
    x = arg0;
    p = data_0214cf60;
    if (data_0214cf54 == 0) {
        return;
    }
    c = *p;
    if (c == 0) {
        return;
    }
    do {
        if (c == '\n') {
            y = (y + 1) & 0xFF;
            x = arg0;
        } else {
            if (data_0214cf54 != 0 && (u32) x < 0x20 && (u32) y < 0x18) {
                u16 tile = (u16) (((c - 0x20) & 0x3FFF) | 0xF000);
                u16 *dst = (u16 *) (data_0214cfe0 + (((x >> 5) + (y >> 5) * 2) * 0x800));

                dst[((y & 0x1F) << 5) + (x & 0x1F)] = tile;
            }
            x = (x + 1) & 0xFF;
        }
        p++;
        c = *p;
    } while (c != 0);
}
