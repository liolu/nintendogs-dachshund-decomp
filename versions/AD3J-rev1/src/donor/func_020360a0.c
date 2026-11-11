/* compiler: 1.2/sp2p3  */
/* func_020360a0 from projets/nintendogs-chihuahua-friends/src/auto/func_020360a0.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef long s32;
extern s32 data_0214b484;
void *func_020360a0(void *arg0) {
    s16 temp_r1;
    void *var_r0;

    temp_r1 = (*(s16 *) ((s8 *) (arg0) + (0x146)));
    if (((s32) temp_r1 < 0) || ((s32) temp_r1 >= 3)) {
        var_r0 = ((void *) 0);
    } else {
        var_r0 = (*(void **) ((s8 *) ((data_0214b484 + (temp_r1 * 4))) + (0x50)));
    }
    if ((var_r0 != ((void *) 0)) && !((*(u8 *) ((s8 *) (var_r0) + (0xCC))) & 2)) {
        return var_r0;
    }
    return ((void *) 0);
}
