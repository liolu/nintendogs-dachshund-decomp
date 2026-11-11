/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0211e888 from projets/nintendogs-chihuahua-friends/src/donor/func_0211e888.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u32 data_ov006_0215bb60;
extern s16 func_0212012c(void);
u32 func_ov006_02159488(void) {
    u8 *p = (u8 *) data_ov006_0215bb60;
    if (*(s32 *) (p + 0x28) == 2) {
        s16 s = func_0212012c();
        if (s != 0) {
            return 1;
        }
    } else if (*(s32 *) (p + 0x28) == 3) {
        return 1;
    }
    return 0;
}
