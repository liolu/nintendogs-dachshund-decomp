#include "m2c.h"
void func_020827fc(u32 arg0);
void func_020827f8(u32 arg0);
void func_02082b78(u8 *arg0, u8 *arg1);
void func_02083954(u8 *arg0, u8 *arg1);
void func_02083238(u8 *arg0, u8 *arg1);
void func_02081da4(u8 *arg0) {
    u8 *p;
    u8 *cur;
    u8 *node;
    void (*fn)(u8 *, u8 *) = 0;
    void (*fn2)(u32);

    p = *(u8 **) (arg0 + 0x34);
    cur = *(u8 **) (*(u8 **) (p + 0x18));

    func_020827fc(*(u32 *) (arg0 + 0x20) + cur[0x43] * 0x14);

    switch ((*(volatile u32 *) cur << 26) >> 30) {
    case 0:
        fn = func_02083954;
        break;
    case 1:
        fn = func_02083238;
        break;
    case 2:
        fn = func_02082b78;
        break;
    }

    if ((*(volatile u32 *) cur << 20) >> 31) {
        fn2 = func_020827fc;
    } else {
        fn2 = func_020827f8;
    }

    node = *(u8 **) (p + 8);
    while (node != 0) {
        fn2(*(u32 *) (arg0 + 0x20) + node[0x42] * 0x14);
        fn(arg0, node);
        node = *(u8 **) node;
    }
}
