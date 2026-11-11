/* compiler: 1.2/sp2p3  */
/* func_020ca618 from projets/nintendogs-dachshund/src/auto/func_020ca618.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern void func_01ffec30(M2C_UNK);
extern void func_01ffe67c(void);
extern s32 data_02154c30;
extern s32 data_02154c38;
void func_020c5014(s32 arg0) {
    data_02154c38                       = arg0;
    data_02154c30                       = 0;
    (*(s32 *) ((s8 *) (arg0) + (0x20))) = 0;
    func_01ffec30(arg0);
    func_01ffe67c();
    data_02154c30                       = 0;
    (*(s32 *) ((s8 *) (arg0) + (0x1C))) = (s32) ((*(s32 *) ((s8 *) (arg0) + (0x1C))) + 1);
    data_02154c38                       = 0;
}
