/* compiler: 2.0/sp1p5  */
/* func_020ca2bc from projets/nintendogs-dachshund/src/auto/func_020ca2bc.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef long s32;
typedef s32 M2C_UNK;
extern void func_02006518(M2C_UNK);
extern M2C_UNK data_02143128;
void func_020c4cb4(s32 arg0) {
    (*(M2C_UNK **) ((s8 *) (arg0) + (0))) = &data_02143128;
    (*(s16 *) ((s8 *) (arg0) + (4)))      = 0;
    (*(s16 *) ((s8 *) (arg0) + (6)))      = 0;
    (*(s32 *) ((s8 *) (arg0) + (8)))      = 0;
    (*(s32 *) ((s8 *) (arg0) + (0xC)))    = 0;
    func_02006518(arg0 + 0x10);
}
