/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020dd8e4(void);
M2C_UNK func_020ea364(M2C_UNK);
void func_020eb9fc(M2C_UNK, M2C_UNK, M2C_UNK);
void func_020f1098(M2C_UNK);

void func_020ea3d8(s32 arg0) {
    *(M2C_UNK *) arg0 = 0;
    if (func_020ea364(arg0 + 0x1C84) != 0) {
        func_020eb9fc(2, 6, 0);
        return;
    }
    func_020dd8e4();
    func_020f1098(arg0 + 0xB8);
    func_020f1098(arg0 + 0xD8);
    func_020f1098(arg0 + 0xF8);
}
