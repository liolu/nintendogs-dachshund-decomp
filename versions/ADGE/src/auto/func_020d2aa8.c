/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_0208870c(M2C_UNK, M2C_UNK);

extern M2C_UNK data_02130ea8;
extern s32 data_02143c58;

void func_020d2aa8(void) {
    if (data_02143c58 == -1) {
        return;
    }
    func_0208870c(0, *((M2C_UNK *) ((s8 *) &data_02130ea8 + (data_02143c58 * 8))));
    data_02143c58 = -1;
}
