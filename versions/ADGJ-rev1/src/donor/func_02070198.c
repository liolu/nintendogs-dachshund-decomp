/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0205f65c from projets/children-of-mana/src/donor/func_0205f65c.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef unsigned int u32;
typedef signed int s32;
extern void *func_0207145c(void);
extern s32 func_0207153c(void);
u32 *func_02070198(u32 param_1, s32 param_2) {
    u32 *p;
    u32 i;
    s32 m;

    p = (u32 *) func_0207145c();
    if (param_1 >= 1000) {
        goto BIG;
    }
    i = 0;
TOP:
    if (p == ((void *) 0)) {
        goto R0;
    }
    if (i != param_1) {
        goto INC;
    }
    m = func_0207153c();
    return (u32 *) (param_2 * m + (s32) p);
INC:
    i = i + 1;
    p = (u32 *) p[10];
    goto TOP;
R0:
    return ((void *) 0);
BIG:
    if (p == ((void *) 0)) {
        goto RB0;
    }
L60:
    if (*p != param_1) {
        goto L80;
    }
    p = (u32 *) p[11];
    m = func_0207153c();
    return (u32 *) (param_2 * m + (s32) p);
L80:
    p = (u32 *) p[10];
    if (p != ((void *) 0)) {
        goto L60;
    }
RB0:
    return ((void *) 0);
}
