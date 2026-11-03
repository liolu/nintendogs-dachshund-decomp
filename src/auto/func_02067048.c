/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_0208120c(void);
void func_02081220(s32);
void func_0207fc44(void *);
void func_0207fc10(void *);

void func_02067048(u8 *arg0) {
    void (*r6)(s32);
    s32 r5;
    s32 r4;

    r6                     = *(void (**)(s32))(arg0 + 0x28);
    r5                     = *(s32 *) (arg0 + 0x2C);
    r4                     = func_0208120c();
    *(u32 *) (arg0 + 0x34) = *(u32 *) (arg0 + 0x34) & ~0xCu;
    func_0207fc44(arg0 + 0xD4);
    if (*(u32 *) (arg0 + 0x34) & 0x10) {
        func_0207fc10(arg0 + 0x3C);
    }
    func_02081220(r4);
    if (r6 == NULL) {
        return;
    }
    r6(r5);
}
