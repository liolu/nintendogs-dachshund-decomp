/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_0200196c(M2C_UNK, M2C_UNK, M2C_UNK);
void func_0206d090(void);
M2C_UNK func_0206d274(M2C_UNK, M2C_UNK);
void func_0206d29c(M2C_UNK, M2C_UNK);

extern u16 data_0214cca0;
extern M2C_UNK data_0214cca4;

void func_020018dc(void) {
    if (data_0214cca0 != 0) {
        return;
    }
    data_0214cca0 = 1;
    func_0206d090();
    M2C_FIELD(&data_0214cca4, s16 *, 0x32) = 0;
    M2C_FIELD(&data_0214cca4, s16 *, 0x36) = 0;
    M2C_FIELD(&data_0214cca4, s16 *, 0xC)  = 0;
    M2C_FIELD(&data_0214cca4, s32 *, 0)    = 0;
    M2C_FIELD(&data_0214cca4, s32 *, 0x10) = 0;
    M2C_FIELD(&data_0214cca4, s16 *, 0x30) = 0;
    M2C_FIELD(&data_0214cca4, s16 *, 0x34) = 0;
    do {

    } while (func_0206d274(6, 1) == 0);
    func_0206d29c(6, (s32) func_0200196c);
}
