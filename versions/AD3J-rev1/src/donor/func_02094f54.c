/* compiler: 2.0/sp1p5  */
/* func_021166e4 from projets/nintendogs-dachshund/src/auto/func_021166e4.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef unsigned short u16;
typedef long s32;
extern void *data_02153700;
s32 func_02094f54(void) {
    s32 var_r0;
    s32 var_r1;
    void *temp_r2;

    var_r0  = 0;
    temp_r2 = (*(void **) ((s8 *) (data_02153700) + (4)));
    if ((*(s16 *) ((s8 *) (temp_r2) + (0))) == 6) {
        if ((*(u16 *) ((s8 *) (temp_r2) + (4))) == 0x803) {
            var_r1 = 1;
        } else {
            var_r1 = 0;
        }
    } else {
        var_r1 = 0;
    }
    if (var_r1 != 0) {
        var_r0 = 1;
    }
    return var_r0;
}
