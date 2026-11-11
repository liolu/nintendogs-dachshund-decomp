/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020e1828(void);
M2C_UNK func_020eb5a4(M2C_UNK, M2C_UNK, M2C_UNK);

extern M2C_UNK data_0214d624;
extern void *data_02159e70;

void func_020d9ffc(void) {
    if (M2C_FIELD(data_02159e70, s32 *, 0x4860) == 0) {
        return;
    }
    if (!(M2C_FIELD(&data_0214d624, u16 *, 2) & 2)) {
        return;
    }
    if (func_020eb5a4(2, (s32) M2C_FIELD(&data_0214d624, u8 *, 0), (s32) M2C_FIELD(&data_0214d624, u8 *, 1)) != 0) {
        return;
    }
    func_020e1828();
}
