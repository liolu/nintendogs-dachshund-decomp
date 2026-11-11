#include "engine.h"
#include "m2c.h"
extern void *data_0214da84;
s32 func_0204474c(s32 arg0, s32 arg1) {
    s8 *base = (s8 *) data_0214da84;

    if (M2C_FIELD(base + arg0, s8 *, 0x19) != 0) {
        return (s32) (base + 0x64C8 + arg0 * 0x500 + arg1 * 0x40);
    }
    return 0;
}
