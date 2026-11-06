/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020faff0 from projets/nintendogs-chihuahua-friends/src/donor/func_020faff0.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef struct {
    u32 w[8];
} E8;
extern u8 data_0213d4d0[];
extern void func_020b53f4();
extern s32 func_020caca0(void);
extern u8 *func_020cac44(s32 a);
s32 func_020faff0(u8 *p1, u32 p2, u32 p3) {
    s32 r10;
    s32 r9;
    u8 *q;
    u8 *r8;
    s32 r7;
    s32 r6;
    s32 r5;
    s32 r4;
    s32 cnt;
    u32 zero;

    (void) p2;
    q   = data_0213d4d0;
    cnt = 0;
    func_020b53f4();
    {
        u8 *t = q;
        if (*(s16 *) (t + 4) == -1) {
            goto ret;
        }
    }
    zero = 0;
    r4   = 0xffff;
    r5   = -1;
outer:
    r9 = zero;
    if (p3 != 4) {
        goto check;
    }
    r10 = r9;
    if (func_020caca0() <= 0) {
        goto check;
    }
lstart:
    r8 = (u8 *) zero;
    r6 = r5;
    r7 = (s32) r8;
inner:
    r6 = (s16) (r6 + 1);
    goto scan;
scan_next:
    r6 = (s16) (r6 + 1);
scan:
    if (r6 >= 3) {
        goto scan_done;
    }
    if (*(u16 *) func_020cac44(r6) == r4) {
        goto scan_next;
    }
scan_done: {
    s32 old = r7;
    r7      = (s16) (r7 + 1);
    if (old < r10) {
        goto inner;
    }
}
    if (r6 >= 3) {
        r6 = r5;
    }
    if (r6 >= 0) {
        r8 = func_020cac44(r6);
    }
    if (*(s16 *) (q + 2) == *(s16 *) (r8 + 6)) {
        r9++;
    }
    r10 = r10 + 1;
    if (r10 < func_020caca0()) {
        goto lstart;
    }
check:
    if (*(s16 *) (q + 4) != p3) {
        goto next;
    }
    if (*(u16 *) (q + 12) <= r9) {
        goto next;
    }
    if (*(u16 *) (q + 20) == 128) {
        goto next;
    }
    {
        *(E8 *) p1 = *(E8 *) q;
    }
    if (*(s16 *) (q + 4) == 4) {
        *(u16 *) (p1 + 12) = (u16) (*(u16 *) (p1 + 12) - r9);
    }
    p1 += 32;
    cnt++;
next:
    q += 32;
    if (*(s16 *) (q + 4) != -1) {
        goto outer;
    }
ret:
    return cnt;
}
