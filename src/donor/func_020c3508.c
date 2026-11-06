/* compiler: 1.2/sp2p3  */
/* func_020c8af0 from projets/nintendogs-dachshund/src/auto/func_020c8af0.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_0207e76c();
void func_020c3508(void *arg0) {
    s16 var_r7;
    void *var_r6;

    var_r7 = 0;
    if ((s32) (*(s16 *) ((s8 *) (arg0) + (0x32))) <= 0) {
        return;
    }
    var_r6 = arg0 + 0x38;
    do {
        if ((*(s32 *) ((s8 *) (var_r6) + (0x48))) != 0) {
            func_0207e76c();
            (*(s32 *) ((s8 *) (var_r6) + (0x48))) = 0;
        }
        var_r7 += 1;
        var_r6 += 0x4C;
    } while ((s32) var_r7 < (s32) (*(s16 *) ((s8 *) (arg0) + (0x32))));
}
