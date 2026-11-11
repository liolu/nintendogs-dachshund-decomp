/* compiler: 1.2/sp2p3  */
/* func_0209f6b4 from projets/nintendogs-dachshund/src/auto/func_0209f6b4.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern void func_020a43f8(void);
extern void func_020b7ee0(void);
extern M2C_UNK func_020b7efc(void);
extern void *data_02153740;
void func_020ffaa4(void) {
    if ((*(s32 *) ((s8 *) (data_02153740) + (0xBC))) == 0x17) {
        if (func_020b7efc() == 0) {
            return;
        }
        func_020a43f8();
        func_020b7ee0();
        return;
    }
    func_020a43f8();
}
