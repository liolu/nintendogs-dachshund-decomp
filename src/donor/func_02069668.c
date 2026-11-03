/* compiler: 2.0/sp1p5  */
/* VEC_Add from projets/blue-dragon-awakened-shadow/src/auto/VEC_Add.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef signed char s8;
typedef long s32;
void func_02069668(void *arg0, void *arg1, void *arg2) {
    (*(s32 *) ((s8 *) (arg2) + (0))) = (s32) ((*(s32 *) ((s8 *) (arg0) + (0))) + (*(s32 *) ((s8 *) (arg1) + (0))));
    (*(s32 *) ((s8 *) (arg2) + (4))) = (s32) ((*(s32 *) ((s8 *) (arg0) + (4))) + (*(s32 *) ((s8 *) (arg1) + (4))));
    (*(s32 *) ((s8 *) (arg2) + (8))) = (s32) ((*(s32 *) ((s8 *) (arg0) + (8))) + (*(s32 *) ((s8 *) (arg1) + (8))));
}
