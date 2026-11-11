/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020bf1c4(void);

extern void *data_02159e6c;

void func_020d569c(s32 arg0, s32 arg1) {
    func_020bf1c4();
    M2C_FIELD(data_02159e6c, s16 *, 0)    = 1;
    M2C_FIELD(data_02159e6c, s16 *, 6)    = 1;
    M2C_FIELD(data_02159e6c, s32 *, 0xC)  = arg0;
    M2C_FIELD(data_02159e6c, s32 *, 0x10) = arg1;
    M2C_FIELD(data_02159e6c, s16 *, 2)    = 1;
}
