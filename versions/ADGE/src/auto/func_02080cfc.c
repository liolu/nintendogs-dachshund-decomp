/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_0206d090(void);
M2C_UNK func_0206d274(M2C_UNK, M2C_UNK);
void func_0206d29c(M2C_UNK, M2C_UNK);
void func_02080cb8(M2C_UNK, M2C_UNK);

extern u16 data_02154184;

void func_02080cfc(void) {
    if (data_02154184 != 0) {
        return;
    }
    data_02154184 = 1;
    func_0206d090();
    do {

    } while (func_0206d274(0xC, 1) == 0);
    func_0206d29c(0xC, (s32) func_02080cb8);
}
