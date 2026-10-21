#include "m2c.h"
extern u8 *data_02159e70;
#pragma opt_strength_reduction off
extern void *data_0215a034;
extern void *data_0215a04c;
extern u8 *data_0214da84;
s32 func_020ec050(s32, u16);
void func_020eb9fc(s32, u16, s32);
void func_020d5a60(s32, s32);
void *func_020038a8(s32 arg0, s32 arg1);
void func_020fdc5c(s32 arg0);
void func_020fd470(void *arg0);
void func_020fdb30(void);
void func_020fe4cc(void);
#pragma opt_strength_reduction off
void func_020eb4ec(void) {
    s32 j;
    s32 i;
    u8 *p;

    for (j = 0; j < 4; j++) {
        p = data_02159e70 + 0x283C + (j << 11);
        for (i = 0; i < 0x80; i++) {
            *(u32 *) p = 0;
            *(u16 *) (p + 6) = 0;
            *(u16 *) (p + 8) = 0;
            *(u16 *) (p + 0xA) = 0;
            *(u16 *) (p + 0xC) = 0;
            *(u16 *) (p + 4) = 0;
            p += 0x10;
        }
    }
}
