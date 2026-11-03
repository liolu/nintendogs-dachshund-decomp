/* compiler: 1.2/sp2p3  */
/* func_020522f4 from projets/children-of-mana/src/auto/func_020522f4.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef short s16;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02081288();
extern s16 data_0214a5c0;
void func_02000eac(s32 arg0, s32 arg1) {
    if ((arg1 & 0x3F) == 1) {
        data_0214a5c0 = 1;
        return;
    }
    func_02081288();
}
