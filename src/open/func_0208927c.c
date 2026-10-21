#include "m2c.h"
extern s32 data_0215422c;
extern s16 data_02154234[];
void func_020721a0(void *a);
s32 func_0208927c(s32 arg0) {
    M2C_UNK *p = &data_0215422c;
    s16 *base = data_02154234;
    s32 i;
    s32 j;

    if (arg0 >= 0) {
        do {
            if (base[arg0] == -1) {
                continue;
            }
            func_020721a0((void *) *p);
            for (i = 0; i < arg0; i++) {
                if (base[i] > base[arg0]) {
                    base[i] = -1;
                }
            }
            for (j = arg0 + 1; j < 5; j++) {
                if (base[j] > base[arg0]) {
                    base[j] = -1;
                }
            }
            return 1;
        } while (--arg0 >= 0);
    }
    return 0;
}
