/* compiler: 1.2/sp2p3  */
/* func_020bb010 from projets/nintendogs-miniature-dachshund-friends/src/auto/func_020bb010.c (same code in another game of
 * this workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef unsigned short u16;
typedef long s32;
typedef unsigned long u32;
typedef s32 M2C_UNK;
extern M2C_UNK func_020b8c1c(M2C_UNK, M2C_UNK, M2C_UNK);
extern M2C_UNK func_020b8f84(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s32, s32, s32);
extern s32 func_ov004_0216075c();
extern void *data_02153740;
void func_020bb010(void *arg0) {
    M2C_UNK var_r2;
    s32 temp_r0;
    s32 temp_r0_2;

    if (func_ov004_0216075c() != 0) {
        (*(s32 *) ((s8 *) (data_02153740) + (0x34C8))) = 1;
    }
    temp_r0 = (*(s32 *) ((s8 *) (arg0) + (0x18)));
    func_020b8f84(0, 1, -0x10, -0x10, temp_r0, temp_r0, 0, 0x1F, 1);
    temp_r0_2 = (*(s32 *) ((s8 *) (arg0) + (4)));
    var_r2    = 0;
    switch (temp_r0_2) {
        case 1:
            break;
        case 0:
        case 2:
            var_r2 = 1;
            break;
    }
    if ((*(s32 *) ((s8 *) (arg0) + (0x10))) != 0) {
        var_r2 = 2;
        if ((u32) (*(u16 *) ((s8 *) (arg0) + (0x14))) < 0x8000U) {
            var_r2 = 1;
        }
    }
    func_020b8c1c(0, 1, var_r2);
}
