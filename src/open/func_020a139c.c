#include "m2c.h"

typedef struct {
    s32 unk0;
    s32 unk4;
    s32 unk8;
    s32 unkC;
    s32 unk10;
    s32 unk14;
    u16 unk18[0x12];
    s32 unk3C;
    s32 unk40;
    s32 unk44;
    s32 unk48;
    s32 unk4C;
    s32 unk50;
    s32 unk54;
    s32 unk58;
    s32 unk5C;
} A139C;

s32 func_0205df50(s32, s32);
s32 func_020ebcb4(s32, u16, s32, s32);

s32 func_020a139c(A139C *arg0) {
    s32 i;
    s32 j;
    s32 flag;

    flag = 0;
    arg0->unk58++;
    arg0->unk5C = func_0205df50(arg0->unk58 * arg0->unk40, arg0->unk54);
    if (arg0->unk58 == arg0->unk54) {
        arg0->unk5C = 0;
        flag = 1;
    } else if (arg0->unk4C > arg0->unk48) {
        arg0->unk5C = -arg0->unk5C;
    }
    for (i = 0; i < arg0->unk3C; i++) {
        for (j = 0; j < arg0->unk14; j++) {
            func_020ebcb4(2, i + arg0->unk18[j], 0, arg0->unk5C);
        }
    }
    return flag;
}
