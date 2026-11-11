/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

extern s32 data_02154224;
extern s32 data_02154228;
extern M2C_UNK data_0215422c;

s32 func_02088f64(void) {
    if (M2C_FIELD(&data_0215422c, s32 *, 0x30) != 0) {
        return data_02154224;
    }
    return data_02154228;
}
