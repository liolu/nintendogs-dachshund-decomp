/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0211b440 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_0211b440.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned short u16;
typedef signed short s16;
typedef signed int s32;
extern u16 *func_020cac40(s32 a);
s32 func_020faa48(s32 p0) {
    s32 cnt = 0;
    s16 idx = -1;
    u16 key = 0xffff;
    s32 p   = p0;
    s32 old;
L18:
    idx = (s16) (idx + 1);
    goto L34;
L28:
    idx = (s16) (idx + 1);
L34:
    if (idx >= 3) {
        goto L50;
    }
    if (*func_020cac40((s16) idx) == key) {
        goto L28;
    }
L50:
    old = cnt;
    cnt = (s16) (cnt + 1);
    if (old < p) {
        goto L18;
    }
    if (idx >= 3) {
        idx = -1;
    }
    return idx;
}
