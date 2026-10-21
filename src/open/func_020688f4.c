#include "m2c.h"
extern u16 data_0214f448;
extern s32 data_0213cadc;
extern void func_02068a8c(void);
extern s32 func_0207efdc(void);
extern void func_02080ca4(void);
extern void func_0206c7e4(s32 dmaNo, void *dest, s32 data, u32 size);
extern void func_0206cbf8(u32 value, void *dest, u32 size);
void func_020688f4(void) {
    s32 res;

    *(volatile u16 *) 0x04000304 |= 0x8000;
    *(volatile u16 *) 0x04000304 = (*(volatile u16 *) 0x04000304 & ~0x20E) | 0x20E;
    *(volatile u16 *) 0x04000304 |= 1;

    func_02068a8c();

    if (data_0214f448 == 0) {
        do {
            res = func_0207efdc();
            if (res == -3) {
                func_02080ca4();
            }
            data_0214f448 = res;
        } while (data_0214f448 == 0);
    }

    *(volatile u16 *) 0x04000004 = 0;
    *(volatile u32 *) 0x04000000 = 0;

    if (data_0213cadc != -1) {
        func_0206c7e4(data_0213cadc, (void *) 0x04000008, 0, 0x60);
        *(volatile u16 *) 0x0400006C = 0;
        func_0206c7e4(data_0213cadc, (void *) 0x04001000, 0, 0x70);
    } else {
        volatile u32 zero1 = 0;
        volatile u32 zero2;

        func_0206cbf8(zero1, (void *) 0x04000008, 0x60);
        *(volatile u16 *) 0x0400006C = 0;
        zero2 = 0;
        func_0206cbf8(zero2, (void *) 0x04001000, 0x70);
    }

    *(volatile u16 *) 0x04000020 = 0x100;
    *(volatile u16 *) 0x04000026 = 0x100;
    *(volatile u16 *) 0x04000030 = 0x100;
    *(volatile u16 *) 0x04000036 = 0x100;
    *(volatile u16 *) 0x04001020 = 0x100;
    *(volatile u16 *) 0x04001026 = 0x100;
    *(volatile u16 *) 0x04001030 = 0x100;
    *(volatile u16 *) 0x04001036 = 0x100;
}
