/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void *func_0210634c();                              /* extern */
extern void *data_02153714;

void func_02091fe4(s16 arg0) {
    void *temp_r0;

    M2C_FIELD(data_02153714, s16 *, 0xA) = 1;
    M2C_FIELD(data_02153714, s16 *, 0xC) = arg0;
    if (M2C_FIELD(data_02153714, u16 *, 6) != 1) {
        M2C_FIELD(data_02153714, s16 *, 8) = 1;
        return;
    }
    M2C_FIELD(data_02153714, s16 *, 8) = 0;
    temp_r0                            = func_0210634c();
    M2C_FIELD(temp_r0, u16 *, 0x26)    = (u16) (M2C_FIELD(temp_r0, u16 *, 0x26) ^ 1);
}
