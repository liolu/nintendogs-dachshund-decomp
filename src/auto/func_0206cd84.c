/* compiler: 1.2/sp2p3 */
/* func_02058dd0 from projets/children-of-mana/src/auto/func_02058dd0.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef long s32;
typedef unsigned long u32;
typedef s32 M2C_UNK;
extern s32 func_0206b718();
extern M2C_UNK func_0206da58(s32, M2C_UNK, s32, u32);
extern M2C_UNK func_0206dfd4(M2C_UNK, s32, u32);
extern s32 data_0213b3c4;
void func_0206cd84(M2C_UNK arg0, s32 arg1, u32 arg2) {
    s32 temp_ip;

    temp_ip = func_0206b718();
    if ((data_0213b3c4 != -1) && (arg2 > 0x1CU)) {
        func_0206da58(data_0213b3c4, arg0, temp_ip + arg1, arg2);
        return;
    }
    func_0206dfd4(arg0, temp_ip + arg1, arg2);
}
