/* compiler: 1.2/sp2p3  */
/* func_0208a7b8 from projets/nintendogs-dachshund/src/auto/func_0208a7b8.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef unsigned short u16;
typedef long s32;
typedef unsigned long u32;
typedef s32 M2C_UNK;
extern M2C_UNK data_021306bc;
extern void *data_0214b150;
u8 func_020eb0c0(s32 arg0) {
    void *temp_lr;

    temp_lr = data_0214b150 + 0x2C;
    return *((u8 *) ((s8 *) &data_021306bc + (arg0 * 4)) +
             (s16) (u16) ((u32) (((((*(s32 *) ((s8 *) (temp_lr) + (8))) +
                                    ((*(s32 *) ((s8 *) (data_0214b150) + (0x2C))) + (*(s32 *) ((s8 *) (temp_lr) + (4))))) *
                                   0x10DCD) +
                                  1)
                                 << 0x10) >>
                          0x1E));
}
