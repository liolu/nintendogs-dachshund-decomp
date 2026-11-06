/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020fa8b0 from projets/nintendogs-chihuahua-friends/src/donor/func_020fa8b0.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern s32 func_020c88ec(s16 a);
s32 func_020fa8b0(s32 param_1) {
    s32 pp = param_1;
    s32 ret;
    s16 j;
    s16 i;
    s32 c;
    u32 uVar3;
    u16 *puVar4;

    ret   = 0;
    j     = 0;
    i     = -1;
    uVar3 = 0xffff;
L18:
    i = (s16) (i + 1);
    goto check;
L28:
    i = (s16) (i + 1);
check:
    if (i < 5) {
        puVar4 = (u16 *) func_020c88ec(i);
        if (*puVar4 == uVar3) {
            goto L28;
        }
    }
    c = (j < pp);
    j = (s16) (j + 1);
    if (c) {
        goto L18;
    }
    if (i >= 5) {
        i = -1;
    }
    if (i >= 0) {
        ret = func_020c88ec(i);
    }
    return ret;
}
