/* compiler: 1.2/sp2p3  */
/* func_020975ac from projets/nintendogs-dachshund/src/auto/func_020975ac.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02001f54(M2C_UNK *);
extern s32 data_0215548c;
extern s32 data_02155494;
extern s32 data_02155498;
extern M2C_UNK data_0215549c;
void func_020f7d38(void) {
    if (data_02155494 == 0) {
        return;
    }
    if (data_02155498 != 0) {
        return;
    }
    func_02001f54(&data_0215549c);
    data_0215548c = (*(s32 *) ((s8 *) (&data_0215549c) + (4)));
    data_02155498 = 1;
}
