/* compiler: 1.2/sp2p3  */
/* func_020f3590 from projets/nintendogs-dachshund/src/auto/func_020f3590.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef unsigned long u32;
extern s32 func_020c6534(s32, s32);
extern u32 data_02141144;
extern void *data_02154c3c;
s32 func_020c0588(void) {
    s32 temp_r0;
    s32 var_r2;

    temp_r0 = (*(s32 *) ((s8 *) (data_02154c3c) + (4)));
    var_r2  = 0;
    switch (data_02141144) {
        default:
            break;
        case 1:
            var_r2 = func_020c6534(temp_r0, 0x57B);
            break;
        case 2:
            var_r2 = func_020c6534(temp_r0, 0x57C);
            break;
        case 3:
            var_r2 = func_020c6534(temp_r0, 0x57D);
            break;
        case 4:
            var_r2 = func_020c6534(temp_r0, 0x57E);
            break;
        case 5:
            var_r2 = func_020c6534(temp_r0, 0x57F);
            break;
    }
    return var_r2;
}
