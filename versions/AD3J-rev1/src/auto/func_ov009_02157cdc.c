/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_020807c8(void);
void func_0206c8a4(u8 *, s32, s32);
extern u8 *data_ov009_02159600;

void func_ov009_02157cdc(void) {
    func_020807c8();
    func_0206c8a4(data_ov009_02159600 + 0x18, 0, 0x6000);
}
