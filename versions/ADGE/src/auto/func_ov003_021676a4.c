/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02025594(void *);
M2C_UNK func_020264e4(void *);
M2C_UNK func_0202d804(void *, M2C_UNK);
M2C_UNK func_0203dfa0(void *, M2C_UNK);

void func_ov003_021676a4(void *arg0) {
    ((s16 *) ((u8 *) arg0 + 0x100))[0x29] = 0x1EC;
    func_020264e4(arg0);
    func_02025594(arg0);
    func_0202d804(arg0, 7);
    func_0203dfa0(arg0, 1);
}
