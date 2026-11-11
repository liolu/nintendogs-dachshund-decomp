/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_0206d274(M2C_UNK, M2C_UNK);
void func_0206d29c(M2C_UNK, M2C_UNK);
M2C_UNK func_0207fd10(void);
void func_02080c98(M2C_UNK);
void func_020c5414(M2C_UNK, M2C_UNK);

void func_020c53a8(void) {
    func_0206d29c(7, (s32) func_020c5414);
    if (func_0207fd10() != 0) {
        return;
    }
    if (func_0206d274(7, 1) != 0) {
        return;
    }
    do {
        func_02080c98(0x64);
    } while (func_0206d274(7, 1) == 0);
}
