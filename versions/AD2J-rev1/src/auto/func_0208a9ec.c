/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern s32 func_0208120c(void);
extern void func_02081220(s32);
extern void func_0208bb40(void *);
extern void func_0207fc44(void *);

void func_0208a9ec(u8 *arg0, s32 arg1) {
    s32 temp_r4;

    temp_r4 = func_0208120c();
    func_0208bb40(arg0);
    *(u32 *) (arg0 + 0xC)  = *(u32 *) (arg0 + 0xC) & ~0xF;
    *(s32 *) (arg0 + 0x14) = arg1;
    func_0207fc44(arg0 + 0x18);
    func_02081220(temp_r4);
}
