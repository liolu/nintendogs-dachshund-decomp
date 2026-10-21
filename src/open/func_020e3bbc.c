#include "m2c.h"
extern void *data_02159fc4;
extern M2C_UNK data_02144b50;
extern void func_0206cbc4();
extern void func_02026b9c(s32);
extern void func_020254dc(s32);
extern s32 data_02130e18[];
void func_020e3bbc(void) {
    M2C_UNK *tbl;
    s32 *work;
    M2C_UNK temp;
    volatile u16 padA;
    volatile u16 padB;
    s32 *wk;

    work = data_02159fc4;
    if (work[0] == 0) {
        return;
    }
    tbl = (M2C_UNK *) work[3];
    ((void (*)(void *)) tbl[1])(work + 4);
    switch (work[2]) {
    case 1:
        ((void (*)(void *)) tbl[4])(work + 4);
        M2C_FIELD(work, s32 *, 0x198) = 0;
        work[2] = 2;
        ((void (*)(void *)) tbl[5])(work + 4);
        return;
    case 2:
        ((void (*)(void *)) tbl[5])(work + 4);
        if (M2C_FIELD(work, s32 *, 0x198) != 0) {
            M2C_FIELD(work, s32 *, 0x198) = 0;
            work[2] = 3;
        }
        return;
    case 3:
        ((void (*)(void *)) tbl[2])(work + 4);
        work[2] = 4;
        ((void (*)(void *)) tbl[3])(work + 4);
        return;
    case 4:
        ((void (*)(void *)) tbl[3])(work + 4);
        return;
    case 5:
        ((void (*)(void *)) tbl[6])(work + 4);
        M2C_FIELD(work, s32 *, 0x19C) = 0;
        work[2] = 6;
        ((void (*)(void *)) tbl[7])(work + 4);
        return;
    case 6:
        ((void (*)(void *)) tbl[7])(work + 4);
        if (M2C_FIELD(work, s32 *, 0x19C) != 0) {
            M2C_FIELD(work, s32 *, 0x19C) = 0;
            work[2] = 0;
        }
        return;
    case 0:
        temp = work[1];
        if (temp != 0) {
            wk = data_02159fc4;
            padA = 0;
            func_0206cbc4(padA, wk + 4, 0x144);
            wk[0] = temp;
            wk[1] = 0;
            wk[2] = 1;
            wk[3] = (s32) M2C_FIELD(&data_02144b50 + temp, M2C_UNK *, 0);
            (*(void (**)(void *)) *(volatile s32 *) &wk[3])(wk + 4);
            return;
        } else {
            wk = data_02159fc4;
            padB = 0;
            func_0206cbc4(padB, wk + 4, 0x144);
            wk[0] = 0;
            wk[1] = 0;
            wk[2] = 1;
            wk[3] = (s32) M2C_FIELD(&data_02144b50, M2C_UNK *, 0);
            (*(void (**)(void *)) *(volatile s32 *) &wk[3])(wk + 4);
            return;
        }
    }
}
