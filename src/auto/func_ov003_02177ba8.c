/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    u32 a;
    u32 b;
    u32 c;
} Triple;

extern void *data_0214da80;
void func_02039128(void *);
s32 func_02114690(void *, void *);
void func_02037130(void *, s32);
s32 func_02035264(void *, s32);
void func_ov003_02177c58(void *, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);

void func_ov003_02177ba8(void *arg0) {
    Triple tmp;
    s32 r;
    s32 ret;

    func_02039128(arg0);
    r = func_02114690(data_0214da80, &tmp);
    if (r != 0) {
        *(Triple *) ((u8 *) arg0 + 0x278) = tmp;
    }
    func_02037130(arg0, 0x300);
    *(Triple *) ((u8 *) arg0 + 0x3B4) = tmp;
    ret                               = func_02035264(arg0, 1);
    func_ov003_02177c58(arg0, 0, 0x1FF, 1, 0, 1, 1, ret, 0x30, 7, 3, 0);
}
