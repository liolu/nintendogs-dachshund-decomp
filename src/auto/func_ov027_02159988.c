/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 *data_ov027_02159bb0;

u8 *func_02003844(void *, s32);
s32 func_020037ec(void *, s32, s32);
void func_02120178(void);

void func_ov027_02159988(u8 *arg0, u8 *arg1) {
    s32 ip;
    u32 r4;
    u32 r0v;

    data_ov027_02159bb0                   = func_02003844(arg0, 0x3c);
    *(s32 *) (data_ov027_02159bb0 + 0x1c) = 0;
    *(u8 **) data_ov027_02159bb0          = arg1;
    *(s32 *) (data_ov027_02159bb0 + 0x30) = 0;
    *(s32 *) (data_ov027_02159bb0 + 0x14) = 0;
    *(s32 *) (data_ov027_02159bb0 + 0x18) = 0;
    ip                                    = (*(u16 *) (arg1 + 0x34) + 0x23) & ~0x1f;
    r0v                                   = (*(u16 *) (arg1 + 0x36) + 0x21) & ~0x1f;
    if (ip <= (s32) r0v) {
        ip = r0v;
    }
    *(s32 *) (data_ov027_02159bb0 + 0x4) = ip;
    *(s32 *) (data_ov027_02159bb0 + 0x8) = func_020037ec(arg0, *(s32 *) (data_ov027_02159bb0 + 0x4), 0x20);
    r4                                   = ((*(u16 *) (arg1 + 0x36) + 0xe) * *(u16 *) (arg1 + 0x10) + 0x29) & ~0x1f;
    r4                                   = r4 << 1;
    r0v                                  = ((*(u16 *) (arg1 + 0x34) + 0x55) & ~0x1f) << 1;
    if (r4 <= r0v) {
        r4 = r0v;
    }
    *(u32 *) (data_ov027_02159bb0 + 0xc)  = r4;
    *(s32 *) (data_ov027_02159bb0 + 0x10) = func_020037ec(arg0, *(s32 *) (data_ov027_02159bb0 + 0xc), 0x20);
    *(u16 *) (data_ov027_02159bb0 + 0x38) = 0;
    *(u16 *) (data_ov027_02159bb0 + 0x2c) = 0;
    func_02120178();
}
