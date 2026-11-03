/* compiler: 1.2/sp2p3  */
/* func_0205a858 from projets/club-house-games/src/auto/func_0205a858.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef long s32;
extern s32 data_0214f358;
s32 func_02071758(s32 arg0) {
    if (arg0 & data_0214f358) {
        return 0;
    }
    data_0214f358 |= arg0;
    return 1;
}
