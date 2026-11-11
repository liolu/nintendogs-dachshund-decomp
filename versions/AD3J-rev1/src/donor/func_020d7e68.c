/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020ea15c from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020ea15c.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned int u32;
typedef signed int s32;
extern void func_02111774(u32 a, u32 *b, s32 c, s32 d);
typedef struct {
    u32 w[3];
} Blk12;
void func_020d7e68(u32 p0, u32 *p1) {
    Blk12 loc;
    *(Blk12 *) &loc = *(Blk12 *) p1;
    loc.w[1]        = 0;
    func_02111774(p0, loc.w, -3, 0);
}
