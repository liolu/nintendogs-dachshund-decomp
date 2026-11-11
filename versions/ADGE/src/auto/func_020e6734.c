/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020ebbdc(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);

void func_020e6734(s32 arg0) {
    s32 temp_r1;

    temp_r1 = M2C_FIELD(arg0, s32 *, 0x870);
    if (temp_r1 <= 0) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x870) = (s32) (temp_r1 - 1);
    if (M2C_FIELD(arg0, s32 *, 0x870) != 0) {
        return;
    }
    func_020ebbdc(2, 5, 0, 0);
    func_020ebbdc(2, 6, 0, 0);
    func_020ebbdc(2, 9, 0, 0);
    func_020ebbdc(2, 7, 0, 0);
    func_020ebbdc(2, 8, 0, 0);
    func_020ebbdc(2, 0xA, 0, 0);
}
