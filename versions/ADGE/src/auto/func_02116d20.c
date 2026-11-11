/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_02003bd4(void);
void func_02003c00(M2C_UNK);
void func_0208ff8c(M2C_UNK);

void func_02116d20(s32 arg0, s32 arg1) {
    M2C_FIELD(arg0, s16 *, 0x2C) = (s16) arg1;
    if (arg1 & 1) {
        func_02003bd4();
        if (((s32) (*(u16 *) 0x04000304 & 0x8000) >> 0xF) == 1) {
            func_0208ff8c(0x28);
            return;
        }
        func_0208ff8c(0x44);
        return;
    }
    if (!(arg1 & 2)) {
        return;
    }
    func_02003c00(0x14);
}
