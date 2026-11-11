/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020f2380 from projets/nintendogs-chihuahua-friends/src/donor/func_020f2380.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef signed int s32;
extern u8 data_02154cb8[];
extern u8 data_02130732[];
extern u8 data_02132d80[];
extern s32 func_020ef698(void);
u8 func_020f2380(void) {
    u16 k = *(u16 *) (data_02154cb8 + 0x18);
    if (k == 24) {
        s32 i = func_020ef698();
        return data_02132d80[i];
    }
    return data_02130732[k * 6];
}
