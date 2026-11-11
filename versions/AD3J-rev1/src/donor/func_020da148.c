/* compiler: 1.2/sp2p3  */
/* func_020da150 from projets/nintendogs-miniature-dachshund-friends/src/auto/func_020da150.c (same code in another game of
 * this workspace), reused by tools/donor_match.py */
typedef long s32;
extern s32 func_020280a0();
s32 func_020da148(void) {
    s32 temp_r0;

    temp_r0 = func_020280a0();
    if ((temp_r0 >= 0) && (temp_r0 <= 0xF)) {
        return temp_r0;
    }
    return -1;
}
