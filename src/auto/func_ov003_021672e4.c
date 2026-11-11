/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_020264e4(void *);
void func_02025594(void *);
void func_02023644(void *, s32, s32);
void func_0202d804(void *, s32);
void func_0203dfa0(void *, s32);

void func_ov003_021672e4(void *arg0) {
    *(s16 *) ((u8 *) arg0 + 0x152) = 0x12a;
    func_020264e4(arg0);
    func_02025594(arg0);
    func_02023644(arg0, 0x20, 0x1);
    func_0202d804(arg0, 0x7);
}
