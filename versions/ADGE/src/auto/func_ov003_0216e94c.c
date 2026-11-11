/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02023770(void *a);
void *func_02024104(void *a, s32 b);
void func_02028fd4(void *a, s16 b, u8 c);
void func_0203e5e8(void *a, s32 b);
s32 func_ov003_021728e4(void *a, s32 b, s32 c, s32 d, s32 e, s32 f, s32 g);

void func_ov003_0216e94c(void *arg0) {
    void *temp;

    if (func_ov003_021728e4(arg0, 0, 0x1F4, 0x1F5, 0x200, 0x201, 0xA) == 0) {
        return;
    }
    func_0203e5e8(arg0, 0xF2);
    temp = func_02024104(arg0, func_02023770(arg0));
    if (temp == NULL) {
        return;
    }
    func_02028fd4(arg0, (s16) (*(u16 *) temp + 0xC), *(u8 *) ((u8 *) temp + 0x28));
}
