/* compiler: 1.2/sp2p3  */
/* func_0209b160 from projets/nintendogs-dachshund/src/auto/func_0209b160.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern void func_020a43f8(void);
extern void func_020b7ee0(void);
extern M2C_UNK func_020b7efc(void);
extern void func_020b8b0c(M2C_UNK, M2C_UNK, M2C_UNK);
extern void func_020b8b2c(M2C_UNK, M2C_UNK, M2C_UNK);
extern void *data_02153740;
void func_020fb664(s32 arg0) {
    s32 temp_r0;

    if ((*(s32 *) ((s8 *) (arg0) + (8))) != 0) {
        (*(s32 *) ((s8 *) (arg0) + (0xC))) = 6;
        func_020b8b2c(2, 0, 0);
        func_020b8b2c(2, 2, 0);
        func_020b8b0c(2, 0, 1);
        func_020b8b0c(2, 2, 1);
        func_020a43f8();
        return;
    }
    if (((*(s32 *) ((s8 *) (data_02153740) + (0xBC))) == 0x17) && (func_020b7efc() == 0)) {
        return;
    }
    func_020b7ee0();
    func_020b8b0c(2, 2, 1);
    temp_r0 = (*(s32 *) ((s8 *) (arg0) + (0xC)));
    switch (temp_r0) {
        case 0:
            (*(s32 *) ((s8 *) (arg0) + (0))) = (s32) ((*(s32 *) ((s8 *) (arg0) + (0))) + 1);
            if ((s32) (*(s32 *) ((s8 *) (arg0) + (0))) <= 0x10) {
                return;
            }
            func_020b8b2c(2, 2, 0);
            func_020b8b2c(2, 0, 1);
            func_020b8b0c(2, 0, 1);
            (*(s32 *) ((s8 *) (arg0) + (0)))   = 0;
            (*(s32 *) ((s8 *) (arg0) + (0xC))) = 1;
            return;
        case 1:
            (*(s32 *) ((s8 *) (arg0) + (0))) = (s32) ((*(s32 *) ((s8 *) (arg0) + (0))) + 1);
            if ((s32) (*(s32 *) ((s8 *) (arg0) + (0))) <= 0x10) {
                return;
            }
            func_020b8b2c(2, 0, 0);
            (*(s32 *) ((s8 *) (arg0) + (0)))   = 0;
            (*(s32 *) ((s8 *) (arg0) + (0xC))) = 2;
            func_020a43f8();
            return;
    }
}
