#include "m2c.h"
#include "engine.h"
s32 func_0205df50(s32);
extern void *data_0214cd98;
extern void (*data_02134f5c)(void);
extern u64 func_02080978(void);
extern void func_0206a91c(void);
s32 func_01ffdb08(s32 arg0);
s32 func_02028120(s32 base);
void func_02005c84(u8 *arg0) {
    s16 *p = (s16 *) arg0;
    s16 lim;
    s16 v;

    switch (*(u16 *) (arg0 + 4)) {
        case 0:
            break;
        case 1:
            p[4]++;
            lim = *(volatile s16 *) (arg0 + 0xa);
            v = *(volatile s16 *) (arg0 + 8);
            if (v >= lim) {
                *(u16 *) (arg0 + 4) = 2;
                p[0xC] = 0;
            } else {
                p[0xC] = 0x10 - func_0205df50(v << 4);
            }
            if (*(u16 *) (arg0 + 6) == 0) {
                p[0xC] = -p[0xC];
            }
            return;
        case 2:
            p[0xC] = 0;
            return;
        case 3:
            p[4]++;
            lim = *(volatile s16 *) (arg0 + 0xa);
            v = *(volatile s16 *) (arg0 + 8);
            if (v >= lim) {
                *(u16 *) (arg0 + 4) = 0;
                p[0xC] = 0x10;
            } else {
                p[0xC] = func_0205df50(v << 4);
            }
            if (*(u16 *) (arg0 + 6) == 0) {
                p[0xC] = -p[0xC];
            }
            return;
    }
}
