/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020ca7b8 from projets/nintendogs-chihuahua-friends/src/donor/func_020ca7b8.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef signed short s16;
typedef signed int s32;
s32 func_020ca7b8(u8 *param_1, s32 param_2, s32 param_3, s32 param_4) {
    s32 flag;
    s16 *q;
    flag = 0;
    q    = 0;
    if (param_2 == 0) {
        goto s0;
    }
    if (param_2 == 1) {
        goto s1;
    }
    if (param_2 == 2) {
        q = (s16 *) (param_1 + 2016);
    }
    goto join;
s0:
    q = (s16 *) (param_1 + 2000);
    goto join;
s1:
    q = (s16 *) (param_1 + 0x7d8);
join:
    if (param_3 > q[0]) {
        flag = 1;
    } else if (param_3 == q[0]) {
        if (param_4 >= 1 && param_4 <= 3 && param_4 < q[1]) {
            flag = 1;
        }
    }
    if (flag != 0) {
        q[0] = (s16) param_3;
        q[1] = (s16) param_4;
    }
    if (param_3 == 5) {
        if (param_4 == 1) {
            q[2] = q[2] + 1;
            if (q[2] >= 99) {
                q[2] = 99;
            }
        } else {
            q[2] = 0;
        }
        flag = 1;
    }
    return flag;
}
