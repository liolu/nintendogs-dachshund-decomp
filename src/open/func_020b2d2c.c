#include "engine.h"
#include "m2c.h"

typedef struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
} Buf;

extern s32 data_0213ec40;
void func_020b780c(void *, void *, s32, s32, s32);

void func_020b2d2c(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    Buf buf;

    buf.unk0 = 0;
    buf.unk4 = 0;
    buf.unk8 = 0;
    func_020b780c((void *) arg0, &buf, arg1, 0, arg2);
    *(s32 *) (arg0 + 4) = arg3;
    *(s32 *) (arg0 + 0xC) = 0;
    *(s32 *) (arg0 + 0x10) = 0;
    *(s32 *) (arg0 + 0x14) = 0;
    *(s32 *) (arg0 + 0x18) = 0;
    *(s32 *) (arg0 + 0x1C) = 0x1000;
    *(s32 *) (arg0 + 0x20) = 0;
    *(s32 *) (arg0 + 0x24) = data_0213ec40;
}
