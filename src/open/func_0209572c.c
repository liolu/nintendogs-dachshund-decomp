#include "m2c.h"
extern u32 data_0213d170;
extern u8 data_021546a4[];
void func_0208ff8c(s32);
s32 func_0209572c(s32 arg0) {
    u8 *base = data_021546a4 + arg0 * 0x88;
    u32 bit;
    s32 old = -1;

    if (data_0213d170 == 0) {
        return -1;
    }
    bit = 1 << arg0;
    if (data_0213d170 & bit) {
        old = *(s32 *) (base + 0x80) ? *(s32 *) base
                                     : *(s32 *) (base + 0x84);
        *(s32 *) (base + 0x80) = 0;
        *(s32 *) (base + 0x84) = -1;
    }
    data_0213d170 ^= bit;
    return old;
}
