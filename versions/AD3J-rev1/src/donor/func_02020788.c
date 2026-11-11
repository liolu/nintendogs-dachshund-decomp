/* compiler: 2.0/sp1p5  */
/* func_02020788 from projets/nintendogs-chihuahua-friends/src/auto/func_02020788.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef long s32;
extern void *data_02153720;
extern void *data_02156080;
void func_02020788(void *arg0) {
    s16 temp_r3;
    void *var_r1;

    temp_r3 = (*(s16 *) ((s8 *) (data_02153720) + (0x7A)));
    if (((s32) temp_r3 < 0) || ((s32) (*(s16 *) ((s8 *) (data_02156080) + (0x20))) <= (s32) temp_r3)) {
        var_r1 = ((void *) 0);
    } else {
        var_r1 = (*(void **) ((s8 *) ((data_02156080 + (temp_r3 * 4))) + (4)));
    }
    if (var_r1 == ((void *) 0)) {
        return;
    }
    if ((*(s8 *) ((s8 *) (arg0) + (0x88))) == (*(s16 *) ((s8 *) (var_r1) + (0x98)))) {
        (*(s16 *) ((s8 *) (arg0) + (0x154))) = 1;
    }
}
