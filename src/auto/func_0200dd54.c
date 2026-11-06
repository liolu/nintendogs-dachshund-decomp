/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0200dd54 from projets/nintendogs-shiba-friends/src/donor/func_0200dd54.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u8 *data_0214b47c;
extern u32 *data_0214b484;
extern s32 func_0200c3ec(u32 a, s32 b);
extern void func_02035e14(u8 *p, s32 a);
extern s32 func_02035fac(u8 *p);
extern u32 func_0202f8a4(u8 *p);
extern u32 func_0202f5dc(u8 *p);
u32 func_0200dd54(u8 *param_1) {
    s32 i;
    u32 x;

    i = 0;
    if (0 < *(s16 *) (*(u8 **) (data_0214b47c + 0x20) + 0x2e)) {
        do {
            if (func_0200c3ec(11, i) != 0) {
                func_02035e14(param_1, (s16) (i + 13));
                x              = *data_0214b484 * 0x10dcd + 1;
                *data_0214b484 = x;
                if ((u16) (((u32) (u16) x * 5) >> 16) == 0) {
                    break;
                }
            }
            i = (s16) (i + 1);
        } while (i < *(s16 *) (*(u8 **) (data_0214b47c + 0x20) + 0x2e));
    }
    if (func_02035fac(param_1) != 0) {
        return func_0202f5dc(param_1);
    }
    return func_0202f8a4(param_1);
}
