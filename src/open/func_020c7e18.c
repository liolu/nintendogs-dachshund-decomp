#include "m2c.h"
extern s8 *data_0214101c;
extern s8 data_02141024[];
extern s8 data_02141030[];
extern s8 data_0214103c[];
extern s8 data_0214104c[];
void func_0205ece8();
void func_02087f84();
s32 func_0207e154();
void func_020c729c();
M2C_UNK func_0207e0d0();
M2C_UNK func_02006b68();
void func_0207e124();
void func_020ca1f8();
void func_020c7e18(s32 arg0) {
    char name[0x10];
    char path[0x40];
    s32 fnt;
    u32 flag;

    flag = (*(u32 *)(arg0 + 0x10) & 1) != 0;
    if (flag != 0) {
        return;
    }
    fnt = *(s32 *)(arg0 + 0x84) + 0x60;
    func_02087f84((void *)(arg0 + 4));
    func_0207e154(*(s32 *)(arg0 + 0x84), data_0214101c, fnt);
    func_020c729c(name, 0x10, *(u16 *)(arg0 + 0x7a), *(u16 *)(arg0 + 0x7c));
    func_0205ece8(path, 0x40, data_02141024, data_0214101c, name);
    func_020ca1f8((s32 *)(arg0 + 0x98), func_0207e0d0(path));
    func_0205ece8(path, 0x40, data_02141030, data_0214101c, name);
    *(s32 *)(arg0 + 0x88) = func_0207e0d0(path);
    func_0205ece8(path, 0x40, data_0214103c, data_0214101c, name);
    *(s32 *)(arg0 + 0x8c) = func_0207e0d0(path);
    func_0205ece8(path, 0x40, data_0214104c, data_0214101c, name);
    *(s32 *)(arg0 + 0x90) = (s32)func_02006b68(func_0207e0d0(path));
    func_0207e124(*(s32 *)(arg0 + 0x84));
    *(s32 *)(arg0 + 0x84) = 0;
    *(s32 *)(arg0 + 0xb4) = 0;
    *(s32 *)(arg0 + 0xbc) = 0;
    *(u16 *)arg0 = 3;
    *(u16 *)(arg0 + 2) |= 1;
}
