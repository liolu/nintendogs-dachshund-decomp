#include "m2c.h"
typedef struct { u8 pad[0x10]; u16 unk10; } Unk_0207d41c;
u16 func_0207d41c(u32 arg0, u16 arg1) {
    u32 addr = arg0 + 0x24;
    u16 old = *(u16 *) (addr + 0x10);
    *(u16 *) (addr + 0x10) = arg1;
    return old;
}
