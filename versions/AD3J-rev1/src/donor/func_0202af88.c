/* compiler: 1.2/sp2p3  */
/* func_0202af88 from projets/nintendogs-chihuahua-friends/src/auto/func_0202af88.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef unsigned short u16;
typedef long s32;
typedef unsigned long u32;
s32 func_0202af88(void *arg0) {
    s16 temp_r2;

    temp_r2 = (*(s16 *) ((s8 *) (arg0) + (0xE8)));
    if (((s32) temp_r2 >= 0x48E) && ((s32) temp_r2 <= 0x4A2)) {
        return 0;
    }
    if (((s32) temp_r2 >= 0x4B8) && ((s32) temp_r2 <= 0x4BB)) {
        return 0;
    }
    if (((s32) temp_r2 >= 0x4BC) && ((s32) temp_r2 <= 0x4C1)) {
        return 0;
    }
    if (((s32) temp_r2 >= 0x4C3) && ((s32) temp_r2 <= 0x4C5)) {
        return 0;
    }
    if ((temp_r2 == 0x48B) && ((u32) (*(u16 *) ((s8 *) (arg0) + (0x10A))) < 0x78U)) {
        return 0;
    }
    return 1;
}
