/* compiler: 2.0/sp1p5  */
/* func_02034c88 from projets/nintendogs-chihuahua-friends/src/auto/func_02034c88.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef unsigned char u8;
typedef unsigned short u16;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK data_0213931d;
s32 func_02034c88(void *arg0) {
    s8 temp_r0;

    temp_r0 = *((u8 *) ((s8 *) &data_0213931d + (*(*(u16 **) ((s8 *) (arg0) + (0x9E4))) * 0x64)));
    switch (temp_r0) {
        case 2:
            return 4;
        case 3:
            return 5;
        default:
            return 0;
    }
}
