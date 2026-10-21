#include "m2c.h"
extern void func_020827fc(s32 arg0);
extern void func_020828e8(u8 *arg0, u8 *arg1);
extern void func_02083668(u8 *arg0, u8 *arg1);
extern void func_02082e08(u8 *arg0, u8 *arg1);

void func_02081ce0(u8 *arg0) {
    u8 *p;
    u8 *q;
    u8 *node;
    void (*fn)(u8 *, u8 *) = 0;

    p = *(u8 **) (arg0 + 0x34);
    q = *(u8 **) (p + 0x18);
    if (((*(u32 *) (*(u32 *) q) << 15) >> 31) == 0)
        return;
    func_020827fc(*(u32 *) (arg0 + 0x20) + (*(u8 *) (*(u32 *) (q + 0x14) + 0xF)) * 0x14);
    switch (((u32) (*(u16 *) (*(u32 *) (q + 0x14))) << 23) >> 30) {
    case 2:
        fn = func_020828e8;
        break;
    case 0:
        fn = func_02083668;
        break;
    case 1:
        fn = func_02082e08;
        break;
    }
    node = *(u8 **) (p + 0x10);
    while (node != 0) {
        fn(arg0, node);
        node = *(u8 **) node;
    }
}
