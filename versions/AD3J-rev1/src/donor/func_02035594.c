/* compiler: 2.0/sp1p5  */
/* func_02035594 from projets/nintendogs-chihuahua-friends/src/auto/func_02035594.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK data_021383b4;
s32 func_02035594(void *arg0) {
    void *temp_r2;

    temp_r2 = (*(void **) ((s8 *) (arg0) + (0x9E4)));
    if ((s32) (*(s16 *) ((s8 *) (temp_r2) + (0x1C))) >
        (s32) (((u16 *) &data_021383b4)[((*(u8 *) ((s8 *) (temp_r2) + (0x11))) - 1)] + 0x3E8)) {
        return 1;
    }
    return 0;
}
