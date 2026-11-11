/* compiler: 1.2/sp2p3  */
/* func_020a627c from projets/nintendogs-miniature-dachshund-friends/src/auto/func_020a627c.c (same code in another game of
 * this workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_020a6444();
extern s32 func_020bdb98(s32);
extern void *data_02153740;
void func_020a627c(s32 arg0) {
    func_020a6444();
    if (func_020bdb98(arg0 + 4) != 0) {
        (*(s32 *) ((s8 *) (data_02153740) + (0x950)))  = 3;
        (*(s32 *) ((s8 *) (data_02153740) + (0x3530))) = 3;
    }
    if (func_020bdb98(arg0 + 0x40) != 0) {
        (*(s32 *) ((s8 *) (data_02153740) + (0x950)))  = 4;
        (*(s32 *) ((s8 *) (data_02153740) + (0x3530))) = 4;
    }
    if (func_020bdb98(arg0 + 0x7C) != 0) {
        (*(s32 *) ((s8 *) (data_02153740) + (0x950)))  = 5;
        (*(s32 *) ((s8 *) (data_02153740) + (0x3530))) = 5;
    }
    if (func_020bdb98(arg0 + 0xB8) != 0) {
        (*(s32 *) ((s8 *) (data_02153740) + (0x950)))  = 1;
        (*(s32 *) ((s8 *) (data_02153740) + (0x3530))) = 1;
    }
    if (func_020bdb98(arg0 + 0xF4) == 0) {
        return;
    }
    (*(s32 *) ((s8 *) (data_02153740) + (0x950)))  = 2;
    (*(s32 *) ((s8 *) (data_02153740) + (0x3530))) = 2;
}
