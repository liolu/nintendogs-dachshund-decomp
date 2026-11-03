/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_020716d8(s32);
void func_0207d698(void *, void *);
extern u8 data_0214fbbc;

void func_020723f4(u8 *arg0) {
    func_020716d8(*(s32 *) (arg0 + 0x40));
    func_0207d698(&data_0214fbbc, arg0);
    *(s32 *) (arg0 + 0x24) = *(s32 *) (arg0 + 0x24) & ~1;
}
