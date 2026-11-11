/* compiler: 1.2/sp2p3  */
/* func_02039a90 from projets/code-lyoko/src/auto/func_02039a90.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef signed char s8;
typedef unsigned char u8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02063ac4(u8);
void func_02071b60(void *arg0, u8 arg1) {
    if (arg0 == ((void *) 0)) {
        return;
    }
    if (arg1 == (*(u8 *) ((s8 *) (arg0) + (0x2E)))) {
        return;
    }
    func_02063ac4((*(u8 *) ((s8 *) (arg0) + (0x3C))));
    (*(u8 *) ((s8 *) (arg0) + (0x2E))) = arg1;
}
