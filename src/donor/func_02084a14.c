/* compiler: 1.2/sp2p3  */
/* func_0208129c from projets/nintendogs-dachshund/src/auto/func_0208129c.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef unsigned long u32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02085e08(void *, s32, M2C_UNK);
extern void *func_0208927c(void *);
extern M2C_UNK func_020892c0(void *, void *);
void *func_02084a14(void *arg0, s32 arg1, M2C_UNK arg2) {
    void *temp_r0;
    void *var_r4;

    var_r4 = ((void *) 0);
    if ((*(s32 *) ((s8 *) (arg0) + (0xC))) != 0) {
        temp_r0 = func_0208927c(arg0 + 0xC);
        var_r4  = temp_r0;
        func_02085e08(temp_r0, (*(s32 *) ((s8 *) (arg0) + (0x1C))) + (arg1 << 5), arg2);
        func_020892c0(arg0 + 4, var_r4);
        if (((u32) (**(*(s32 ***) ((s8 *) (var_r4) + (0x18))) << 0x11) >> 0x1F) != 0) {
            var_r4 = ((void *) 0);
        }
    }
    return var_r4;
}
