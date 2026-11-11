/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

extern s32 data_0213d178;
extern u8 data_021545e8;
extern s32 data_0215460c;

s32 func_020969e4(void) {
    if ((data_021545e8 == 5) || (data_021545e8 == 6) || (data_0215460c != 0)) {
        return -0xB;
    }
    return data_0213d178;
}
