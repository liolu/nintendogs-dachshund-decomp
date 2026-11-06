/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020b53f4 from projets/nintendogs-chihuahua-friends/src/donor/func_020b53f4.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef signed char s8;
typedef signed short s16;
typedef signed int s32;
extern s16 data_0213d4d0[];
extern s16 *func_0209355c(s32 i);
void func_020b53f4(void) {
    s16 *q;
    s16 *p;
    s16 *r;
    s32 i;
    s32 zero;
    s32 c2;

    q = data_0213d4d0;
    if (q[2] == -1) {
        goto S2;
    }
L20:
    q[6] = 0;
    q    = q + 16;
    if (q[2] != -1) {
        goto L20;
    }
S2:
    i    = 0;
    zero = i;
L44:
    p = func_0209355c(i);
    if (p[0] == -1) {
        goto NEXT;
    }
    c2 = *(s8 *) ((u8 *) p + 2);
    q  = data_0213d4d0;
    if (q[2] == -1) {
        goto L94;
    }
L6c:
    if (q[1] != p[0]) {
        goto L84;
    }
    if (q[0] == c2) {
        goto FOUND;
    }
L84:
    q = q + 16;
    if (q[2] != -1) {
        goto L6c;
    }
L94:
    r = (s16 *) zero;
    goto L98;
FOUND:
    r = q;
L98:
    if (r == 0) {
        goto NEXT;
    }
    r[6] = (s16) * (s8 *) ((u8 *) p + 3);
NEXT:
    i = (s16) (i + 1);
    if (i < 200) {
        goto L44;
    }
}
