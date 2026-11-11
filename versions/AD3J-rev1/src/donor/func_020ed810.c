/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020ed818 from projets/nintendogs-chihuahua-friends/src/donor/func_020ed818.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;
extern u8 data_02154dd8;
extern u32 data_02154ddc;
extern void func_02072214(u32 *p, s32 a, u32 b);
u32 func_020ed810(s32 param_1, u32 param_2) {
    u8 *obj = (u8 *) &data_02154dd8;
    s32 lr;

    *(u16 *) (obj + 34) = (u16) param_1;
    if (data_02154ddc == 0) {
        return 0;
    }
    lr = param_1 * (u16) * (u16 *) (obj + 36);
    func_02072214(&data_02154ddc, lr / 100, param_2);
    return 1;
}
