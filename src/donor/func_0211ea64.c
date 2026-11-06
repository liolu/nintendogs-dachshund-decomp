/* compiler: 1.2/sp2p3  */
/* func_0211ea64 from projets/nintendogs-miniature-dachshund-friends/src/auto/func_0211ea64.c (same code in another game of
 * this workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_0211fe30(M2C_UNK *, M2C_UNK *);
extern void *data_021560e8;
extern M2C_UNK func_0211e324;
s32 func_0211ea64(void) {
    M2C_UNK sp0;

    if ((*(s32 *) ((s8 *) (data_021560e8) + (0x28))) != 1) {
        return 0;
    }
    (*(s32 *) ((s8 *) (data_021560e8) + (0x48))) = 1;
    (*(s16 *) ((s8 *) (data_021560e8) + (0x4C))) = 0;
    (*(s16 *) ((s8 *) (data_021560e8) + (0x50))) = 0;
    (*(s16 *) ((s8 *) (data_021560e8) + (0x56))) = 0;
    (*(s16 *) ((s8 *) (data_021560e8) + (0x54))) = 0;
    (*(s16 *) ((s8 *) (data_021560e8) + (0x4E))) = 0xA;
    (*(s16 *) ((s8 *) (data_021560e8) + (0x52))) = 6;
    (*(s32 *) ((s8 *) (data_021560e8) + (0x2C))) = 3;
    (*(s32 *) ((s8 *) (data_021560e8) + (0x28))) = 4;
    func_0211fe30(&func_0211e324, &sp0);
    (*(s32 *) ((s8 *) (data_021560e8) + (0x5C))) = 0;
    (*(s16 *) ((s8 *) (data_021560e8) + (0x58))) = 0xB4;
    return 1;
}
