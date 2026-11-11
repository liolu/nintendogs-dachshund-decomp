/* compiler: 1.2/sp2p3  */
/* func_020f285c from projets/nintendogs-dachshund/src/auto/func_020f285c.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef unsigned long u32;
typedef s32 M2C_UNK;
extern void func_020a3524(M2C_UNK);
extern void func_020b8b0c(M2C_UNK, M2C_UNK, M2C_UNK);
extern void func_020be07c(M2C_UNK);
void func_020bf8fc(s32 arg0) {
    s32 temp_r0_2;
    u32 temp_r0;

    temp_r0 = (*(u32 *) ((s8 *) (arg0) + (4)));
    switch (temp_r0) {
        case 3:
            break;
        default:
            break;
        case 0:
            if ((*(s32 *) ((s8 *) (arg0) + (0x28))) == 0) {
                func_020be07c(arg0 + 8);
            }
            if ((s32) (*(s32 *) ((s8 *) (arg0) + (0x28))) >= 0x23) {
                (*(u32 *) ((s8 *) (arg0) + (4)))    = 1U;
                (*(s32 *) ((s8 *) (arg0) + (0x28))) = 0;
                func_020b8b0c(2, 1, 0);
            }
            break;
        case 1:
            temp_r0_2 = (*(s32 *) ((s8 *) (arg0) + (0x28)));
            if (temp_r0_2 > 0x20) {
                (*(u32 *) ((s8 *) (arg0) + (4)))    = 2U;
                (*(s32 *) ((s8 *) (arg0) + (0x28))) = 0;
                func_020b8b0c(2, 0, 0);
            } else if (temp_r0_2 <= 0x20) {
                func_020a3524((s32) ((u32) ((temp_r0_2 + ((u32) temp_r0_2 >> 0x1F)) << 0xF) >> 0x10));
            }
            break;
        case 2:
            if ((s32) (*(s32 *) ((s8 *) (arg0) + (0x28))) > 0x3C) {
                (*(s32 *) ((s8 *) (arg0) + (0x28))) = 0;
                (*(u32 *) ((s8 *) (arg0) + (4)))    = 3U;
            }
            break;
    }
    (*(s32 *) ((s8 *) (arg0) + (0x28))) = (s32) ((*(s32 *) ((s8 *) (arg0) + (0x28))) + 1);
}
