/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020665e8 from projets/nintendogs-chihuahua-friends/src/donor/func_020665e8.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
extern u8 data_0214e180[];
extern u32 func_0208120c(void);
extern void func_0207fa34(u32 a, u32 b);
extern void func_02081220(u32 a);
u32 func_020665e8(u32 p0) {
    u32 g = (u32) data_0214e180;
    u32 old;
    u32 r;
    r                   = func_0208120c();
    old                 = *(u32 *) (g + 0x38);
    *(u32 *) (g + 0x38) = p0;
    func_0207fa34(g + 0x3c, *(u32 *) (g + 0x38));
    func_02081220(r);
    return old;
}
