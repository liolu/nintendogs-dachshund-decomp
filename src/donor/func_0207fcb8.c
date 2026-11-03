/* compiler: 1.2/sp2p3  */
/* func_0205b00c from projets/children-of-mana/src/auto/func_0205b00c.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef signed char s8;
typedef unsigned short u16;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_0207fb04();
extern s32 func_0208120c();
extern M2C_UNK func_02081220(s32);
extern void **data_0215333c;
void func_0207fcb8(u16 *arg0) {
    s32 temp_r4;
    void *temp_r2;

    temp_r4 = func_0208120c();
    temp_r2 = *data_0215333c;
    if (arg0 != ((void *) 0)) {
        *arg0 |= (u16) (1 << (*(s32 *) ((s8 *) (temp_r2) + (0x6C))));
    }
    (*(s32 *) ((s8 *) (temp_r2) + (0x64))) = 0;
    func_0207fb04();
    func_02081220(temp_r4);
}
