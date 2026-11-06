/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0211be04 from projets/nintendogs-chihuahua-friends/src/donor/func_0211be04.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef signed short s16;
extern void func_0211c00c(void *p);
extern void func_0211be6c(void *p);
void func_0211be04(u8 *p) {
    switch (*(s16 *) (p + 20)) {
        case 0:
            func_0211c00c(p);
            return;
        case 1:
            func_0211be6c(p);
            return;
        case 2:
            func_0211c00c(p);
            func_0211be6c(p);
            return;
        case 3:
            func_0211be6c(p);
            func_0211c00c(p);
            return;
    }
    return;
}
