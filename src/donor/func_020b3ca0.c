/* compiler: 1.2/sp2p3  */
/* func_020b3ca0 from projets/nintendogs-miniature-dachshund-friends/src/auto/func_020b3ca0.c (same code in another game of
 * this workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_020b8b0c(M2C_UNK, M2C_UNK, M2C_UNK);
extern M2C_UNK func_020b8cc8(M2C_UNK, M2C_UNK, M2C_UNK);
void func_020b3ca0(void *arg0) {
    s32 temp_r0;

    temp_r0 = (*(s32 *) ((s8 *) (arg0) + (0x8D0)));
    switch (temp_r0) {
        case 0:
            func_020b8b0c(2, 0xB, 0);
            func_020b8b0c(2, 0xC, 1);
            func_020b8b0c(2, 0xD, 0);
            break;
        case 1:
            func_020b8b0c(2, 0xB, 0);
            func_020b8b0c(2, 0xC, 0);
            func_020b8b0c(2, 0xD, 1);
            break;
        case 2:
            func_020b8b0c(2, 0xB, 1);
            func_020b8b0c(2, 0xC, 0);
            func_020b8b0c(2, 0xD, 0);
            break;
    }
    func_020b8cc8(2, 0xB, 3);
    func_020b8cc8(2, 0xC, 3);
    func_020b8cc8(2, 0xD, 3);
}
