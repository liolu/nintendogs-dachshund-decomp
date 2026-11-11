/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0206b404();                                /* extern */
M2C_UNK func_0206db60(s32, M2C_UNK, s32, u32);      /* extern */
M2C_UNK func_0206e004(M2C_UNK, s32, u32);           /* extern */
extern s32 data_0213b3c4;

void func_0206c974(M2C_UNK arg0, s32 arg1, u32 arg2) {
    s32 temp_ip;

    temp_ip = func_0206b404();
    if ((data_0213b3c4 != -1) && (arg2 > 0x30U)) {
        func_0206db60(data_0213b3c4, arg0, temp_ip + arg1, arg2);
        return;
    }
    func_0206e004(arg0, temp_ip + arg1, arg2);
}
