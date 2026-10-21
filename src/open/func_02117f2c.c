#include "m2c.h"

extern s8 *data_02159e70;
extern s8 *data_02159e64;
void func_02116da0();
s32 func_02114aec();
void func_02118028();
s32 func_02116cb4();
void func_02116f14();
void func_02117964();
void func_020d8fd0();

void func_02117f2c(void *arg0) {
    s32 r2;

    switch (*(s16 *) ((u8 *) arg0 + 0x2E)) {
    case 0:
        func_02116da0(arg0);
        return;
    case 1:
        r2 = 0;
        if (*(s32 *) (data_02159e70 + 0xB8) != 0xC) {
            r2 = func_02114aec(arg0);
        }
        if (r2 != 0) {
            return;
        }
        if (*(s16 *) ((u8 *) arg0 + 0x2A) == 1) {
            if (*(s32 *) (data_02159e64 + 0xA4) != 0) {
                *(u16 *) ((u8 *) arg0 + 0x2A) = 0;
                *(s32 *) (data_02159e70 + 0x486C) = 0;
                func_020d8fd0();
            }
        } else {
            func_02118028(arg0);
        }
        return;
    case 2:
    case 3:
        break;
    case 4:
        if (func_02116cb4(arg0) == 0) {
            return;
        }
        func_02116f14(arg0);
        if (*(s16 *) ((u8 *) arg0 + 0x26) != 6) {
            return;
        }
        func_02117964(arg0);
        return;
    default:
        return;
    }
}
