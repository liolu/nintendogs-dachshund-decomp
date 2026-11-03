/* compiler: 1.2/sp2p3  */
/* func_02029820 from projets/nintendogs-chihuahua-friends/src/auto/func_02029820.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef unsigned short u16;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK data_0213853c;
s32 func_02029820(void *arg0, s32 arg1) {
    if (((*(s8 *) ((s8 *) (arg0) + (0xA4))) == 2) &&
        ((s32) (*(s16 *) ((s8 *) ((*(void **) ((s8 *) (arg0) + (0x9E4)))) + (0x22))) >
         (s32) * ((u16 *) ((s8 *) &data_0213853c + ((*(s8 *) ((s8 *) (arg0) + (0xA6))) * 2))))) {
        (*(s16 *) ((s8 *) (arg0) + (0xE8))) = (s16) (arg1 + 0x1D5);
        return 1;
    }
    return 0;
}
