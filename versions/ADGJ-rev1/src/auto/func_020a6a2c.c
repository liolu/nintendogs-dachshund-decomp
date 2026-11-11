/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020a3aec(M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK func_020a43f8();                            /* extern */
s32 func_020a86e8(M2C_UNK, M2C_UNK, s32, M2C_UNK, s32, s32, s32, s32, s32, s32); /* extern */
M2C_UNK func_020b7ee0();                            /* extern */
s32 func_020b7efc();                                /* extern */
M2C_UNK func_020b9520(M2C_UNK, s32, M2C_UNK, M2C_UNK); /* extern */
extern M2C_UNK data_0213c0ec;
extern void *data_02153740;

void func_020a6a2c(void *arg0) {
    if ((M2C_FIELD(data_02153740, s32 *, 0xBC) == 0xB) && (func_020b7efc() == 0)) {
        return;
    }
    func_020a43f8();
    func_020b7ee0();
    func_020a3aec(0xB, &data_0213c0ec, 3);
    func_020b9520(3, M2C_FIELD(data_02153740, s32 *, 0xFC4), 0, 0x800);
    M2C_FIELD(arg0, s32 *, 0x760) = -0xFF;
    M2C_FIELD(arg0, s32 *, 0x768) = 1;
    M2C_FIELD(arg0, s32 *, 0x764) =
        func_020a86e8(0, 3, M2C_FIELD(data_02153740, s32 *, 0xFC4), 5, 0xA, 0x16, 8, 0xE0, 0, 0xE0);
}
