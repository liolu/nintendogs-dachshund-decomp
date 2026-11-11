/* compiler: 1.2/sp2p3 */
#include "m2c.h"

typedef struct {
    s32 a;
    s32 b;
    s32 c;
} Triple;

void func_02025d60(void *);
void func_02037130(void *, s32);
void func_02039128(void *);
void func_0203e5ac(void *, s32, s32);
void func_ov003_02177c58(void *, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32, s32);
extern u8 *data_0215a064;

void func_ov003_021774cc(void *arg0) {
    Triple *src;
    s32 var0;

    src                               = (Triple *) (*(u8 **) (data_0215a064 + 0x1C) + 0x30);
    *(Triple *) ((u8 *) arg0 + 0x3B4) = *src;
    if (*(s8 *) ((u8 *) arg0 + 0xA0) == 0) {
        func_0203e5ac(arg0, 0, 0);
        func_02039128(arg0);
        func_02025d60(arg0);
    }
    func_02037130(arg0, 0x300);
    if (*(u16 *) ((u8 *) arg0 + 0xFC) > 0x64) {
        var0 = 1;
    } else {
        var0 = 0;
    }
    func_ov003_02177c58(arg0, 0, 0x1FF, 1, 1, 1, 1, var0, 0x30, 3, 0, 0);
}
