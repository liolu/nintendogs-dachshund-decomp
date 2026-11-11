/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_020cef48(void);
void func_020dce6c(M2C_UNK);
void func_020eb9fc(M2C_UNK, M2C_UNK, M2C_UNK);

extern void *data_02159e70;

void func_020e13f4(void) {
    s32 temp_r0;

    if (data_02159e70 == NULL) {
        return;
    }
    func_020eb9fc(3, 0, 1);
    temp_r0                                  = func_020cef48();
    M2C_FIELD(data_02159e70, s32 *, 0x11158) = temp_r0;
    func_020dce6c(temp_r0);
}
