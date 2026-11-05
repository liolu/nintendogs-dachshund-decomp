/* compiler: 1.2/sp2p3 -O2 */
/* func_020091f8 from projets/nintendogs-miniature-dachshund-friends/src/auto/func_020091f8.c (same code in another game of
 * this workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02009280(void *, s16);
void func_020091f8(void *arg0, s32 arg1, s32 arg2) {
    s16 var_lr;
    void *var_ip;

    var_ip = arg0;
    var_lr = 0;
loop_1:
    if (((*(s32 *) ((s8 *) ((arg0 + (var_lr * 4))) + (0x914))) == 0) ||
        (arg1 != (*(s16 *) ((s8 *) ((arg0 + (var_lr * 2))) + (0x834)))) || (arg2 != (*(s8 *) ((s8 *) (var_ip) + (0x850))))) {
        var_lr += 1;
        var_ip += 1;
        if ((s32) var_lr >= 7) {
            var_lr = -1;
        } else {
            goto loop_1;
        }
    }
    if (var_lr == -1) {
        return;
    }
    func_02009280(arg0, var_lr);
}
