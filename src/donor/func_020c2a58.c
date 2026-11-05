/* compiler: 1.2/sp2p3  */
/* func_020c8000 from projets/nintendogs-dachshund/src/auto/func_020c8000.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern s32 (*data_0213b5b8)(M2C_UNK, M2C_UNK, M2C_UNK);
extern s32 (*data_0213b5c0)(M2C_UNK, M2C_UNK, M2C_UNK);
void func_020c2a58(s32 arg0) {
    (*(s32 *) ((s8 *) (arg0) + (0xB0))) = data_0213b5b8(0x4A00, 1, 0);
    (*(s32 *) ((s8 *) (arg0) + (0xB8))) = data_0213b5c0(0x2C00, 0, 0);
}
