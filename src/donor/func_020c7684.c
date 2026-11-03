/* compiler: 2.0/sp1p5  */
/* func_020ccdc8 from projets/nintendogs-dachshund/src/auto/func_020ccdc8.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef unsigned short u16;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK data_0212d2d4;
s32 func_020c7684(void *arg0) {
    s32 var_r3;

    var_r3 = 0;
    if (((s32) (*(s16 *) ((s8 *) (arg0) + (0xE))) <= 0) && ((*(s32 *) ((s8 *) (arg0) + (0x35C))) == 0)) {
        var_r3                             = 1;
        (*(s16 *) ((s8 *) (arg0) + (4)))   = (s16) (*(s16 *) ((s8 *) (&data_0212d2d4) + (0x14)));
        (*(s16 *) ((s8 *) (arg0) + (0xE))) = 0x1E;
        (*(u16 *) ((s8 *) (arg0) + (8)))   = (u16) ((*(u16 *) ((s8 *) (arg0) + (8))) | 2);
    }
    return var_r3;
}
