/* compiler: 1.2/sp2p3  */
/* func_020ca23c from projets/nintendogs-dachshund/src/auto/func_020ca23c.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef unsigned short u16;
typedef long s32;
typedef s32 M2C_UNK;
extern void *func_02003844(M2C_UNK, M2C_UNK);
extern M2C_UNK func_02006518(void *);
extern void *func_02078be4(s32);
extern M2C_UNK data_02143120;
void *func_020c4c34(M2C_UNK arg0, s32 arg1) {
    void *temp_r0;
    void *temp_r0_2;

    temp_r0                                  = func_02003844(arg0, 0x18);
    (*(M2C_UNK **) ((s8 *) (temp_r0) + (0))) = &data_02143120;
    (*(s16 *) ((s8 *) (temp_r0) + (4)))      = 0;
    (*(s16 *) ((s8 *) (temp_r0) + (6)))      = 0;
    (*(s32 *) ((s8 *) (temp_r0) + (8)))      = 0;
    (*(void **) ((s8 *) (temp_r0) + (0xC)))  = ((void *) 0);
    func_02006518(temp_r0 + 0x10);
    (*(s32 *) ((s8 *) (temp_r0) + (8)))     = arg1;
    (*(void **) ((s8 *) (temp_r0) + (0xC))) = ((void *) 0);
    if (arg1 != 0) {
        temp_r0_2 = func_02078be4(arg1);
        (*(void **) ((s8 *) (temp_r0) + (0xC))) =
            (void *) (temp_r0_2 + (*(s32 *) ((s8 *) ((temp_r0_2 + (*(u16 *) ((s8 *) (temp_r0_2) + (0xE))))) + (0xC))));
    }
    return temp_r0;
}
