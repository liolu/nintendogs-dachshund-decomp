/* compiler: 1.2/sp2p3  */
/* func_020f8c7c from projets/nintendogs-dachshund/src/auto/func_020f8c7c.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef long s32;
typedef s32 M2C_UNK;
extern s32 func_02003844(s32 *, M2C_UNK);
extern void func_020d3eb8(s32);
extern void func_020d4c04(s32);
extern M2C_UNK func_02107ca4(s32, s16);
void func_020d4c8c(s32 arg0, s32 arg1, s32 arg2) {
    s16 temp_r1;
    s32 temp_r0;

    func_02107ca4(arg0, (s16) arg2);
    (*(s32 *) ((s8 *) (arg0) + (0x214)))         = func_02003844((s32 *) arg1, 0x3C);
    (*(void (**)(s32))((s8 *) (arg0) + (0x1F4))) = func_020d4c04;
    (*(void (**)(s32))((s8 *) (arg0) + (0x1F8))) = func_020d3eb8;
    temp_r0                                      = (*(s32 *) ((s8 *) (arg0) + (0x214)));
    (*(s16 *) ((s8 *) (temp_r0) + (0)))          = 0;
    (*(s32 *) ((s8 *) (temp_r0) + (4)))          = 0;
    (*(s32 *) ((s8 *) (arg0) + (0xB0)))          = 0;
    (*(s32 *) ((s8 *) (arg0) + (0xB4)))          = 0;
    (*(s32 *) ((s8 *) (arg0) + (0xB8)))          = 0;
    (*(s32 *) ((s8 *) (temp_r0) + (8)))          = 0;
    (*(s32 *) ((s8 *) (temp_r0) + (0x24)))       = 0;
    (*(s32 *) ((s8 *) (temp_r0) + (0x34)))       = 0;
    temp_r1                                      = (*(s16 *) ((s8 *) (arg0) + (0x94)));
    switch (temp_r1) {
        case 0x40:
            (*(s32 *) ((s8 *) (arg0) + (0xF8)))    = 0x333;
            (*(s16 *) ((s8 *) (arg0) + (0xA6)))    = 1;
            (*(s32 *) ((s8 *) (arg0) + (0xAC)))    = 0x5DC;
            (*(s32 *) ((s8 *) (temp_r0) + (0xC)))  = 0x600;
            (*(s32 *) ((s8 *) (temp_r0) + (0x14))) = 0x10;
            (*(s32 *) ((s8 *) (temp_r0) + (0x1C))) = 0x1D0;
            (*(s32 *) ((s8 *) (temp_r0) + (0x20))) = 0xD0;
            break;
        case 0x41:
            (*(s32 *) ((s8 *) (arg0) + (0xF8)))    = 0x333;
            (*(s16 *) ((s8 *) (arg0) + (0xA6)))    = 0;
            (*(s32 *) ((s8 *) (arg0) + (0xAC)))    = 0x708;
            (*(s32 *) ((s8 *) (temp_r0) + (0xC)))  = 0x800;
            (*(s32 *) ((s8 *) (temp_r0) + (0x14))) = 8;
            (*(s32 *) ((s8 *) (temp_r0) + (0x1C))) = 0x1D0;
            (*(s32 *) ((s8 *) (temp_r0) + (0x20))) = 0xD0;
            break;
        case 0x42:
            (*(s32 *) ((s8 *) (arg0) + (0xF8)))    = 0x333;
            (*(s16 *) ((s8 *) (arg0) + (0xA6)))    = 2;
            (*(s32 *) ((s8 *) (arg0) + (0xAC)))    = 0x5DC;
            (*(s32 *) ((s8 *) (temp_r0) + (0xC)))  = 0x400;
            (*(s32 *) ((s8 *) (temp_r0) + (0x14))) = 0x19;
            (*(s32 *) ((s8 *) (temp_r0) + (0x1C))) = 0x1D0;
            (*(s32 *) ((s8 *) (temp_r0) + (0x20))) = 0xD0;
            break;
    }
    (*(s32 *) ((s8 *) (temp_r0) + (0x10))) = (s32) (*(s32 *) ((s8 *) (temp_r0) + (0xC)));
    (*(s32 *) ((s8 *) (temp_r0) + (0x18))) = (s32) (*(s32 *) ((s8 *) (temp_r0) + (0x14)));
}
