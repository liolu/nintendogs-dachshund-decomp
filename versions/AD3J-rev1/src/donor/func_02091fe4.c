/* compiler: 1.2/sp2p3  */
/* func_02113754 from projets/nintendogs-dachshund/src/auto/func_02113754.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef unsigned short u16;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02106344(void);
extern void *data_02153714;
void func_02091fe4(s32 arg0) {
    void *temp_r0;

    (*(s16 *) ((s8 *) (data_02153714) + (0xA))) = 1;
    (*(s16 *) ((s8 *) (data_02153714) + (0xC))) = (s16) arg0;
    if ((*(u16 *) ((s8 *) (data_02153714) + (6))) != 1) {
        (*(s16 *) ((s8 *) (data_02153714) + (8))) = 1;
        return;
    }
    (*(s16 *) ((s8 *) (data_02153714) + (8))) = 0;
    temp_r0                                   = (void *) func_02106344();
    (*(u16 *) ((s8 *) (temp_r0) + (0x26)))    = (u16) ((*(u16 *) ((s8 *) (temp_r0) + (0x26))) ^ 1);
}
