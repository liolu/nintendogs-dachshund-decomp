/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_0208120c(void);
void func_02081220(s32 irq);
void func_0207fcb8(u8 *lock);
s32 func_0208b16c(u8 *obj);

s32 func_0208b654(u8 *arg0) {
    s32 busy;
    s32 irq;
    s32 flag;
    s32 c;

    busy = 0;
    irq  = func_0208120c();
    if (*(u32 *) (arg0 + 0xC) & 1) {
        c = 1;
    } else {
        c = busy;
    }
    if (c != 0) {
        if (*(u8 **) (*(u8 **) (arg0 + 0x8) + 0x18) != arg0) {
            busy = 1;
        } else {
            busy = 0;
        }
        if (busy != 0) {
            *(u32 *) (arg0 + 0xC) = *(u32 *) (arg0 + 0xC) | 4;
        }
        do {
            func_0207fcb8(arg0 + 0x18);
            if (*(u32 *) (arg0 + 0xC) & 1) {
                flag = 1;
            } else {
                flag = 0;
            }
        } while (flag != 0);
    }
    func_02081220(irq);
    if (busy != 0) {
        return func_0208b16c(arg0);
    }
    if (*(u32 *) (arg0 + 0x14) == 0) {
        return 1;
    }
    return 0;
}
