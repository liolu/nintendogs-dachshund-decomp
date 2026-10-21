#include "m2c.h"
s32 func_020cb204(u32 arg0) {
    if ((arg0 >= 0x61) && (arg0 <= 0x7A)) {
        return (u16) (arg0 - 0x20);
    }
    if ((arg0 >= 0xE0) && (arg0 <= 0xFD) && (arg0 != 0xF7)) {
        return (u16) (arg0 - 0x20);
    }
    return arg0;
}
