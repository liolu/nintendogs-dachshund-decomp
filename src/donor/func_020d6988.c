/* compiler: 1.2/sp2p3  */
/* func_020fa978 from projets/nintendogs-dachshund/src/auto/func_020fa978.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef long s32;
typedef s32 M2C_UNK;
extern s32 func_01ffda04(M2C_UNK);
extern M2C_UNK func_02027044(s32, M2C_UNK);
extern M2C_UNK func_020274b0(s32, s16);
extern s32 func_020340c4();
extern M2C_UNK func_0210fe28(void *);
extern M2C_UNK func_02092ba0(s16);
void func_020d6988(void *arg0, M2C_UNK arg1) {
    s32 temp_r4;

    temp_r4 = func_01ffda04(arg1);
    if (func_020340c4() == 0) {
        return;
    }
    func_02027044(temp_r4, 0x23);
    func_020274b0(temp_r4, (*(s16 *) ((s8 *) (arg0) + (0x94))));
    func_02092ba0((*(s16 *) ((s8 *) (arg0) + (0x94))));
    func_0210fe28(arg0);
}
