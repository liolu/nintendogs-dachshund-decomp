#include "m2c.h"
extern u8 *func_020038a8(s32 arg0, s32 size);
extern void func_0205ece8(char *buf, u32 len, const char *fmt, ...);
extern s32 func_020c7790(char *arg0);
extern s32 func_02006bd0(s32 arg0);
extern s32 func_02006b9c(s32 arg0);
extern s32 func_02006b68(s32 arg0);
extern s32 func_02073918(s32 arg0, s32 arg1);
extern char data_0214c9b0[];
extern char data_0214c9b8[];
extern char data_0214c9cc[];
extern char data_0214c9e0[];
extern char data_0214c9f4[];
extern char data_0214ca00[];
extern char data_0214ca08[];
extern char data_0214ca1c[];
extern char data_0214ca30[];
extern char data_0214ca44[];
extern char data_0214ca50[];
extern char data_0214ca58[];
extern char data_0214ca6c[];
extern char data_0214ca80[];
extern char data_0214ca94[];
extern void *data_0215a06c;
s32 func_0211b194(s32 arg0, s32 arg1, s32 arg2) {
    char name[0x40];
    u8 *p;
    const char *prefix;
    const char *ext;
    s32 idx;

    p = func_020038a8(arg0, 0x3C);
    *(u16 *) (p + 0x00) = 0;
    *(u16 *) (p + 0x02) = arg1;
    *(s32 *) (p + 0x04) = 0;
    *(s32 *) (p + 0x08) = 0;
    *(s32 *) (p + 0x0C) = 0;
    *(s32 *) (p + 0x10) = 0;
    *(s32 *) (p + 0x14) = 0;
    *(s32 *) (p + 0x18) = 0;
    *(s32 *) (p + 0x1C) = 0;
    *(s32 *) (p + 0x28) = 0;
    *(s32 *) (p + 0x2C) = 0;
    *(s32 *) (p + 0x30) = 0;

    ext = data_0214c9b0;
    prefix = 0;
    switch (arg1) {
    case 0:
        prefix = data_0214c9b8;
        break;
    case 1:
        prefix = data_0214c9cc;
        break;
    case 2:
        prefix = data_0214c9e0;
        break;
    }
    idx = arg2 - 1;
    func_0205ece8(name, 0x40, data_0214c9f4, prefix, idx, ext);
    *(s32 *) (p + 0x08) = func_02006bd0(func_020c7790(name));

    ext = data_0214ca00;
    prefix = 0;
    switch (arg1) {
    case 0:
        prefix = data_0214ca08;
        break;
    case 1:
        prefix = data_0214ca1c;
        break;
    case 2:
        prefix = data_0214ca30;
        break;
    }
    func_0205ece8(name, 0x40, data_0214ca44, prefix, idx, ext);
    *(s32 *) (p + 0x0C) = func_02006b9c(func_020c7790(name));

    ext = data_0214ca50;
    prefix = 0;
    switch (arg1) {
    case 0:
        prefix = data_0214ca58;
        break;
    case 1:
        prefix = data_0214ca6c;
        break;
    case 2:
        prefix = data_0214ca80;
        break;
    }
    func_0205ece8(name, 0x40, data_0214ca94, prefix, idx, ext);
    *(s32 *) (p + 0x10) = func_02006b68(func_020c7790(name));

    *(s32 *) (p + 0x14) = func_02073918(*(s32 *) (p + 0x08), 0);
    *(s32 *) (p + 0x18) = 0x80000;
    *(s32 *) (p + 0x1C) = 0x52000;
    *(s32 *) (p + 0x20) = -0x100000;
    *(s32 *) (p + 0x24) = 0;
    *(s32 *) (p + 0x28) = func_02073918(*(s32 *) (p + 0x08), 1);
    *(s32 *) (p + 0x2C) = 0x80000;
    *(s32 *) (p + 0x30) = 0x82000;
    *(s32 *) (p + 0x34) = 0x100000;
    *(s32 *) (p + 0x38) = 0;
    data_0215a06c = p;
    return (s32) p;
}
