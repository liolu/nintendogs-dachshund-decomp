#include "m2c.h"
extern u8 *data_0214d628;
u16 func_0207d41c(u32 arg0, u16 arg1);
u8 *func_020038a8(s32 arg0, s32 size);
void func_02005f74(void);
extern s32 data_0214d62c;
extern u8 data_0214d630[];
void func_02002ff8(void);
s32 func_02002e50(void);
s32 func_02002e48(void);
void func_02002e40(s32);
void func_020037f4(s32);
s32 func_02003798(s32 *, s16);
u8 *func_020068b4(u32 arg0, u16 *arg1) {
    u16 zero[2];
    u16 old;
    u8 *p;

    if (arg1 == 0) {
        zero[0] = 0;
        zero[1] = 0;
        arg1 = zero;
    }
    old = func_0207d41c(arg0, *arg1);
    p = func_020038a8(arg0, 0x3C);
    *(s32 *) (p + 0x00) = 2;
    *(u16 *) (p + 0x04) = 0;
    *(u16 *) (p + 0x06) = 0;
    *(u16 *) (p + 0x0A) = 0;
    *(u16 *) (p + 0x0C) = 0;
    *(u16 *) (p + 0x0E) = 0;
    *(u16 *) (p + 0x10) = 0;
    *(u16 *) (p + 0x12) = 0xFF;
    *(u16 *) (p + 0x14) = 0;
    *(u16 *) (p + 0x16) = 0;
    *(u16 *) (p + 0x18) = 4;
    *(u16 *) (p + 0x1A) = 0;
    *(u16 *) (p + 0x1C) = 0;
    *(u16 *) (p + 0x1E) = 0;
    *(s32 *) (p + 0x20) = 0;
    *(s32 *) (p + 0x24) = 0;
    *(s32 *) (p + 0x28) = 0;
    *(s32 *) (p + 0x2C) = 0;
    *(s32 *) (p + 0x30) = 0;
    *(s32 *) (p + 0x34) = 0;
    *(s32 *) (p + 0x38) = 0;
    func_02005f74();
    data_0214d628 = p;
    func_0207d41c(arg0, old);
    return p;
}
