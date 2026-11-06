/* compiler: 1.2/sp2p3  */
/* func_020bfa14 from projets/nintendogs-dachshund/src/auto/func_020bfa14.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef unsigned short u16;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_020657ec(void);
extern void func_0206e004(M2C_UNK, M2C_UNK, M2C_UNK);
extern u16 data_021560fc;
extern M2C_UNK data_02156140;
void func_0211f35c(s32 arg0, s32 arg1) {
    func_0206e004(arg1, (s32) &data_02156140, 0x40);
    (*(s16 *) ((s8 *) (&data_02156140) + (0x18))) = (s16) func_020657ec();
    (*(s16 *) ((s8 *) (&data_02156140) + (0x32))) = (s16) arg0;
    data_021560fc += 1;
    (*(u16 *) ((s8 *) (&data_02156140) + (0xC))) = (u16) data_021560fc;
}
