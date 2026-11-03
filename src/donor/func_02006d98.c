/* compiler: 1.2/sp2p3  */
/* func_02006d98 from projets/nintendogs-chihuahua-friends/src/auto/func_02006d98.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef long s32;
extern s32 func_0206902c();
s32 func_02006d98(s32 arg0) {
    if (arg0 <= 0) {
        return 0;
    }
    if (arg0 >= 0x1000) {
        return 0x1000;
    }
    return func_0206902c();
}
