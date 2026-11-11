/* compiler: 2.0/sp1p5  */
/* func_020bfecc from projets/nintendogs-dachshund/src/auto/func_020bfecc.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef unsigned short u16;
typedef long s32;
extern u16 data_021560f8;
extern s32 data_02156100;
extern s32 data_02156104;
s32 func_0211f80c(s32 arg0) {
    u16 temp_r1;

    if ((*(u16 *) ((s8 *) (arg0) + (2))) == 0) {
        temp_r1 = (*(u16 *) ((s8 *) (arg0) + (8)));
        if (temp_r1 == 6) {
            data_02156104 = 0;
            data_02156100 = 8;
        } else if (temp_r1 == 7) {
            data_021560f8 = (*(u16 *) ((s8 *) (arg0) + (0xA)));
        }
        return 1;
    }
    return 0;
}
