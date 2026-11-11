/* compiler: 1.2/sp2p3  */
/* func_020bc3a4 from projets/nintendogs-dachshund/src/auto/func_020bc3a4.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02106144(void);
extern void func_0211a6a0(M2C_UNK);
extern void func_0211a6b0(M2C_UNK, M2C_UNK);
extern void func_0211a6b8(M2C_UNK);
extern M2C_UNK func_020c2224(M2C_UNK);
extern M2C_UNK data_021490e4;
extern M2C_UNK data_021490fc;
extern M2C_UNK data_02149114;
extern M2C_UNK data_0214912c;
void func_0211bc20(s32 arg0) {
    func_0211a6b8(arg0);
    if (func_02106144() == 6) {
        (*(s32 *) ((s8 *) (arg0) + (0x38))) = func_020c2224((s32) &data_021490e4);
    } else if (func_02106144() == 9) {
        (*(s32 *) ((s8 *) (arg0) + (0x38))) = func_020c2224((s32) &data_021490fc);
    } else if (func_02106144() == 0xC) {
        (*(s32 *) ((s8 *) (arg0) + (0x38))) = func_020c2224((s32) &data_02149114);
    } else if (func_02106144() == 0xD) {
        (*(s32 *) ((s8 *) (arg0) + (0x38))) = func_020c2224((s32) &data_0214912c);
    }
    func_0211a6b0(arg0, (*(s32 *) ((s8 *) (arg0) + (0x38))));
    func_0211a6a0(arg0);
}
