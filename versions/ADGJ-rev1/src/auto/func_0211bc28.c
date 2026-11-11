/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020c2228(M2C_UNK *);                       /* extern */
s32 func_0210614c();                                /* extern */
M2C_UNK func_0211a6a8(void *);                      /* extern */
M2C_UNK func_0211a6b8(void *, s32);                 /* extern */
M2C_UNK func_0211a6c0();                            /* extern */
extern M2C_UNK data_021490e4;
extern M2C_UNK data_021490fc;
extern M2C_UNK data_02149114;
extern M2C_UNK data_0214912c;

void func_0211bc28(void *arg0) {
    func_0211a6c0();
    if (func_0210614c() == 6) {
        M2C_FIELD(arg0, s32 *, 0x38) = func_020c2228(&data_021490e4);
    } else if (func_0210614c() == 9) {
        M2C_FIELD(arg0, s32 *, 0x38) = func_020c2228(&data_021490fc);
    } else if (func_0210614c() == 0xC) {
        M2C_FIELD(arg0, s32 *, 0x38) = func_020c2228(&data_02149114);
    } else if (func_0210614c() == 0xD) {
        M2C_FIELD(arg0, s32 *, 0x38) = func_020c2228(&data_0214912c);
    }
    func_0211a6b8(arg0, M2C_FIELD(arg0, s32 *, 0x38));
    func_0211a6a8(arg0);
}
