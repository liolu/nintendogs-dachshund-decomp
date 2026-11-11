/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_02023580(void *);
void func_02029248(void *);
void func_0202d804(void *, s32);
void func_02044928(s8);
void func_ov003_0218b960(void *);

void func_ov003_02189adc(void *arg0) {
    *(s32 *) ((u8 *) arg0 + 0x488) = 0;
    func_ov003_0218b960(arg0);
    func_02044928(*(s8 *) ((u8 *) arg0 + 0x88));
    func_0202d804(arg0, 0);
    func_02029248(arg0);
    func_02023580(arg0);
}
