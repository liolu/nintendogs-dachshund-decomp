#include "engine.h"
#include "m2c.h"
extern void *data_02159e38;
void *func_020cf000(s32 *arg0) {
    void *result = NULL;
    s16 i = 0;
    s32 valid;
    s8 *p = (s8 *) M2C_FIELD(data_02159e38, s32 *, 0x1434) + 4;

    do {
        valid = 1;
        if (*(s32 *) p == 0 && *(s32 *) (p + 4) == 0) {
            valid = 0;
        }
        if (valid) {
            if (*(s32 *) p == arg0[0] && *(s32 *) (p + 4) == arg0[1]) {
                result = p;
                break;
            }
        }
        i++;
        p += 0xA4;
    } while (i < 0x32);
    return result;
}
