#include "m2c.h"
void func_020a7924(void *, s16);
void *func_020038a8(void *, s32);
s32 func_0207837c(void *, void *);
void func_020ca7d8(void *, s16, void *);
void func_020f96c8();
void func_020f8eac();
void func_020f8e44();
void func_020f8ddc();
extern u8 data_021315d0[];
extern u8 data_021315e0[];
void func_020f974c(void *arg0, void *arg1, s32 arg2) {
    u8 *p = (u8 *) arg0;
    u8 *q;

    func_020a7924(p, (s16) arg2);
    *(void **) (p + 0x214) = func_020038a8(arg1, 0x18);
    *(void **) (p + 0x1F4) = func_020f96c8;
    *(void **) (p + 0x1F8) = func_020f8eac;
    q = *(u8 **) (p + 0x214);
    *(s32 *) (p + 0xB0) = 0;
    *(s32 *) (p + 0xB4) = 0;
    *(s32 *) (p + 0xB8) = 0;
    *(s32 *) (p + 0xBC) = 0;
    *(s32 *) (p + 0xC0) = 0;
    *(s32 *) (p + 0xC4) = 0;
    *(s32 *) (q + 0x4) = 0;
    *(s32 *) (q + 0x8) = 0;
    *(u16 *) (q + 0xC) = 0;
    *(s32 *) (q + 0x0) = 0;
    if (arg2 == 0x43) {
        *(u16 *) (p + 0xA6) = 1;
    }
    if (arg2 == 0x44) {
        *(u16 *) (p + 0xA6) = 0;
    }
    *(s32 *) (q + 0x10) =
        func_0207837c((u8 *) (*(u32 *) (*(u8 **) (p + 0x1C) + 8) + 0x40), data_021315d0);
    *(s32 *) (q + 0x14) =
        func_0207837c((u8 *) (*(u32 *) (*(u8 **) (p + 0x1C) + 8) + 0x40), data_021315e0);
    func_020ca7d8(p, (s16) * (s32 *) (q + 0x10), func_020f8e44);
    func_020ca7d8(p, (s16) * (s32 *) (q + 0x14), func_020f8ddc);
    *(s32 *) (p + 0xF8) = 0x14D2;
    *(s32 *) (p + 0xFC) = 0x668;
    *(s32 *) (p + 0x100) = 0xE6A;
    *(s32 *) (p + 0x104) = 0x14D2;
    *(s32 *) (p + 0xAC) = 0x7D0;
    *(s32 *) (p + 0x108) = 0x39A;
    *(s32 *) (p + 0x10C) = 0x39A;
    *(s32 *) (p + 0x110) = 0x39A;
    *(s32 *) (p + 0x114) = 0xE6A0;
    *(s32 *) (p + 0x118) = 0x39A;
    *(s32 *) (p + 0x11C) = 0x39A;
}
