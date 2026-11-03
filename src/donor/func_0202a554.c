/* compiler: 1.2/sp2p3  */
/* func_0202a554 from projets/nintendogs-chihuahua-friends/src/auto/func_0202a554.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
extern void *data_0214b484;
s32 func_0202a554(void *arg0) {
    s8 temp_r2;

    temp_r2 = (*(s8 *) ((s8 *) (data_0214b484) + (0xC)));
    if ((temp_r2 != -1) && ((*(s8 *) ((s8 *) (arg0) + (0x88))) != temp_r2)) {
        return 1;
    }
    return 0;
}
