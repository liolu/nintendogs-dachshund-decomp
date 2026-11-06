/* compiler: 1.2/sp2p3  */
/* func_0208fe68 from projets/nintendogs-dachshund/src/auto/func_0208fe68.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02071fd4(M2C_UNK);
extern s32 data_02154eec;
s32 func_020f0698(void) {
    if ((data_02154eec != 0) && (func_02071fd4((s32) &data_02154eec) == 0x7B)) {
        return 1;
    }
    return 0;
}
