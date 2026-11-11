/* compiler: 1.2/sp2p3  */
/* func_020afb3c from projets/nintendogs-shiba-friends/src/auto/func_020afb3c.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern void func_020aa2dc(M2C_UNK);
extern void func_020aa620(void);
extern void func_020b8b0c(M2C_UNK, M2C_UNK, M2C_UNK);
extern void *data_02153740;
void func_020afb3c(void) {
    s32 temp_r0;

    func_020aa2dc((s32) (data_02153740 + 0x3C98));
    temp_r0 = (*(s32 *) ((s8 *) (data_02153740) + (0xA8)));
    if (temp_r0 == 9) {
        return;
    }
    if (temp_r0 == 0xA) {
        return;
    }
    if (data_02153740 == ((void *) 0)) {
        return;
    }
    func_020aa620();
    func_020b8b0c(3, 0, 0);
}
