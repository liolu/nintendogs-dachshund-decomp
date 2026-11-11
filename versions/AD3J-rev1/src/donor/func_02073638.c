/* compiler: 1.2/sp2p3  */
/* func_0203b8a0 from projets/code-lyoko/src/auto/func_0203b8a0.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern s32 func_0207d66c(void *, M2C_UNK);
extern M2C_UNK func_0207d7e8(s32, void *);
extern void *func_0207e4e4(s32, s32, M2C_UNK);
void *func_02073638(s32 *arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 temp_r0_2;
    void *temp_r0;

    temp_r0 = func_0207e4e4(*arg0, ((arg1 + 0x1F) & ~0x1F) + 0x20, 0x20);
    if (temp_r0 == ((void *) 0)) {
        return ((void *) 0);
    }
    temp_r0_2                              = func_0207d66c(((s8 *) arg0 + 4), 0);
    (*(s32 *) ((s8 *) (temp_r0) + (8)))    = arg1;
    (*(s32 *) ((s8 *) (temp_r0) + (0xC)))  = arg2;
    (*(s32 *) ((s8 *) (temp_r0) + (0x10))) = arg3;
    (*(s32 *) ((s8 *) (temp_r0) + (0x14))) = arg4;
    func_0207d7e8(temp_r0_2, temp_r0);
    return temp_r0 + 0x20;
}
