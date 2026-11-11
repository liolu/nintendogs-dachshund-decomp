/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_0206a220(void);
void func_0206c660(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void func_0206cbdc(M2C_UNK, M2C_UNK, M2C_UNK);

extern s32 data_0213cadc;

void func_0206b7ec(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_ip;

    temp_ip = func_0206a220();
    if ((data_0213cadc != -1) && ((u32) arg2 > 0x1CU)) {
        func_0206c660(data_0213cadc, arg0, temp_ip + arg1, arg2);
        return;
    }
    func_0206cbdc(arg0, temp_ip + arg1, arg2);
}
