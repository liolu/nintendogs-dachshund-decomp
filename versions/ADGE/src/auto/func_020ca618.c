/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_01ffdf78(M2C_UNK);
void func_02077a28(void);

extern s32 data_02159e24;
extern s32 data_02159e2c;

void func_020ca618(s32 arg0) {
    data_02159e2c                = arg0;
    data_02159e24                = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    func_01ffdf78(arg0);
    func_02077a28();
    data_02159e24                = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = (s32) (M2C_FIELD(arg0, s32 *, 0x1C) + 1);
    data_02159e2c                = 0;
}
