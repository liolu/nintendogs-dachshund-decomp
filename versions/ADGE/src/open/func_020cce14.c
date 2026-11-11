#include "m2c.h"

u64 func_02080978(void);

typedef struct {
    s32 unk_00;
    u16 unk_04;
    u16 unk_06;
} Unk_020cce14_Entry;

typedef struct {
    u16 unk_00;
    u16 unk_02;
    s16 unk_04;
    s16 unk_06;
    u16 unk_08;
    u16 unk_0A;
    u16 unk_0C;
    u16 unk_0E;
    u16 unk_10;
    u16 unk_12;
    u16 unk_14;
    u16 unk_16;
    u16 unk_18;
    u16 unk_1A;
    u16 unk_1C;
    u16 pad_1E;
    s32 unk_20;
    s32 unk_24;
    s32 unk_28;
    s32 unk_2C;
    s32 unk_30;
    u16 unk_34;
    u16 pad_36;
    s32 unk_38[2];
    u32 unk_40;
    u16 unk_44;
    u16 unk_46;
    s16 unk_48;
    u16 pad_4A;
    s32 unk_4C[3];
    u16 unk_58;
    u16 unk_5A[0x100];
    u16 pad_25A;
    Unk_020cce14_Entry unk_25C[0x20];
    s32 unk_35C;
} Unk_020cce14;

void func_020cce14(Unk_020cce14 *p) {
    u32 j;
    s32 k;
    s32 n;
    s32 i;
    Unk_020cce14_Entry *e;

    p->unk_00 = 0;
    p->unk_02 = 0;
    p->unk_04 = 5;
    p->unk_06 = p->unk_04;
    p->unk_08 = 0;
    p->unk_0A = 0;
    p->unk_0C = 0x1E;
    p->unk_0E = 0;
    p->unk_10 = 0;
    p->unk_12 = 0;
    p->unk_14 = 1;
    p->unk_16 = 0;
    p->unk_18 = 0;
    p->unk_1A = 1;
    p->unk_1C = 0x64;
    p->unk_20 = -1;
    p->unk_24 = 0;
    p->unk_28 = 0;
    p->unk_2C = 0;
    p->unk_30 = 0;
    p->unk_34 = 0;
    for (j = 0; j < 2; j++) {
        p->unk_38[j] = 0;
    }
    p->unk_40 = (s32) func_02080978();
    p->unk_44 = 0;
    p->unk_46 = 0;
    p->unk_48 = -1;
    for (k = 0; k < 3; k++) {
        p->unk_4C[k] = -1;
    }
    p->unk_58 = 0;
    for (i = 0; i < 0x100; i++) {
        p->unk_5A[i] = 0;
    }
    e = p->unk_25C;
    for (n = 0; n < 0x20; n++, e++) {
        e->unk_00 = 0;
        e->unk_04 = 0;
        e->unk_06 = 0;
    }
    p->unk_35C = 0;
}
