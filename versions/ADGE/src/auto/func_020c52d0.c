/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_0208016c(M2C_UNK);
void func_020c5a70(void);
void func_020c5c38(void);

extern s32 data_02156f80;
extern M2C_UNK data_02156f84;

void func_020c52d0(void) {
    if (data_02156f80 != 0) {
        return;
    }
    data_02156f80 = 1;
    func_0208016c((s32) &data_02156f84);
    func_020c5a70();
    func_020c5c38();
}
