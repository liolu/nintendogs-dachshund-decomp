/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020071f0 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020071f0.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef signed int s32;
typedef struct {
    u32 w[4];
} T16;
typedef struct {
    u32 w[3];
} T12;
void func_0200717c(s32 param_1, u32 *param_2) {
    u32 ok;
    if (param_1 != 0) {
        return;
    }
    if (param_2[0] >= 100) {
        ok = 0;
        goto check;
    }
    if (param_2[1] < 1) {
        goto zeroA;
    }
    if (param_2[1] <= 12) {
        goto t3;
    }
zeroA:
    ok = 0;
    goto check;
t3:
    if (param_2[2] < 1) {
        goto zeroB;
    }
    if (param_2[2] <= 31) {
        goto one;
    }
zeroB:
    ok = 0;
    goto check;
one:
    ok = 1;
check:
    if (ok == 0) {
        return;
    }
    if (param_2[4] >= 24) {
        ok = 0;
        goto check2;
    }
    if (param_2[5] >= 60) {
        ok = 0;
        goto check2;
    }
    if (param_2[6] >= 60) {
        ok = 0;
    } else {
        ok = 1;
    }
check2:
    if (ok == 0) {
        return;
    }
    *(T16 *) (param_2 + 7)  = *(T16 *) (param_2 + 0);
    *(T12 *) (param_2 + 11) = *(T12 *) (param_2 + 4);
}
