#include "m2c.h"
extern s32 data_0214da7c;
typedef struct {
    s16 a;
    s16 b;
} Pair;
s32 func_0200c488(s32 arg0, s32 arg1) {
    s32 base;
    s16 sum;

    if ((arg1 < 0) || (arg1 >= ((Pair *) M2C_FIELD(data_0214da7c, s32 *, 0x20))[arg0].b)) {
        return 0;
    }
    base = data_0214da7c;
    sum = arg1 + ((Pair *) M2C_FIELD(base, s32 *, 0x20))[arg0].a;
    return M2C_FIELD(base, s32 *, 0x14) + sum * 0x40;
}
