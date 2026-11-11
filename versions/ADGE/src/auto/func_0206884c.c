/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

extern s16 data_0213cad8;
extern s16 data_0214f44c;

void func_0206884c(void) {
    s32 temp_ip;

    temp_ip             = *(s32 *) 0x04000000;
    data_0213cad8       = 0;
    data_0214f44c       = (s16) ((u32) (temp_ip & 0x30000) >> 0x10);
    *(s32 *) 0x04000000 = temp_ip & ~0x30000;
}
