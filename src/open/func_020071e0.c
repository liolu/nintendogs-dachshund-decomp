#include "m2c.h"

#include "m2c.h"

typedef struct {
    s32 a;
    s32 b;
    s32 c;
    s32 d;
} Four;

typedef struct {
    s32 a;
    s32 b;
    s32 c;
} Three;

typedef struct {
    u32 unk0;
    u32 unk4;
    u32 unk8;
    u32 unkC;
    u32 unk10;
    u32 unk14;
    u32 unk18;
} Blk71e0;

void func_020071e0(s32 arg0, u8 *arg1) {
    Blk71e0 *p = (Blk71e0 *) arg1;
    s32 ok;

    if (arg0 != 0) {
        return;
    }
    if (p->unk0 >= 0x64) {
        ok = 0;
    } else if (p->unk4 < 1 || p->unk4 > 0xC) {
        ok = 0;
    } else if (p->unk8 < 1 || p->unk8 > 0x1F) {
        ok = 0;
    } else {
        ok = 1;
    }
    if (ok == 0) {
        return;
    }
    if (p->unk10 >= 0x18) {
        ok = 0;
    } else if (p->unk14 >= 0x3C) {
        ok = 0;
    } else if (p->unk18 >= 0x3C) {
        ok = 0;
    } else {
        ok = 1;
    }
    if (ok == 0) {
        return;
    }
    *(Four *) (arg1 + 0x1C) = *(Four *) arg1;
    *(Three *) (arg1 + 0x2C) = *(Three *) (arg1 + 0x10);
}
