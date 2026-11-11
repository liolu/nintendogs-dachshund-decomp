/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_02080180(void);
void func_0206b4ac(u8 *, s32, s32);
extern u8 *data_ov010_0215ba80;

void func_ov010_0215a15c(void) {
    func_02080180();
    func_0206b4ac(data_ov010_0215ba80 + 0x18, 0, 0x6000);
}
