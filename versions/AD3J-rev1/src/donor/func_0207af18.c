/* compiler: 1.2/sp2p3  */
/* func_02071300 from projets/children-of-mana/src/auto/func_02071300.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef signed char s8;
typedef unsigned char u8;
typedef unsigned short u16;
typedef long s32;
typedef unsigned long u32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02078eec(M2C_UNK, M2C_UNK, M2C_UNK);
extern M2C_UNK func_02078f6c(M2C_UNK, M2C_UNK);
extern M2C_UNK func_02078f7c(M2C_UNK, M2C_UNK);
extern void func_0207afa0(M2C_UNK, M2C_UNK, M2C_UNK);
extern void func_0207aff8(M2C_UNK, M2C_UNK, M2C_UNK);
void func_0207af18(s32 arg0, s32 arg1, s32 arg2) {
    s32 temp_r5;
    u8 temp_r1;
    void *temp_r0;

    temp_r5 = (*(s32 *) ((s8 *) (arg1) + (8)));
    temp_r0 =
        (void *) func_02078eec(temp_r5, (s32) (u16) arg2, (s32) ((u32) ((*(s32 *) ((s8 *) (arg1) + (0))) * 0x10) >> 0x10));
    func_0207aff8((*(s32 *) ((s8 *) (arg1) + (0x14))), func_02078f7c(temp_r5, (s32) (*(u8 *) ((s8 *) (temp_r0) + (2)))), arg0);
    temp_r1 = (*(u8 *) ((s8 *) (temp_r0) + (3)));
    if (temp_r1 == 0xFF) {
        return;
    }
    func_0207afa0((*(s32 *) ((s8 *) (arg1) + (0x14))), func_02078f6c(temp_r5, (s32) temp_r1), arg0);
}
