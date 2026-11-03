/* compiler: 1.2/sp2p3  */
/* func_0205876c from projets/children-of-mana/src/auto/func_0205876c.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef long s32;
typedef s32 M2C_UNK;
extern void func_0206abec(M2C_UNK);
extern void func_0206d868(M2C_UNK);
extern s32 data_0213b3c4;
extern s32 data_0214e9d0;
extern s32 data_0214e9d4;
void func_0206c448(void) {
    if (data_0213b3c4 != -1) {
        func_0206d868(data_0213b3c4);
    }
    func_0206abec(data_0214e9d4);
    data_0214e9d4 = 0;
    data_0214e9d0 = 0;
}
