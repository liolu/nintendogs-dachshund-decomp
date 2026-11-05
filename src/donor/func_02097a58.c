/* compiler: 1.2/sp2p3  */
/* func_021191e8 from projets/nintendogs-dachshund/src/auto/func_021191e8.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef unsigned short u16;
typedef long s32;
typedef s32 M2C_UNK;
extern void func_020efb80(M2C_UNK);
extern void func_0208f130(void);
extern void func_02091fac(void);
extern void func_02097b58(void);
extern u16 data_0214affc;
extern M2C_UNK data_0214b024;
void func_02097a58(s32 arg0) {
    s16 temp_r0;

    if ((u16) (data_0214affc & 0xC0B) != 0) {
        (*(s16 *) ((s8 *) (arg0) + (0x1E))) = 2;
        func_020efb80(1);
    }
    if ((s32) (*(s16 *) ((s8 *) (arg0) + (0x1E))) < 2) {
        (*(s16 *) ((s8 *) (arg0) + (0x1C))) = (s16) ((*(s16 *) ((s8 *) (arg0) + (0x1C))) + 1);
        temp_r0                             = (*(s16 *) ((s8 *) (arg0) + (0x20)));
        if ((s32) temp_r0 > 0) {
            (*(s16 *) ((s8 *) (arg0) + (0x20))) = (s16) (temp_r0 - 1);
        } else {
            (*(s16 *) ((s8 *) (arg0) + (0x1E))) = 0;
        }
        if (((*(u16 *) ((s8 *) (&data_0214b024) + (2))) & 2) && ((s32) (*(s16 *) ((s8 *) (arg0) + (0x20))) < 0x23)) {
            (*(s16 *) ((s8 *) (arg0) + (0x1C))) = 0;
            (*(s16 *) ((s8 *) (arg0) + (0x1E))) = (s16) ((*(s16 *) ((s8 *) (arg0) + (0x1E))) + 1);
            (*(s16 *) ((s8 *) (arg0) + (0x20))) = 0x2D;
            func_02097b58();
        }
    } else {
        (*(s16 *) ((s8 *) (arg0) + (0x22))) = (s16) ((*(s16 *) ((s8 *) (arg0) + (0x22))) + 1);
        if ((*(u16 *) ((s8 *) (&data_0214b024) + (2))) & 2) {
            func_02097b58();
        }
    }
    if ((s32) (*(s16 *) ((s8 *) (arg0) + (0x22))) < 0x3C) {
        return;
    }
    (*(s16 *) ((s8 *) (arg0) + (4))) = 0x104;
    (*(s16 *) ((s8 *) (arg0) + (6))) = 0;
    func_0208f130();
    func_02091fac();
}
