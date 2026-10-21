#include "engine.h"
#include "m2c.h"

typedef struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} Buf;

extern s32 *data_0215a048;
extern s32 data_0213ec44;
void func_020b780c(void *, void *, s32, s32, s32);

void func_020b2e1c(s32 arg0, s32 arg1) {
    Buf buf;
    s32 a;
    s32 b;

    buf.unk0 = 0;
    buf.unk4 = 0;
    buf.unk8 = 0;
    func_020b780c((void *) arg0, &buf, data_0215a048[3], 0, arg1);
    *(s32 *) (arg0 + 4) = 0x14000;
    a = *(s32 *) (arg0 + 0);
    b = *(s32 *) (arg0 + 8);
    *(s32 *) (arg0 + 0xC) = -a;
    *(s32 *) (arg0 + 0x10) = 0;
    *(s32 *) (arg0 + 0x14) = -b;
    *(s32 *) (arg0 + 0x18) = 0;
    *(s32 *) (arg0 + 0x1C) = 0x1000;
    *(s32 *) (arg0 + 0x20) = 0;
    *(s32 *) (arg0 + 0x24) = data_0213ec44;
}
