/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020d6a1c(void);
void func_020eadc0(void);
M2C_UNK func_020eaddc(void);

extern void *data_02159e70;

void func_0209f6b4(void) {
    if (M2C_FIELD(data_02159e70, s32 *, 0xBC) == 0x17) {
        if (func_020eaddc() == 0) {
            return;
        }
        func_020d6a1c();
        func_020eadc0();
        return;
    }
    func_020d6a1c();
}
