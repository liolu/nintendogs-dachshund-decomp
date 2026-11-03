/* compiler: 1.2/sp2p3  */
/* func_020585a4 from projets/children-of-mana/src/auto/func_020585a4.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern void func_0206a528(M2C_UNK);
extern void func_0206d868(M2C_UNK);
extern s32 data_0213b3c4;
extern s32 data_0214e9cc;
void func_0206c364(void) {
    if (data_0213b3c4 != -1) {
        func_0206d868(data_0213b3c4);
    }
    func_0206a528(data_0214e9cc);
    data_0214e9cc = 0;
}
