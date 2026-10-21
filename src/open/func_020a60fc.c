#include "engine.h"
#include "m2c.h"
extern void *data_021555f8;
s32 func_020a73dc(void *);
s32 func_020a60fc(s32 arg0) {
    s32 idx = -1;
    s32 i;
    s32 best;
    s32 a;
    void *p;

    a = arg0;
    if (M2C_FIELD(data_021555f8, s16 *, 0x2C) == 2) {
        best = -1;
        for (i = 0; i < 7; i = (s16) (i + 1)) {
            if ((i < 0) || ((s32) M2C_FIELD(data_021555f8, s16 *, 0x20) <= i)) {
                p = NULL;
            } else {
                p = M2C_FIELD((data_021555f8 + (i * 4)), void **, 4);
            }
            if (p != NULL) {
                if (a == M2C_FIELD(p, s16 *, 0x94)) {
                    if (func_020a73dc(p) != 0) {
                        best = 0xFFFF;
                        idx = i;
                    } else if ((s32) M2C_FIELD(p, u16 *, 0x9E) > best) {
                        best = M2C_FIELD(p, u16 *, 0x9E);
                        idx = i;
                    }
                }
            }
        }
    }
    return idx;
}
