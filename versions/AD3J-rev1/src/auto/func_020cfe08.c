/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

void func_0211eb9c(void);

extern void *data_02154c78;

void func_020cfe08(s32 arg0, s32 arg1) {
    func_0211eb9c();
    M2C_FIELD(data_02154c78, s16 *, 0)    = 1;
    M2C_FIELD(data_02154c78, s16 *, 6)    = 1;
    M2C_FIELD(data_02154c78, s32 *, 0xC)  = arg0;
    M2C_FIELD(data_02154c78, s32 *, 0x10) = arg1;
    M2C_FIELD(data_02154c78, s16 *, 2)    = 1;
}
