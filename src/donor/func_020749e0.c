/* compiler: 1.2/sp2p3  */
/* func_020735dc from projets/nintendogs-dachshund/src/auto/func_020735dc.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_0207251c(void *);
extern M2C_UNK func_02074940(void *);
extern M2C_UNK func_020806b8(M2C_UNK *);
extern M2C_UNK func_02080728(M2C_UNK *);
extern M2C_UNK func_0208b608(void *);
extern M2C_UNK data_0214fdac;
void func_020749e0(void *arg0) {
    func_02080728(&data_0214fdac);
    if (((s32) ((*(s32 *) ((s8 *) (arg0) + (0x10C))) << 0x1E) >> 0x1F) != 0) {
        func_0207251c(arg0);
    }
    if (((s32) ((*(s32 *) ((s8 *) (arg0) + (0x10C))) << 0x1F) >> 0x1F) != 0) {
        func_0208b608(arg0 + 0x5C);
    }
    func_02074940(arg0);
    func_020806b8(&data_0214fdac);
}
