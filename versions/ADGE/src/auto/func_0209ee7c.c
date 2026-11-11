/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_020039e4(void);
void func_020d6a1c(void);
void func_020eadc0(void);
M2C_UNK func_020eaddc(void);

void func_0209ee7c(void) {
    if (func_020eaddc() == 0) {
        return;
    }
    if (func_020039e4() == 0) {
        return;
    }
    func_020d6a1c();
    func_020eadc0();
}
