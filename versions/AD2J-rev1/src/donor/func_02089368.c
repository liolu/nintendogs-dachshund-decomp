/* compiler: 1.2/sp2p3  */
/* func_02085bf0 from projets/nintendogs-dachshund/src/auto/func_02085bf0.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_020692f0(void *, void *);
extern s32 data_0215367c;
void func_02089368(void *arg0) {
    s32 temp_lr;
    s32 temp_r2;
    s32 temp_r4;

    temp_lr                          = (data_0215367c * 0x5EEDF715) + 0x1B0CB173;
    data_0215367c                    = temp_lr;
    (*(s32 *) ((s8 *) (arg0) + (0))) = (s32) (temp_lr >> 8);
    temp_r4                          = (data_0215367c * 0x5EEDF715) + 0x1B0CB173;
    data_0215367c                    = temp_r4;
    (*(s32 *) ((s8 *) (arg0) + (4))) = (s32) (temp_r4 >> 8);
    temp_r2                          = (data_0215367c * 0x5EEDF715) + 0x1B0CB173;
    data_0215367c                    = temp_r2;
    (*(s32 *) ((s8 *) (arg0) + (8))) = (s32) (temp_r2 >> 8);
    func_020692f0(arg0, arg0);
}
