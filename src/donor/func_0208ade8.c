/* compiler: 1.2/sp2p3  */
/* func_02087670 from projets/nintendogs-dachshund/src/auto/func_02087670.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_0208120c(void);
extern void func_02081220(M2C_UNK);
extern s32 data_02153680;
extern M2C_UNK data_02153684;
void func_0208ade8(s32 arg0) {
    s32 temp_r0;
    void *temp_r2;
    void *temp_r2_2;

    if ((*(s32 *) ((s8 *) (arg0) + (0))) == 0) {
        return;
    }
    temp_r0 = func_0208120c();
    temp_r2 = (*(void **) ((s8 *) (arg0) + (4)));
    if (temp_r2 != ((void *) 0)) {
        (*(void **) ((s8 *) (temp_r2) + (8))) = (void *) (*(void **) ((s8 *) (arg0) + (8)));
    }
    temp_r2_2 = (*(void **) ((s8 *) (arg0) + (8)));
    if (temp_r2_2 != ((void *) 0)) {
        (*(void **) ((s8 *) (temp_r2_2) + (4))) = (void *) (*(void **) ((s8 *) (arg0) + (4)));
    }
    (*(s32 *) ((s8 *) (arg0) + (0)))    = 0;
    (*(void **) ((s8 *) (arg0) + (8)))  = ((void *) 0);
    (*(void **) ((s8 *) (arg0) + (4)))  = (void *) (*(void **) ((s8 *) (arg0) + (8)));
    (*(s32 *) ((s8 *) (arg0) + (0x10))) = (s32) ((*(s32 *) ((s8 *) (arg0) + (0x10))) & ~1);
    if ((*(s32 *) ((s8 *) (&data_02153684) + (0))) == arg0) {
        (*(s32 *) ((s8 *) (&data_02153684) + (8))) = 0;
        (*(s16 *) ((s8 *) (&data_02153684) + (6))) = 0;
        (*(s32 *) ((s8 *) (&data_02153684) + (0))) = (s32) data_02153680;
        (*(s16 *) ((s8 *) (&data_02153684) + (4))) = 0;
    }
    func_02081220(temp_r0);
}
