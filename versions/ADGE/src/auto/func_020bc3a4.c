/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_020a5dcc(void);
void func_020bae1c(M2C_UNK);
void func_020bae2c(M2C_UNK, M2C_UNK);
void func_020bae34(M2C_UNK);
M2C_UNK func_020c7790(M2C_UNK);

extern M2C_UNK data_0213ef20;
extern M2C_UNK data_0213ef38;
extern M2C_UNK data_0213ef50;
extern M2C_UNK data_0213ef68;

void func_020bc3a4(s32 arg0) {
    func_020bae34(arg0);
    if (func_020a5dcc() == 6) {
        M2C_FIELD(arg0, s32 *, 0x38) = func_020c7790((s32) &data_0213ef20);
    } else if (func_020a5dcc() == 9) {
        M2C_FIELD(arg0, s32 *, 0x38) = func_020c7790((s32) &data_0213ef38);
    } else if (func_020a5dcc() == 0xC) {
        M2C_FIELD(arg0, s32 *, 0x38) = func_020c7790((s32) &data_0213ef50);
    } else if (func_020a5dcc() == 0xD) {
        M2C_FIELD(arg0, s32 *, 0x38) = func_020c7790((s32) &data_0213ef68);
    }
    func_020bae2c(arg0, M2C_FIELD(arg0, s32 *, 0x38));
    func_020bae1c(arg0);
}
