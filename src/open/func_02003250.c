#include "m2c.h"

extern u16 data_02124d14[];
extern u16 data_0214d5fc;
extern u8 data_02134f2c[];
extern u8 data_02134f38[];
extern u8 data_02134f44[];
extern u8 data_02134f50[];

void func_02006350(void);
void func_0207eb80(s32, s32);
s32 func_02068d30(void);
void func_02069b2c(s32);
void func_02068800(void);
void func_02068744(void *, s32);
void func_0206878c(s32, s32, s32);
void func_02005e68(s32, s32, void *, s32, ...);
void func_02006018(void);
void func_02005f74(void);
void func_02080180(void);
void func_02005fd4(void);

void func_02003250(s32 *arg0) {
    s32 found;
    s16 i;
    u16 v;
    u16 m;
    s32 j;

    found = 0;
    i = 0;
    do {
        func_02006350();
        v = data_0214d5fc;
        if ((u16) (v & 0xFF3) != 0) {
            m = data_02124d14[i];
            if ((u16) (v & m) == m) {
                i = (s16) (i + 1);
                if (i >= 10) {
                    found = 1;
                }
            } else {
                i = 0;
            }
        }
        func_0207eb80(1, 1);
    } while (found == 0);

    if (func_02068d30() == 0) {
        func_02069b2c(4);
    }
    func_02068800();
    func_02068744((void *) 0x0400006C, 0);
    func_0206878c(1, 0, 1);
    *(volatile u32 *) 0x04000000 = (*(volatile u32 *) 0x04000000 & ~0x1F00) | 0x300;
    *(volatile u16 *) 0x0400000A = (*(volatile u16 *) 0x0400000A & 0x43) | 0x400;
    *(volatile u16 *) 0x0400000A &= ~3;
    *(volatile u16 *) 0x0400000A &= ~0x40;
    func_02006018();
    func_02005f74();

    for (j = 0; j < 0xD; j++) {
        func_02005e68(0, (u8) j, &data_02134f2c, j, arg0[j + 1]);
    }
    func_02005e68(0, 0x12, &data_02134f38, arg0[0xE]);
    func_02005e68(0, 0x13, &data_02134f44, arg0[0xF]);
    func_02005e68(0, 0x14, &data_02134f50, arg0[0x10]);
    func_02080180();

    for (;;) {
        func_02005fd4();
    }
}
