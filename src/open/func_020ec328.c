#include "m2c.h"
#include "engine.h"
extern void *data_02159e70;
extern u16 func_020ebcf0(void *);
void func_020ec328(s32 arg0, void *arg1) {
    u8 *e = (u8 *) data_02159e70 + 0x1DEC + arg0 * 0x294;
    u16 i;

    if (arg1 == 0) {
        *(s32 *) (e + 0x8) = 0;
        *(s32 *) (e + 0x0) = 0;
        *(u16 *) (e + 0x20) = 0;
        *(u16 *) (e + 0x22) = 0;
        return;
    }
    *(void **) (e + 0x8) = arg1;
    *(s32 *) (e + 0x0) = 1;
    *(u16 *) (e + 0x20) = *(u16 *) ((u8 *) *(void **) (e + 0x8) + 6);
    *(u16 *) (e + 0x22) = func_020ebcf0(e);
    arg0 <<= 11;
    for (i = 0; i < *(u16 *) (e + 0x20); i++) {
        s32 *slot = (s32 *) (arg0 + (s32) data_02159e70 + i * 0x10 + 0x283C);
        *slot = 1;
    }
}
