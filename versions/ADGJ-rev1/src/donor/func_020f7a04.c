/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020f7a04 from projets/nintendogs-chihuahua-friends/src/donor/func_020f7a04.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u8 data_0215546c;
extern u32 func_020f7a60(void);
extern s16 *func_020f7ab4(void);
extern void func_020f7790(s16 *p, s32 v, u8 *d);
u8 *func_020f7a04(void) {
    *(u32 *) &data_0215546c              = 0;
    *(u32 *) ((u8 *) &data_0215546c + 4) = 0;
    *(u16 *) ((u8 *) &data_0215546c + 8) = 0;
    if (func_020f7a60() == 0) {
        return &data_0215546c;
    }
    {
        s16 *psVar3 = func_020f7ab4();
        func_020f7790(psVar3 + 3, *psVar3, &data_0215546c);
    }
    return &data_0215546c;
}
