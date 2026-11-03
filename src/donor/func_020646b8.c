/* compiler: 1.2/sp2p3  */
/* func_020646b8 from projets/nintendogs-chihuahua-friends/src/auto/func_020646b8.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_0208083c(s32, M2C_UNK);
void func_020646b8(s32 arg0, s32 arg1, s32 arg2) {
    (*(s32 *) ((s8 *) ((arg0 + (arg1 * 4))) + (0x3C))) = arg2;
    func_0208083c(arg0 + 0x3C + (arg1 * 4), 4);
}
