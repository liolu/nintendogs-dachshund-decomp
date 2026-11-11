/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_02072100(M2C_UNK);
void func_0207dd68(M2C_UNK, M2C_UNK);
M2C_UNK func_0207ddc4(M2C_UNK, M2C_UNK);

s32 func_02072278(s32 arg0) {
    if (func_0207ddc4(M2C_FIELD(arg0, s32 *, 0), (s32) M2C_FIELD(arg0, u16 *, 0xC)) == 0) {
        return -1;
    }
    if (func_02072100(arg0) != 0) {
        return M2C_FIELD(arg0, u16 *, 0xC) - 1;
    }
    func_0207dd68(M2C_FIELD(arg0, s32 *, 0), 0);
    return -1;
}
