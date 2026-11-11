/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_02003c48(M2C_UNK);
void func_020d2c38(void);
void func_020d60e4(M2C_UNK, M2C_UNK, M2C_UNK);

extern M2C_UNK data_0213ddc0;
extern void *data_02159e70;

void func_0209da34(s32 arg0) {
    s32 temp_r0;

    func_020d60e4(M2C_FIELD(arg0, s32 *, 0x934), (s32) &data_0213ddc0, 2);
    func_020d2c38();
    temp_r0 = M2C_FIELD(data_02159e70, s32 *, 0xB4);
    if ((temp_r0 != 0x19) && (temp_r0 != 0x1B)) {
        return;
    }
    func_02003c48(0xA);
}
