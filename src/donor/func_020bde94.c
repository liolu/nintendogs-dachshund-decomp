/* compiler: 1.2/sp2p3  */
/* func_020f0df0 from projets/nintendogs-dachshund/src/auto/func_020f0df0.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef unsigned short u16;
typedef long s32;
typedef unsigned long u32;
typedef s32 M2C_UNK;
extern M2C_UNK func_020b8918(s32, s32, M2C_UNK, M2C_UNK);
void func_020bde94(void *arg0, M2C_UNK arg1, M2C_UNK arg2) {
    s32 temp_r0_2;
    u16 temp_r0;

    func_020b8918((*(s32 *) ((s8 *) (arg0) + (0))), (*(s32 *) ((s8 *) (arg0) + (4))), arg1, arg2);
    temp_r0 = (*(u16 *) ((s8 *) (arg0) + (0x1E)));
    if (temp_r0 != 0) {
        (*(u16 *) ((s8 *) (arg0) + (0x1E))) = (u16) (temp_r0 - 1);
        return;
    }
    temp_r0_2 = (*(s32 *) ((s8 *) (arg0) + (0x14)));
    switch (temp_r0_2) {
        case 2:
            (*(u16 *) ((s8 *) (arg0) + (0x1C))) = (u16) ((*(u16 *) ((s8 *) (arg0) + (0x1C))) + 1);
            if ((u32) (*(u16 *) ((s8 *) (arg0) + (0x1C))) > (u32) (*(u16 *) ((s8 *) (arg0) + (0xE)))) {
                (*(s32 *) ((s8 *) (arg0) + (0x14))) = 3;
                (*(u16 *) ((s8 *) (arg0) + (0x1C))) = (u16) (*(u16 *) ((s8 *) (arg0) + (0xE)));
            }
            return;
        case 4:
            (*(u16 *) ((s8 *) (arg0) + (0x1C))) = (u16) ((*(u16 *) ((s8 *) (arg0) + (0x1C))) - 1);
            if ((*(u16 *) ((s8 *) (arg0) + (0x1C))) == 0) {
                (*(s32 *) ((s8 *) (arg0) + (0x14))) = 1;
                (*(u16 *) ((s8 *) (arg0) + (0x1C))) = 0U;
            }
            return;
    }
}
