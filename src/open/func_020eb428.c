#include "m2c.h"
extern void *data_02159e70;
void func_020eb428(void) {
    s32 i;
    s32 j;
    u8 *p;

    for (j = 0; j < 4; j++) {
        p = (u8 *) data_02159e70 + 0x283C + (j << 11);
        for (i = 0; i < 0x80; i++) {
            *(u16 *) (p + 6) = 0;
            *(u16 *) (p + 8) = 0;
            *(u16 *) (p + 0xA) = 0;
            *(u16 *) (p + 0xC) = 0;
            p += 0x10;
        }
    }
}
