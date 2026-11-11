/* compiler: 1.2/sp2p3  */
/* func_020bd4d4 from projets/nintendogs-dachshund/src/auto/func_020bd4d4.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_0210614c(void);
extern M2C_UNK func_0211290c(M2C_UNK);
extern void func_02113418(M2C_UNK, M2C_UNK);
void func_0211cd58(s32 arg0) {
    s32 temp_r0;
    s32 temp_r0_2;

    if (func_0210614c() == 0xA) {
        (*(s32 *) ((s8 *) (arg0) + (0))) = 0;
        temp_r0                          = (*(s32 *) ((s8 *) (arg0) + (0)));
        switch (temp_r0) {
            case 0:
                (*(s16 *) ((s8 *) (arg0) + (4))) = 0;
                return;
            case 1:
                (*(s16 *) ((s8 *) (arg0) + (0x5C))) = (s16) func_0211290c(-1);
                return;
            case 2:
                (*(s16 *) ((s8 *) (arg0) + (0x5C))) = (s16) func_0211290c(-1);
                func_02113418(arg0 + 8, (s32) (*(s16 *) ((s8 *) (arg0) + (0x5C))));
                (*(s32 *) ((s8 *) (arg0) + (0x58))) = 0;
                return;
        }
    } else {
        if (func_0210614c() != 0xB) {
            return;
        }
        (*(s32 *) ((s8 *) (arg0) + (0))) = 2;
        temp_r0_2                        = (*(s32 *) ((s8 *) (arg0) + (0)));
        switch (temp_r0_2) {
            case 0:
                (*(s16 *) ((s8 *) (arg0) + (4))) = 0;
                return;
            case 1:
                (*(s16 *) ((s8 *) (arg0) + (0x5C))) = (s16) func_0211290c(-1);
                return;
            case 2:
                (*(s16 *) ((s8 *) (arg0) + (0x5C))) = (s16) func_0211290c(-1);
                func_02113418(arg0 + 8, (s32) (*(s16 *) ((s8 *) (arg0) + (0x5C))));
                (*(s32 *) ((s8 *) (arg0) + (0x58))) = 0;
                return;
        }
    }
}
