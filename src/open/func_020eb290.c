#include "m2c.h"

extern void *data_02159e70;

typedef struct {
    u8 unk_00[0x4];
    u16 unk_04;
    u8 unk_06[0xA];
} UnkStruct0x10;

void func_020eb290(void) {
    UnkStruct0x10 *base;
    UnkStruct0x10 *p;
    int i;

    base = (UnkStruct0x10 *)((u8 *)data_02159e70 + 0x283C);
    p = base + 0x80;
    for (i = 0; i < 0x80; i++, p++) {
        p->unk_04 = 1;
    }

    base = (UnkStruct0x10 *)((u8 *)data_02159e70 + 0x283C);
    p = base;
    for (i = 0; i < 0x80; i++, p++) {
        p->unk_04 = 1;
    }

    base = (UnkStruct0x10 *)((u8 *)data_02159e70 + 0x283C);
    p = base + 0x180;
    for (i = 0; i < 0x80; i++, p++) {
        p->unk_04 = 1;
    }

    base = (UnkStruct0x10 *)((u8 *)data_02159e70 + 0x283C);
    p = base + 0x100;
    for (i = 0; i < 0x80; i++, p++) {
        p->unk_04 = 2;
    }
}
