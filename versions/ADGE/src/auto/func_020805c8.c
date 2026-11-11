/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020802d0(M2C_UNK, M2C_UNK);
void func_020802e4(M2C_UNK, M2C_UNK);
M2C_UNK func_020802f8(M2C_UNK);
M2C_UNK func_020803e0(M2C_UNK);

extern s32 data_021540bc;

void func_020805c8(void) {
    if (data_021540bc != 0) {
        return;
    }
    data_021540bc = 1;
    func_020802e4(0, func_020803e0(0));
    func_020802d0(0, func_020802f8(0));
    func_020802d0(2, 0);
    func_020802e4(2, 0);
    func_020802e4(3, func_020803e0(3));
    func_020802d0(3, func_020802f8(3));
    func_020802e4(4, func_020803e0(4));
    func_020802d0(4, func_020802f8(4));
    func_020802e4(5, func_020803e0(5));
    func_020802d0(5, func_020802f8(5));
    func_020802e4(6, func_020803e0(6));
    func_020802d0(6, func_020802f8(6));
}
