/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern s16 data_0213b3c0;
extern s16 data_0214e9ac;

void func_02069c44(void) {
    s32 temp_ip;

    temp_ip             = *(s32 *) 0x04000000;
    data_0213b3c0       = 0;
    data_0214e9ac       = (s16) ((u32) (temp_ip & 0x30000) >> 0x10);
    *(s32 *) 0x04000000 = temp_ip & ~0x30000;
}
