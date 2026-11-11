/* compiler: 2.0/sp1p5  */
/* func_0211f60c from projets/nintendogs-miniature-dachshund-friends/src/auto/func_0211f60c.c (same code in another game of
 * this workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef unsigned short u16;
typedef long s32;
extern s32 data_02156100;
extern s32 data_02156104;
s32 func_0211f60c(void *arg0) {
    if ((*(u16 *) ((s8 *) (arg0) + (2))) == 0) {
        if ((*(u16 *) ((s8 *) (arg0) + (4))) == 0xA) {
            data_02156104 = 0;
            if (data_02156100 == 8) {
                data_02156100 = 9;
            } else if (data_02156100 == 4) {
                data_02156100 = 5;
            }
        }
        return 1;
    }
    return 0;
}
