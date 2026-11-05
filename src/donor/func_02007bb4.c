/* compiler: 2.0/sp1p5 -O4,s */
/* func_02007bb4 from projets/nintendogs-miniature-dachshund-friends/src/auto/func_02007bb4.c (same code in another game of
 * this workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef long s32;
void func_02007bb4(void *arg0, s16 arg1) {
    s32 var_r3;
    void *temp_r1;

    var_r3                              = 0;
    (*(s16 *) ((s8 *) (arg0) + (0)))    = 0;
    (*(s16 *) ((s8 *) (arg0) + (2)))    = 0;
    (*(s16 *) ((s8 *) (arg0) + (4)))    = 0;
    (*(s16 *) ((s8 *) (arg0) + (6)))    = 0;
    (*(s16 *) ((s8 *) (arg0) + (8)))    = 0;
    (*(s16 *) ((s8 *) (arg0) + (0xA)))  = arg1;
    (*(s32 *) ((s8 *) (arg0) + (0xC)))  = 0;
    (*(s32 *) ((s8 *) (arg0) + (0x10))) = 0;
    (*(s32 *) ((s8 *) (arg0) + (0x14))) = 0;
    (*(s32 *) ((s8 *) (arg0) + (0x18))) = 0;
    (*(s16 *) ((s8 *) (arg0) + (0x1C))) = 0;
    (*(s16 *) ((s8 *) (arg0) + (0x1E))) = 0;
    (*(s16 *) ((s8 *) (arg0) + (0x20))) = 0;
    (*(s16 *) ((s8 *) (arg0) + (0x22))) = 0;
    do {
        temp_r1 = arg0 + (var_r3 * 2);
        var_r3 += 1;
        (*(s16 *) ((s8 *) (temp_r1) + (0x24)))  = 0;
        (*(s16 *) ((s8 *) (temp_r1) + (0x1A4))) = 0;
    } while (var_r3 < 0xC0);
}
