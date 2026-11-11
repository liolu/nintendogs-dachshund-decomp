/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_0201408c(void *, s32);
s32 func_02022e04(void *, s32);
void func_02029248(void *);
s32 func_020382c4(void *);
void func_0203e5e8(void *, s32);

void func_ov003_0217a190(void *arg0) {
    u8 *b;
    s32 r4;
    s32 s;

    b  = (u8 *) arg0;
    r4 = 0;
    if (*(u16 *) (b + 0xFC) > 0x50) {
        r4 = 1;
        s  = func_020382c4(arg0);
        switch (s) {
            default:
                break;
            case 0:
                func_0203e5e8(arg0, 0x30F);
                break;
            case 1:
                func_0203e5e8(arg0, 0x311);
                break;
            case 2:
                func_0203e5e8(arg0, 0x312);
                break;
            case 3:
                func_0203e5e8(arg0, 0x313);
                break;
        }
        if (*(s16 *) (b + 0xF0) == 1) {
            func_02029248(arg0);
        } else if (func_02022e04(arg0, 1) != 0) {
            func_02029248(arg0);
        }
    }
    func_0201408c(arg0, r4);
}
