#include "m2c.h"

extern int data_0214f574;

M2C_UNK func_02080c28(void);
void func_02080c3c(M2C_UNK);
s32 func_02070118(void);

s32 func_0206fc80(u32 mask) {
    s32 i;
    s32 ret;
    s32 state;
    u8 *p;
    u16 bit;
    void (*h)(u8 *);

    ret = 0;
    state = func_02080c28();
    if (data_0214f574 == 1) {
        p = (u8 *) func_02070118();
        if (*(u32 *) p != 0) {
            for (i = 0; i < 0x10; i++) {
                bit = (u16) (1 << i);
                if (mask & (*(volatile u16 *) (p + 8) & bit)) {
                    volatile u16 *flags = (volatile u16 *) (p + 8);

                    ret = 1;
                    *flags = *flags & ~bit;
                    *(u32 *) (p + 4) = 0x10;
                    *(u16 *) (p + 0xA) = bit;
                    h = *(void (**)(u8 *)) (p + 0x10);
                    if (h != 0) {
                        h(p);
                    }
                }
            }
            *(u32 *) p = 0;
        }
    }
    func_02080c3c(state);
    return ret;
}
