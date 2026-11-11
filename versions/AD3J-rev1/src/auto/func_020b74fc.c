/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

void func_020ab0d8(void);
M2C_UNK func_020b7488(M2C_UNK);
void func_020b8b0c(M2C_UNK, M2C_UNK, M2C_UNK);
void func_020be13c(M2C_UNK);

void func_020b74fc(s32 arg0) {
    *(M2C_UNK *) arg0 = 0;
    if (func_020b7488(arg0 + 0x8F4) != 0) {
        func_020b8b0c(2, 6, 0);
        return;
    }
    func_020ab0d8();
    func_020be13c(arg0 + 0xB8);
    func_020be13c(arg0 + 0xD8);
    func_020be13c(arg0 + 0xF8);
}
