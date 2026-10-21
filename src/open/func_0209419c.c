#include "m2c.h"
extern s32 data_027c01e0[];
extern void func_02080ca4(void);
void func_0209419c(void) {
    s32 i;
    s32 v;
    s32 step;

    v = 0;
    i = 0;
    for (;;) {
        data_027c01e0[i] = v;
        i++;
        if (i >= 0x80) {
            return;
        }
        step = 0x40;
        if (v >= 0x40) {
            do {
                if (step == 0) {
                    func_02080ca4();
                }
                v -= step;
                step /= 2;
            } while (step <= v);
        }
        v += step;
    }
}
