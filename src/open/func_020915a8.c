#include "m2c.h"

typedef struct {
    u8 pad[2];
    s16 val;
} Slot;

extern u8 data_02154520[];
s32 func_0204474c(s32 arg0, s32 arg1);

s32 func_020915a8(s32 arg0, s32 arg1) {
    Slot *table;
    s16 count;
    s16 i;
    s16 v1;
    s16 v2;
    s32 diff;
    Slot *base;

    table = (Slot *) data_02154520;
    count = 0;
    base = (Slot *) func_0204474c(arg0, arg1);
    i = 0;
    while (i < 0x10) {
        v1 = base[i].val;
        v2 = table[i].val;
        if (v2 == v1) {
            goto check;
        }
        if (v1 == -1) {
            if (v2 != -1) {
                count++;
                goto check;
            }
        }
        if (v2 == -1) {
            if (v1 != -1) {
                count++;
                goto check;
            }
        }
        diff = v1 - v2;
        if (diff <= 2) {
            if (diff >= -2) {
                count++;
                goto check;
            }
        }
        if (diff <= 2) {
            if (diff >= -2) {
                goto check;
            }
        }
        return 0;
    check:
        if (count > 1) {
            return 0;
        }
        i++;
    }
    return 1;
}
