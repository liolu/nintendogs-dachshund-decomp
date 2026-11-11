/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void *func_020038a8(M2C_UNK, M2C_UNK);              /* extern */
M2C_UNK func_020a7924(void *, M2C_UNK);             /* extern */
M2C_UNK func_020ae298(M2C_UNK, void *);             /* extern */
extern M2C_UNK data_0213eb70;
extern M2C_UNK func_020abcf0;
extern M2C_UNK func_020abcfc;
extern M2C_UNK func_020ad4c8;
extern M2C_UNK func_020ad6f8;

void func_020ad91c(void *arg0, M2C_UNK arg1) {
    void *temp_r3;

    func_020a7924(arg0, 0x2B);
    M2C_FIELD(arg0, M2C_UNK **, 0x1F4)   = &func_020ad4c8;
    M2C_FIELD(arg0, M2C_UNK **, 0x1F8)   = &func_020abcfc;
    M2C_FIELD(arg0, M2C_UNK **, 0x1F0)   = &func_020ad6f8;
    M2C_FIELD(arg0, M2C_UNK **, 0x210)   = &func_020abcf0;
    M2C_FIELD(arg0, void **, 0x214)      = func_020038a8(arg1, 0x18);
    temp_r3                              = M2C_FIELD(arg0, void **, 0x214);
    M2C_FIELD(temp_r3, s32 *, 0)         = 0;
    M2C_FIELD(temp_r3, M2C_UNK **, 0x14) = &data_0213eb70;
    func_020ae298(0xB, arg0);
}
