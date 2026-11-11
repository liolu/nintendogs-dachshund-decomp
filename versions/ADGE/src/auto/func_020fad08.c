/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_02081310(M2C_UNK, M2C_UNK);

extern s32 *data_0215a02c;

void func_020fad08(s32 arg0) {
    if (data_0215a02c == NULL) {
        return;
    }
    func_02081310(*data_0215a02c, arg0);
}
