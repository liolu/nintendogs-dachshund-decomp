/* compiler: 1.2/sp2p3  */
/* func_02102750 from projets/nintendogs-miniature-dachshund-friends/src/auto/func_02102750.c (same code in another game of
 * this workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef long s32;
typedef unsigned long u32;
typedef s32 M2C_UNK;
extern M2C_UNK func_020b7f88(M2C_UNK, s16, s16);
extern M2C_UNK func_020cd3d0(M2C_UNK, s32, M2C_UNK, M2C_UNK, s32);
void func_02102748(void *arg0) {
    u32 temp_r0;

    func_020b7f88(0x14, (*(s16 *) ((s8 *) (arg0) + (0x888))), (*(s16 *) ((s8 *) (arg0) + (0x88A))));
    temp_r0 = (*(u32 *) ((s8 *) (arg0) + (0x964)));
    switch (temp_r0) {
        default:
            break;
        case 0:
            (*(s32 *) ((s8 *) (arg0) + (0x14))) = 0x2526;
            break;
        case 1:
            (*(s32 *) ((s8 *) (arg0) + (0x14))) = 0x2526;
            break;
        case 2:
            (*(s32 *) ((s8 *) (arg0) + (0x14))) = 0x2530;
            break;
        case 3:
            (*(s32 *) ((s8 *) (arg0) + (0x14))) = 0x2544;
            break;
    }
    func_020cd3d0(8, (*(s32 *) ((s8 *) (arg0) + (0x14))), 0, 0, 1);
}
