/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020d6450(void *);                      /* extern */
M2C_UNK func_0210fe58(void *, s32, void *, void *, s32, M2C_UNK *, s32, M2C_UNK *, M2C_UNK *, M2C_UNK *); /* extern */
s32 func_02111cbc(u16, s32);                        /* extern */
M2C_UNK func_02112640(void *, s32, s32, s32, s32, s32, s32); /* extern */
extern M2C_UNK func_020d6520;
extern M2C_UNK func_020d652c;
extern M2C_UNK func_020d6548;
extern M2C_UNK func_020d657c;

void func_020d6388(void *arg0) {
    void *temp_r3;

    temp_r3 = *M2C_FIELD(arg0, void ***, 0x214);
    func_02112640(arg0, M2C_FIELD(temp_r3, s32 *, 0x48), M2C_FIELD(temp_r3, s32 *, 0x4C), M2C_FIELD(temp_r3, s32 *, 0x50),
                  M2C_FIELD(temp_r3, s32 *, 0x54), M2C_FIELD(temp_r3, s32 *, 0x58), 4);
    func_020d6450(arg0);
    func_0210fe58(arg0, M2C_FIELD(arg0, s32 *, 0xF8), arg0 + 0xFC, arg0 + 0x108,
                  func_02111cbc(M2C_FIELD(arg0, u16 *, 0xA0), M2C_FIELD(arg0, s32 *, 0xF8)), &func_020d657c, 0, &func_020d6548,
                  &func_020d652c, &func_020d6520);
}
