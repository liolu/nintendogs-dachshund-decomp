/* compiler: 1.2/sp2p3  */
/* func_0206b9d8 from projets/madagascar/src/auto/func_0206b9d8.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef signed char s8;
typedef unsigned short u16;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02080820(void *, M2C_UNK);
extern s32 func_0206521c(M2C_UNK, M2C_UNK, M2C_UNK);
extern void *func_0206533c();
s32 func_020659c4(void) {
    void *temp_r2;
    void *temp_r4;

    temp_r4 = func_0206533c();
    if (func_0206521c(2, 7, 8) != 0) {
        return 0;
    }
    func_02080820((*(void **) ((s8 *) (temp_r4) + (4))) + 0x10, 4);
    temp_r2 = (*(void **) ((s8 *) (temp_r4) + (4)));
    if ((*(s32 *) ((s8 *) (temp_r2) + (0x10))) == 1) {
        return 0;
    }
    func_02080820(temp_r2 + 0x18E, 4);
    return ((*(u16 *) ((s8 *) ((*(void **) ((s8 *) (temp_r4) + (4)))) + (0x18E))) + 0x1F) & ~0x1F;
}
