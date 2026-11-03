/* compiler: 1.2/sp2p3  */
/* func_020ab268 from projets/eyeshield-21/src/auto/func_020ab268.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern s32 func_02075768();
void func_02075700(s32 *arg0, M2C_UNK arg1) {
    if ((func_02075768(((s8 *) arg0 + 8)) == 0) && (func_02075768(((s8 *) arg0 + 0x10), arg1) == 0) &&
        (func_02075768(((s8 *) arg0 + 0x18), arg1) == 0)) {
        return;
    }
    *arg0 |= 0x10;
}
