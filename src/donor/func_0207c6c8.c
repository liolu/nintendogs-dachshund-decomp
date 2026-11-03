/* compiler: 1.2/sp2p3  */
/* func_020b338c from projets/eyeshield-21/src/auto/func_020b338c.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef unsigned short u16;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02068f28(s32, s32);
extern s32 func_02068fc8();
void func_0207c6c8(void *arg0, void *arg1) {
    s32 temp_r4;
    s32 temp_r7;

    temp_r4 = (*(u16 *) ((s8 *) (arg1) + (0x2C))) << 0xC;
    temp_r7 = (*(u16 *) ((s8 *) (arg1) + (0x2E))) << 0xC;
    func_02068f28(temp_r7, temp_r4);
    (*(s32 *) ((s8 *) (arg0) + (0)))    = (s32) (*(s16 *) ((s8 *) (arg1) + (0x22)));
    (*(s32 *) ((s8 *) (arg0) + (0x14))) = (s32) (*(s16 *) ((s8 *) (arg1) + (0x22)));
    (*(s32 *) ((s8 *) (arg0) + (4)))    = (s32) ((s32) ((*(s16 *) ((s8 *) (arg1) + (0x20))) * func_02068fc8()) >> 0xC);
    func_02068f28(temp_r4, temp_r7);
    (*(s32 *) ((s8 *) (arg0) + (0x30))) =
        (s32) ((*(u16 *) ((s8 *) (arg1) + (0x2C))) * (*(s16 *) ((s8 *) (arg1) + (0x20))) * 0x10);
    (*(s32 *) ((s8 *) (arg0) + (0x34))) =
        (s32) ((0 - (*(u16 *) ((s8 *) (arg1) + (0x2E)))) * ((*(s16 *) ((s8 *) (arg1) + (0x22))) - 0x1000) * 0x10);
    (*(s32 *) ((s8 *) (arg0) + (0x10))) = (s32) ((s32) ((0 - (*(s16 *) ((s8 *) (arg1) + (0x20)))) * func_02068fc8()) >> 0xC);
}
