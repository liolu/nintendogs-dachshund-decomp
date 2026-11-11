/* compiler: 1.2/sp2p3  */
/* func_02103b80 from projets/nintendogs-dachshund/src/auto/func_02103b80.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02003964(void);
extern void func_020a43f8(void);
extern void *data_02153740;
void func_020dfac8(void) {
    if ((*(s32 *) ((s8 *) (data_02153740) + (0xBC))) == 5) {
        if (func_02003964() != 0) {
            return;
        }
        func_020a43f8();
        return;
    }
    func_020a43f8();
}
