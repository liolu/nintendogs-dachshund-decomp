/* compiler: 1.2/sp2p3  */
/* func_02088e78 from projets/nintendogs-dachshund/src/auto/func_02088e78.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_020f07bc(M2C_UNK);
extern M2C_UNK func_020f9338(void *, M2C_UNK, M2C_UNK);
extern void *data_02154cb0;
s32 func_020e9798(void) {
    if ((*(s16 *) ((s8 *) (data_02154cb0) + (0x4E30))) == 0) {
        return 0;
    }
    func_020f9338(data_02154cb0, 0x39, 1);
    func_020f07bc(0x7D);
    return 1;
}
