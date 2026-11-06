/* compiler: 1.2/sp2p3 */
#include "m2c.h"
void func_0207d850(void *arg0, s32 arg1) {
    u16 temp_ip;
    temp_ip                                    = M2C_FIELD(arg0, u16 *, 0xA);
    M2C_FIELD((u8 *) arg1 + temp_ip, s32 *, 4) = 0;
    *(s32 *) ((u8 *) arg1 + temp_ip)           = 0;
    M2C_FIELD(arg0, s32 *, 0)                  = arg1;
    M2C_FIELD(arg0, s32 *, 4)                  = arg1;
    M2C_FIELD(arg0, u16 *, 8)                  = (u16) (M2C_FIELD(arg0, u16 *, 8) + 1);
}
