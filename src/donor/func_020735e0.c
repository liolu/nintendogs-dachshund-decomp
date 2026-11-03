/* compiler: 1.2/sp2p3  */
/* func_0203b848 from projets/code-lyoko/src/auto/func_0203b848.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef signed char s8;
typedef unsigned short u16;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_0207e3b0(s32, M2C_UNK);
extern s32 func_0207e40c(s32, u16);
extern s32 func_02073468(void *);
s32 func_020735e0(void *arg0) {
    if (func_0207e40c((*(s32 *) ((s8 *) (arg0) + (0))), (*(u16 *) ((s8 *) (arg0) + (0xC)))) == 0) {
        return -1;
    }
    if (func_02073468(arg0) != 0) {
        return (*(u16 *) ((s8 *) (arg0) + (0xC))) - 1;
    }
    func_0207e3b0((*(s32 *) ((s8 *) (arg0) + (0))), 0);
    return -1;
}
