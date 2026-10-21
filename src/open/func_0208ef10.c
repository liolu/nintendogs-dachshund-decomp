#include "m2c.h"
extern u8 data_0215449c[];
extern void *data_021544d4;
extern u16 data_0213ceb0;
s32 func_02073328(void *, s32, s32);
void func_02070d7c(void *, s32, s32);
void func_02070bb4(void *, s32, s32);
s32 func_0208ef10(s32 arg0, s32 arg1) {
    s32 *p;
    void **qp;
    void *q;

    p = (s32 *) data_0215449c;
    p[8] = 0;
    qp = &data_021544d4;
    q = *qp;
    if (q == 0 && p[9] == 0) {
        func_02073328(qp, 0x43, 0);
        p[9] = 1;
    }
    if (*qp != 0 && p[9] != 0) {
        func_02070d7c(qp, data_0213ceb0, (arg1 >> 1) - 0x40);
        func_02070bb4(qp, 0xe, (s16) arg0);
        return 1;
    }
    return 0;
}
