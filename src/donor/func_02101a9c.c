/* compiler: 1.2/sp2p3  */
/* func_020a16b8 from projets/nintendogs-dachshund/src/auto/func_020a16b8.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02003980(void);
extern M2C_UNK func_020cba34(void);
extern void func_020a43f8(void);
extern void func_020b7ee0(void);
extern M2C_UNK func_020b7efc(void);
extern void func_020b8b0c(M2C_UNK, M2C_UNK, M2C_UNK);
extern void func_020b8b2c(M2C_UNK, M2C_UNK, M2C_UNK);
extern void func_020b8ce8(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
extern void *data_02153740;
void func_02101a9c(s32 arg0) {
    s32 temp_r0;
    s32 temp_r0_2;

    if (func_020cba34() == 0) {
        return;
    }
    if (((*(s32 *) ((s8 *) (data_02153740) + (0xBC))) == 0x1D) || (func_02003980() == 0)) {
        if ((*(s32 *) ((s8 *) (data_02153740) + (0xBC))) != 0x1D) {
            return;
        }
        if (func_020b7efc() == 0) {
            return;
        }
        goto block_8;
    }
block_8:
    func_020b8b0c(2, 2, 1);
    func_020b7ee0();
    temp_r0 = (*(s32 *) ((s8 *) (arg0) + (0x10)));
    switch (temp_r0) {
        case 0:
            (*(s32 *) ((s8 *) (arg0) + (0))) = (s32) ((*(s32 *) ((s8 *) (arg0) + (0))) + 1);
            if ((s32) (*(s32 *) ((s8 *) (arg0) + (0))) <= 0x10) {
                return;
            }
            func_020b8b2c(2, 2, 0);
            func_020b8b2c(2, 1, 1);
            func_020b8b0c(2, 1, 1);
            (*(s32 *) ((s8 *) (arg0) + (0)))    = 0;
            (*(s32 *) ((s8 *) (arg0) + (0x10))) = 1;
            return;
        case 1:
            (*(s32 *) ((s8 *) (arg0) + (0))) = (s32) ((*(s32 *) ((s8 *) (arg0) + (0))) + 1);
            if ((s32) (*(s32 *) ((s8 *) (arg0) + (0))) <= 0x10) {
                return;
            }
            func_020b8b2c(2, 1, 0);
            func_020b8b2c(2, 0, 1);
            func_020b8b2c(2, 3, 1);
            func_020b8b0c(2, 0, 1);
            func_020b8b0c(2, 3, 1);
            (*(s32 *) ((s8 *) (arg0) + (0)))    = 0;
            (*(s32 *) ((s8 *) (arg0) + (0x10))) = 2;
            return;
        case 2:
            (*(s32 *) ((s8 *) (arg0) + (0))) = (s32) ((*(s32 *) ((s8 *) (arg0) + (0))) + 1);
            if ((s32) (*(s32 *) ((s8 *) (arg0) + (0))) > 0x10) {
                func_020b8b2c(2, 0, 0);
                func_020b8b2c(2, 3, 0);
                func_020b8ce8(2, 3, 0, 0);
                (*(s32 *) ((s8 *) (arg0) + (0)))    = 0;
                (*(s32 *) ((s8 *) (arg0) + (0x10))) = 3;
                func_020a43f8();
                return;
            }
            temp_r0_2 = (*(s32 *) ((s8 *) (arg0) + (8)));
            if (temp_r0_2 >= 0) {
                return;
            }
            (*(s32 *) ((s8 *) (arg0) + (8))) = (s32) (temp_r0_2 + 4);
            func_020b8ce8(2, 3, (s32) (s16) (*(s32 *) ((s8 *) (arg0) + (8))), 0);
            return;
    }
}
