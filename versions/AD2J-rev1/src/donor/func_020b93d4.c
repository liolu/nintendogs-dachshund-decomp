/* compiler: 1.2/sp2p3  */
/* func_020b93d4 from projets/nintendogs-shiba-friends/src/auto/func_020b93d4.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
extern s32 data_02153740;
void func_020b93d4(s32 arg0, s32 arg1) {
    s32 temp_r2;

    temp_r2 = (arg0 * 0x294) + (data_02153740 + 0xA5C);
    if (arg1 == 0) {
        (*(s32 *) ((s8 *) (temp_r2) + (4))) = 0;
        return;
    }
    (*(s32 *) ((s8 *) (temp_r2) + (4))) = arg1;
}
