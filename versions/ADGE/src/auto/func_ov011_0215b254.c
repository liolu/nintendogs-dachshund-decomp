#include "m2c.h"

void func_020c9ad4(void *, s32);
extern u8 *data_ov011_0215b3c4;
extern volatile u16 data_0214d5fc[];

void func_ov011_0215b254(void *arg0) {
    u8 *b;
    s32 v;

    b = (u8 *) arg0;
    v = *(s32 *) (data_ov011_0215b3c4 + 0x874);
    if (v != 0) {
        if ((u16) (data_0214d5fc[1] & 0x40) != 0) {
            *(u16 *) (b + 0x80) = (u16) (*(u16 *) (b + 0x80) + 0x100);
            if (*(u16 *) (b + 0x80) == 0x4000) {
                *(u16 *) (b + 0x80) = 0x3F00U;
            }
        }
        if ((u16) (data_0214d5fc[1] & 0x80) != 0) {
            *(u16 *) (b + 0x80) = (u16) (*(u16 *) (b + 0x80) - 0x100);
            if (*(u16 *) (b + 0x80) == 0xC000) {
                *(u16 *) (b + 0x80) = 0xC100U;
            }
        }
        if ((u16) (data_0214d5fc[1] & 0x20) != 0) {
            *(u16 *) (b + 0x82) = (u16) (*(u16 *) (b + 0x82) - 0x200);
        }
        v = (u16) (data_0214d5fc[1] & 0x10);
        if (v != 0) {
            v                   = *(u16 *) (b + 0x82) + 0x200;
            *(u16 *) (b + 0x82) = (u16) v;
        }
    }
    func_020c9ad4(arg0, v);
}
