#include "m2c.h"

typedef struct {
    s32 w[11];
} Entry;


typedef struct {
    u32 w[11];
} Entry2C;

s32 func_020baef0(s32 *arg0, s32 arg1, Entry2C *arg2, s32 arg3);

s32 func_020baef0(s32 *arg0, s32 arg1, Entry2C *arg2, s32 arg3) {
    Entry2C *base = (Entry2C *) ((u8 *) arg0 + 0x20);
    s32 count = *arg0;
    s32 i;

    if (count - 1 < arg3) {
        *arg0 = count + 1;
        for (i = *arg0 - 2; i >= arg1 + 1; i--) {
            base[i + 1] = base[i];
        }
        base[arg1 + 1] = *arg2;
        return 1;
    }
    return 0;
}
