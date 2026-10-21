#include "m2c.h"
s32 func_0207dd68(M2C_UNK arg0, M2C_UNK arg1) {
    s32 *base;
    s32 *node;

    base = (s32 *) (arg0 + 0x24);
    node = (s32 *) base[2];
    if ((arg1 != 0) && (node != 0)) {
        do {
            if (node[0] == arg1) {
                break;
            }
            node = (s32 *) node[3];
        } while (node != 0);
    }
    if (node == 0) {
        return 0;
    }
    base[0] = node[1];
    base[1] = node[2];
    base[2] = node[3];
    return 1;
}
