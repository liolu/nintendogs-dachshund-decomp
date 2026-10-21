#include "m2c.h"

extern u8 * volatile data_0214da84;

void func_02036054(void) {
    s16 i;
    s16 j;
    void *p;
    s16 k;

    for (i = 0; i < 7; i = (s16) (i + 1)) {
        for (j = 0; j < 3; j = (s16) (j + 1)) {
            if ((j < 0) || (j >= 3)) {
                p = NULL;
            } else {
                p = M2C_FIELD((data_0214da84 + (j * 4)), void **, 0x54);
            }
            if (p != NULL) {
                for (k = 0; k < 2; k = (s16) (k + 1)) {
                    if (M2C_FIELD((u8 *) (s32) p + (k * 2), s16 *, 0x140) == (s16) (i + 3)) {
                        M2C_FIELD((u8 *) p + (k * 2), s16 *, 0x140) = -1;
                    }
                }
            }
        }
    }
}
