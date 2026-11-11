/* compiler: 1.2/sp2p3 */
#include "m2c.h"

u32 func_0208120c(void);
void func_02081220(u32);
void func_0207fcb8(void *);
void func_0207fc44(void *);

s32 func_02080414(u8 *obj, s32 *out, u32 flags) {
    u32 irq;
    u32 r8;

    irq = func_0208120c();
    if (*(s32 *) (obj + 0x10) == 0) {
        r8 = flags & 1;
        do {
            if (r8 == 0) {
                func_02081220(irq);
                return 0;
            }
            func_0207fcb8(obj + 2);
        } while (*(s32 *) (obj + 0x10) == 0);
    }
    if (out != NULL) {
        *out = ((s32 *) *(s32 **) (obj + 4))[*(s32 *) (obj + 0xC)];
    }
    *(s32 *) (obj + 0xC)  = (*(s32 *) (obj + 0xC) + 1) % *(s32 *) (obj + 8);
    *(s32 *) (obj + 0x10) = *(s32 *) (obj + 0x10) - 1;
    func_0207fc44(obj);
    func_02081220(irq);
    return 1;
}
