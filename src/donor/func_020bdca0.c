/* compiler: 1.2/sp2p3  */
/* func_020f0bfc from projets/nintendogs-dachshund/src/auto/func_020f0bfc.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef unsigned short u16;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_020b8c1c(s32, u16, u16);
extern M2C_UNK func_020b8ce8(s32, u16, s16, s16);
s32 func_020bdca0(void *arg0, s16 arg1, s16 arg2) {
    M2C_UNK (*temp_r1_2)(void *);
    s32 var_r5;
    u16 temp_r1;

    var_r5 = 0;
    if ((*(s32 *) ((s8 *) (arg0) + (0x1C))) == 0) {
        (*(s32 *) ((s8 *) (arg0) + (0x1C))) = 1;
        (*(s16 *) ((s8 *) (arg0) + (0x20))) = (s16) (*(s16 *) ((s8 *) (arg0) + (0x18)));
        (*(s16 *) ((s8 *) (arg0) + (0x22))) = arg1;
        (*(s16 *) ((s8 *) (arg0) + (0x24))) = arg2;
        temp_r1                             = (*(u16 *) ((s8 *) (arg0) + (4)));
        if (temp_r1 != 0xFFFF) {
            if ((*(s32 *) ((s8 *) (arg0) + (8))) != 0) {
                func_020b8c1c((*(s32 *) ((s8 *) (arg0) + (0))), temp_r1, (*(u16 *) ((s8 *) (arg0) + (0xE))));
            }
            if ((*(s32 *) ((s8 *) (arg0) + (0x10))) != 0) {
                func_020b8ce8((*(s32 *) ((s8 *) (arg0) + (0))), (*(u16 *) ((s8 *) (arg0) + (4))),
                              (*(s16 *) ((s8 *) (arg0) + (0x14))), (*(s16 *) ((s8 *) (arg0) + (0x16))));
            }
        }
        temp_r1_2 = (*(M2C_UNK(**)(void *))((s8 *) (arg0) + (0x28)));
        var_r5    = 1;
        if (temp_r1_2 != ((void *) 0)) {
            temp_r1_2(arg0);
        }
    }
    return var_r5;
}
