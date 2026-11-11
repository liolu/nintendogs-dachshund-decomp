/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_01ffdb08();                                /* extern */
s32 func_02033ee8();                                /* extern */
M2C_UNK func_020afc84(void *, s32, void *, void *, s32, M2C_UNK *, s32, M2C_UNK *, M2C_UNK *, M2C_UNK *); /* extern */
M2C_UNK func_020aff08(void *, s32, void *, void *, s32, M2C_UNK *, s32, M2C_UNK *, M2C_UNK *, M2C_UNK *); /* extern */
s32 func_020b1d6c(u16, s32);                        /* extern */
M2C_UNK func_020c2b8c(M2C_UNK);                     /* extern */
extern M2C_UNK func_020ac754;
extern M2C_UNK func_020ac82c;
extern M2C_UNK func_020ac8bc;
extern M2C_UNK func_020ac96c;

void func_020abf28(void *arg0) {
    func_020c2b8c(-1);
    if ((func_01ffdb08() != 0) && (func_02033ee8() != 0)) {
        func_020afc84(arg0, M2C_FIELD(arg0, s32 *, 0xF8), arg0 + 0xFC, arg0 + 0x108,
                      func_020b1d6c(M2C_FIELD(arg0, u16 *, 0xA0), M2C_FIELD(arg0, s32 *, 0xF8)), &func_020ac96c, 0,
                      &func_020ac8bc, &func_020ac82c, &func_020ac754);
        return;
    }
    func_020aff08(arg0, M2C_FIELD(arg0, s32 *, 0xF8), arg0 + 0xFC, arg0 + 0x108,
                  func_020b1d6c(M2C_FIELD(arg0, u16 *, 0xA0), M2C_FIELD(arg0, s32 *, 0xF8)), &func_020ac96c, 0, &func_020ac8bc,
                  &func_020ac82c, &func_020ac754);
}
