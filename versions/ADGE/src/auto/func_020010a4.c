/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_02000dec(void);
void func_02000e4c(M2C_UNK, M2C_UNK);
void func_02000eac(M2C_UNK, M2C_UNK);
void func_02000ee8(void);
void func_0206d090(void);
M2C_UNK func_0206d274(M2C_UNK, M2C_UNK);
void func_0206d29c(M2C_UNK, M2C_UNK);

extern s32 data_0214cbc8;
extern s32 data_0214cbcc;

void func_020010a4(void) {
    if (data_0214cbc8 != 0) {
        return;
    }
    data_0214cbc8 = 1;
    func_02000dec();
    func_0206d090();
    do {

    } while (func_0206d274(0xD, 1) == 0);
    func_0206d29c(0xD, (s32) func_02000eac);
    func_02000ee8();
    func_0206d29c(0xD, 0);
    func_0206d29c(0xD, (s32) func_02000e4c);
    data_0214cbcc = 0;
}
