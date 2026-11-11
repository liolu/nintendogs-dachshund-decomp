/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

void func_020b8ce8(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);

void func_020b38ec(s32 arg0) {
    s32 temp_r1;

    temp_r1 = M2C_FIELD(arg0, s32 *, 0x870);
    if (temp_r1 <= 0) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x870) = (s32) (temp_r1 - 1);
    if (M2C_FIELD(arg0, s32 *, 0x870) != 0) {
        return;
    }
    func_020b8ce8(2, 5, 0, 0);
    func_020b8ce8(2, 6, 0, 0);
    func_020b8ce8(2, 9, 0, 0);
    func_020b8ce8(2, 7, 0, 0);
    func_020b8ce8(2, 8, 0, 0);
    func_020b8ce8(2, 0xA, 0, 0);
}
