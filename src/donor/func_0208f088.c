/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0208f088 from projets/nintendogs-chihuahua-friends/src/donor/func_0208f088.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned int u32;
typedef unsigned long long u64;
extern u64 func_02081348(void);
extern void func_020813d8(u32 *buf);
extern u32 func_020c8e4c(void);
extern void func_020c8e68(void);
extern void func_020c8a08(u32 a, u32 b, u32 c, u32 *buf, u32 d, u32 e);
void func_0208f088(void) {
    u64 t;
    u32 buf[2];
    u32 iVar1;
    u32 a;
    u32 hi;

    t  = func_02081348();
    a  = (u32) t;
    hi = (u32) (t >> 32);
    func_020813d8(buf);
    iVar1 = func_020c8e4c();
    func_020c8e68();
    func_020c8e68();
    func_020c8a08(iVar1, 0, 2, buf, a, hi);
}
