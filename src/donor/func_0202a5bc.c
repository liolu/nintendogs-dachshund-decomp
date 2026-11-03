/* compiler: 1.2/sp2p3  */
/* func_0202a5bc from projets/nintendogs-chihuahua-friends/src/auto/func_0202a5bc.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef long s32;
s32 func_0202a5bc(void *arg0, void *arg1) {
    s16 temp_r3;

    if (arg1 == ((void *) 0)) {
        return 0;
    }
    temp_r3 = (*(s16 *) ((s8 *) (arg1) + (0x96)));
    if ((temp_r3 == 0) && ((s32) (*(s16 *) ((s8 *) ((*(void **) ((s8 *) (arg0) + (0x9E4)))) + (0x1E))) > 0x708)) {
        (*(s16 *) ((s8 *) (arg0) + (0xE8))) = 0x41C;
        return 1;
    }
    if ((temp_r3 == 1) && ((s32) (*(s16 *) ((s8 *) ((*(void **) ((s8 *) (arg0) + (0x9E4)))) + (0x20))) > 0x384)) {
        (*(s16 *) ((s8 *) (arg0) + (0xE8))) = 0x41C;
        return 1;
    }
    (*(s16 *) ((s8 *) (arg0) + (0xE8))) = 0x41D;
    return 1;
}
