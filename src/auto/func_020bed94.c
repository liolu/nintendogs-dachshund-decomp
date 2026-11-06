/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020b8ab8(M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK func_020b8b0c(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_020be13c(void *);                      /* extern */
extern M2C_UNK data_02140c14;
extern M2C_UNK data_02140c24;
extern void *data_02153740;

void func_020bed94(void *arg0) {
    M2C_FIELD(arg0, s32 *, 0) = 0;
    if (M2C_FIELD(data_02153740, s32 *, 0xA8) == 7) {
        func_020be13c(arg0 + 0xC4);
        func_020be13c(arg0 + 0xE4);
        func_020be13c(arg0 + 0x104);
    }
    M2C_FIELD(arg0, s32 *, 4) = 0x3C;
    if (M2C_FIELD(data_02153740, s32 *, 0xA8) == 7) {
        func_020b8b0c(0, 0, 1);
    }
    M2C_FIELD(arg0, s32 *, 8) = 0x4C;
    if (M2C_FIELD(data_02153740, s32 *, 0xA8) != 7) {
        return;
    }
    func_020b8ab8(0, &data_02140c24, 1);
    func_020b8ab8(0, &data_02140c14, 0);
}
