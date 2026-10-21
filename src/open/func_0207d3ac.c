#include "m2c.h"
typedef struct { u16 lo : 8; u16 hi : 8; } Unk_0207d3ac;
u16 func_0207d3ac(s32 arg0) {
    u32 t = *(u16 *) (arg0 - 0xe) & 0xff;
    return (u16) ((t << 0x10) >> 0x10);
}
