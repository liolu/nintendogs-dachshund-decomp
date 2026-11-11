/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020b8ab8(M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
s32 func_020bdb98(s32);                             /* extern */
extern M2C_UNK data_0213bdfc;
extern M2C_UNK data_0213be00;
extern M2C_UNK data_0213be04;
extern M2C_UNK data_0213be08;
extern M2C_UNK data_0213be0c;
extern void *data_02153740;

void func_020a5f48(s32 arg0) {
    if (func_020bdb98(arg0 + 4) != 0) {
        M2C_FIELD(data_02153740, s32 *, 0x3534) = 1;
        func_020b8ab8(2, &data_0213be00, 0);
    }
    if (func_020bdb98(arg0 + 0x40) != 0) {
        M2C_FIELD(data_02153740, s32 *, 0x3534) = 2;
        func_020b8ab8(2, &data_0213be08, 0);
    }
    if (func_020bdb98(arg0 + 0x7C) != 0) {
        M2C_FIELD(data_02153740, s32 *, 0x3534) = 3;
        func_020b8ab8(2, &data_0213be0c, 0);
    }
    if (func_020bdb98(arg0 + 0xB8) != 0) {
        M2C_FIELD(data_02153740, s32 *, 0x3534) = 4;
        func_020b8ab8(2, &data_0213be04, 0);
    }
    if (func_020bdb98(arg0 + 0xF4) == 0) {
        return;
    }
    M2C_FIELD(data_02153740, s32 *, 0x3534) = 5;
    func_020b8ab8(2, &data_0213bdfc, 0);
}
