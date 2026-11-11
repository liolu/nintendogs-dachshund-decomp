/* compiler: 2.0/sp1p5  */
/* func_02035564 from projets/nintendogs-chihuahua-friends/src/auto/func_02035564.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef unsigned short u16;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK data_021384b0;
s32 func_02035564(void *arg0) {
    if ((s32) (*(s16 *) ((s8 *) ((*(void **) ((s8 *) (arg0) + (0x9E4)))) + (0x24))) >
        (s32) (*((u16 *) ((s8 *) &data_021384b0 + ((*(s8 *) ((s8 *) (arg0) + (0xA6))) * 2))) + 0x168)) {
        return 1;
    }
    return 0;
}
