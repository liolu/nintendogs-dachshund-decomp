/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020f1e5c from projets/nintendogs-chihuahua-friends/src/donor/func_020f1e5c.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;
extern u32 data_0214716c[];
extern u8 data_02147180[];
extern void func_0208ba94(s32 *p);
extern void func_0205e950(char *buf, s32 n, u8 *fmt, u32 v);
extern s32 func_0208b744(s32 *a, char *b);
s32 func_020f1e5c(s32 param_1) {
    s32 st[17];
    char buf[128];
    s32 iVar1;

    func_0208ba94(st);
    func_0205e950(buf, 0x80, data_02147180, data_0214716c[param_1]);
    iVar1 = func_0208b744(st, buf);
    if (iVar1 != 0) {
        return st[9] - st[8];
    }
    return 0;
}
