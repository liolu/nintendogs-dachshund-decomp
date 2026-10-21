#include "m2c.h"

typedef struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} Buf;

extern u16 data_0215561c;
extern s32 data_02155624;
extern s32 *data_0215a048;
s32 func_01ffdb08(s32);
void func_020b780c(void *, void *, s32, s32, s32);
void func_02027658(s32, void *);
void func_020b3ea4(s32, void *, s32, void *, s32, void *, s32, s32, s32);

void func_020b3cd8(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    Buf buf1;
    Buf buf2;
    Buf tmp;
    Buf zero;
    s32 idx;

    idx = func_01ffdb08(arg1);
    if (arg2 == 0) {
        return;
    }
    zero.unk0 = 0;
    zero.unk4 = 0;
    zero.unk8 = 0;
    func_020b780c(&buf1, &zero, data_0215a048[3], 0, data_0215561c);
    buf1.unk4 = data_02155624;
    func_02027658(idx, &buf2);
    tmp = *(Buf *) (arg2 + 0xBC);
    func_020b3ea4(arg0, &buf2, 0x1000, &tmp, 0xA000, &buf1, arg3, 0xA000, 0x3C000);
}
