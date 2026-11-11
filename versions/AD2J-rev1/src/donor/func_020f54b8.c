/* compiler: 1.2/sp2p3  */
/* func_02094d24 from projets/nintendogs-dachshund/src/auto/func_02094d24.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern void *func_0207dcec(s32, M2C_UNK, M2C_UNK);
extern s32 func_0207dd3c(M2C_UNK, M2C_UNK, M2C_UNK);
extern M2C_UNK func_020f4944();
extern M2C_UNK func_020f4964();
extern void *data_02155060;
extern s32 data_02155064;
extern s32 data_02155068;
void func_020f54b8(M2C_UNK arg0, M2C_UNK arg1) {
    s32 temp_r0;

    temp_r0       = func_0207dd3c(arg0, arg1, 0);
    data_02155068 = temp_r0;
    data_02155060 = func_0207dcec(temp_r0, 0x18, 4);
    func_020f4944();
    (*(void **) ((s8 *) (data_02155060) + (0x14))) = func_0207dcec(data_02155068, 0x13C, 4);
    data_02155064                                  = 1;
    func_020f4964();
}
