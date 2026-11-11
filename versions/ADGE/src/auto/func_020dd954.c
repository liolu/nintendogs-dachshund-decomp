/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_0208e398(M2C_UNK);
void func_0208f350(M2C_UNK);

void func_020dd954(s32 arg0) {
    func_0208e398(0x31);
    if (arg0 < 3) {
        func_0208f350(0x10);
        return;
    }
    if (arg0 < 7) {
        func_0208f350(0xE);
        return;
    }
    func_0208f350(0xF);
}
