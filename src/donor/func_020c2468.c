/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020c246c from projets/nintendogs-chihuahua-friends/src/donor/func_020c246c.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed int s32;
typedef struct {
    s32 x;
    s32 y;
} P2;
extern void func_0208b794(s32 a, P2 s);
void func_020c2468(s32 a, s32 b, s32 c, s32 d) {
    func_0208b794(a, *(P2 *) &b);
}
