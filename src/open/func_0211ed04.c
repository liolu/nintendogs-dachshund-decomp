#include "m2c.h"
void func_02111ccc(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
void func_02111ca4(M2C_UNK arg0, s16 arg1, s16 arg2, s16 arg3);
s32 func_0211ed04(s32 arg0, s16 arg1, s16 arg2, s16 arg3, s16 arg4) {
    s16 i;
    s16 *p;
    s16 rank;
    s32 flag;

    rank = 1;
    flag = 0;
    i = 3;
    p = (s16 *) (arg0 + 0x18) + 15;
    for (; i >= 1; i--, p -= 5) {
        if (arg1 < p[2]) {
            rank = p[0] + 1;
            break;
        }
        if (arg1 == p[2]) {
            rank = p[0];
            flag = 1;
            break;
        }
    }
    *(s16 *) (arg0 + 4) = rank;
    *(s16 *) (arg0 + 6) = 0;
    *(s16 *) (arg0 + 0x10) = arg1;
    *(s16 *) (arg0 + 0x12) = arg2;
    *(s16 *) (arg0 + 0x14) = arg3;
    *(s16 *) (arg0 + 0x16) = arg4;
    if (rank <= 1) {
        func_02111ccc(arg0, rank, arg1, 0, flag);
    } else if (rank < 4) {
        func_02111ca4(arg0, rank, arg1, 0);
    }
    return rank;
}
