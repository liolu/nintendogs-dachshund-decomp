#include "m2c.h"
extern void func_0207ca98(s32 arg0, u32 arg1, void *arg2, u32 arg3);
s32 func_0205df50(s32);
s32 func_020074e0(u8 *arg0) {
    u32 size;
    u32 size4;
    u32 a;
    u8 *idx;
    u8 *data;
    u32 addr;

    size = *(u16 *) (arg0 + 0xC) << 3;
    if (size != 0) {
        func_0207ca98(0, (*(u32 *) (arg0 + 8) & 0xFFFF) << 3,
                      arg0 + *(u32 *) (arg0 + 0x14), size);
        *(u16 *) (arg0 + 0x10) |= 1;
    }

    size4 = *(u16 *) (arg0 + 0x1C) << 3;
    if (size4 != 0) {
        a = *(u32 *) (arg0 + 0x18) & 0xFFFF;
        addr = a << 3;
        data = arg0 + *(u32 *) (arg0 + 0x24);
        idx = arg0 + *(u32 *) (arg0 + 0x28);
        func_0207ca98(0, addr, data, size4);
        func_0207ca98(0, 0x20000 + ((addr & 0x1FFFF) >> 1) + ((addr & 0x40000) >> 2),
                      idx, size4 >> 1);
        *(u16 *) (arg0 + 0x20) |= 1;
    }
    return 1;
}
