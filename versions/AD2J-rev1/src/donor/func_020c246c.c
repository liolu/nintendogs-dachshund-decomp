/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0208c98c from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_0208c98c.c (license: none), reused by
 * tools/donor_match.py */
typedef signed int s32;
typedef struct {
    s32 x;
    s32 y;
} P2;
extern void func_0208b794(s32 a, P2 s);
void func_020c246c(s32 a, s32 b, s32 c, s32 d) {
    func_0208b794(a, *(P2 *) &b);
}
