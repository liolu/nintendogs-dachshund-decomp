/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020af820 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020af820.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned short u16;
typedef signed int s32;
extern void func_020c99e4(u16 *p, s32 v);
void func_0209763c(u16 p0, s32 p1) {
    u16 buf[2];
    buf[0] = 0;
    buf[1] = p0;
    func_020c99e4(buf, p1);
}
