/* compiler: 2.0/sp1p5  */
/* func_0205affc from projets/club-house-games/src/auto/func_0205affc.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef signed char s8;
typedef unsigned short u16;
typedef long s32;
typedef s32 M2C_UNK;
s32 func_0207201c(s32 arg0) {
    void *temp_r1;

    temp_r1 = *(M2C_UNK *) arg0;
    if (temp_r1 == ((void *) 0)) {
        return -1;
    }
    if ((*(u16 *) ((s8 *) (temp_r1) + (0x34))) != 1) {
        return -1;
    }
    return (s32) (*(u16 *) ((s8 *) (temp_r1) + (0x38)));
}
