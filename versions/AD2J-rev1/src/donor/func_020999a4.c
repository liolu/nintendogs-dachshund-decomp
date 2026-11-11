/* compiler: 1.2/sp2p3  */
/* func_0211b134 from projets/nintendogs-dachshund/src/auto/func_0211b134.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern void func_0206ce4c(M2C_UNK, M2C_UNK, M2C_UNK);
extern void func_0206cfd8(M2C_UNK, M2C_UNK, M2C_UNK);
extern void *data_02153728;
void func_020999a4(void) {
    if (data_02153728 == ((void *) 0)) {
        return;
    }
    func_0206ce4c((*(s32 *) ((s8 *) ((*(void **) ((s8 *) (data_02153728) + (0xC)))) + (0x14))), 0, 0x4000);
    func_0206cfd8((*(s32 *) ((s8 *) ((*(void **) ((s8 *) (data_02153728) + (0x10)))) + (0xC))), 0, 0x100);
}
