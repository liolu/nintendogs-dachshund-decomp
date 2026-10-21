#include "m2c.h"

extern void *data_02159e6c;

s32 func_02002330(void);
s32 func_0200234c(s32);
void func_0200412c(void);
s32 func_020c0e08(void);
s32 func_020c186c(void);
s32 func_020cec94(void);
s32 func_02089050(void);
void func_0208feac(void);
void func_02089098(void);
void func_02003fa4(void);
void func_02003e4c(void);

void func_020d5430(void) {
    s32 active = 1;
    s32 a = 0;
    s16 timer = 0;
    s32 mode = 0;
    s32 b = 0;
    s32 r;

    if (func_02002330() == 1) {
        while (func_0200234c(0) == 0) {
        }
    }
    *(volatile u16 *) 0x04000304 &= ~0x20E;
    for (;;) {
        func_0200412c();
        r = func_020c0e08();
        if (r == 0) {
            r = func_020c186c();
            if (r == 0) {
                goto do_else;
            }
        }
        r = func_020cec94();
        if (r == 1) {
            if (timer <= 0) {
                mode = 1;
                timer = 0xE10;
            }
        } else {
        do_else:
            if (data_02159e6c != NULL && M2C_FIELD(data_02159e6c, s16 *, 4) != 0) {
                if (b == 0) {
                    mode = 2;
                    b = 1;
                }
            }
        }
        if (timer > 0) {
            timer--;
        }
        if (a == 0) {
            if (mode != 0) {
                if (func_02002330() == 0) {
                    while (func_0200234c(1) == 0) {
                    }
                }
                a = 1;
            }
        } else {
            switch (mode) {
            case 1:
                func_0208feac();
                break;
            case 2:
                func_02089098();
                break;
            }
            mode = 0;
            if (func_02089050() == 0) {
                if (func_02002330() == 1) {
                    while (func_0200234c(0) == 0) {
                    }
                }
                a = 0;
            }
        }
        if (((*(u16 *) 0x027fffa8 & 0x8000) >> 0xF) == 0) {
            active = 0;
        }
        func_02003fa4();
        func_02003e4c();
        if (active == 0) {
            break;
        }
    }
    *(volatile u16 *) 0x04000304 = (*(volatile u16 *) 0x04000304 & ~0x20E) | 0x20E;
    if (func_02002330() == 0) {
        while (func_0200234c(1) == 0) {
        }
    }
}
