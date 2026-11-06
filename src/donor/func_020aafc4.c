/* compiler: 1.2/sp2p3  */
/* func_020aafc4 from projets/nintendogs-miniature-dachshund-friends/src/auto/func_020aafc4.c (same code in another game of
 * this workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
extern s32 func_020bdb98(s32);
extern void *data_02153740;
void func_020aafc4(s32 arg0) {
    if (func_020bdb98(arg0 + 0x6C) != 0) {
        (*(s32 *) ((s8 *) (data_02153740) + (0x352C))) = 1;
        return;
    }
    if (func_020bdb98(arg0 + 0xA8) != 0) {
        (*(s32 *) ((s8 *) (data_02153740) + (0x352C))) = 1;
        return;
    }
    if (func_020bdb98(arg0 + 0xE4) != 0) {
        (*(s32 *) ((s8 *) (data_02153740) + (0x352C))) = 4;
        (*(s32 *) ((s8 *) (data_02153740) + (0x9A0)))  = (s32) (*(s32 *) ((s8 *) (data_02153740) + (0xB8)));
        return;
    }
    if (func_020bdb98(arg0 + 0x120) != 0) {
        (*(s32 *) ((s8 *) (data_02153740) + (0x352C))) = 4;
        (*(s32 *) ((s8 *) (data_02153740) + (0x9A0)))  = (s32) (*(s32 *) ((s8 *) (data_02153740) + (0xB8)));
        return;
    }
    if (func_020bdb98(arg0 + 0x15C) == 0) {
        return;
    }
    (*(s32 *) ((s8 *) (data_02153740) + (0x34C8))) = 0;
    (*(s32 *) ((s8 *) (data_02153740) + (0x352C))) = 3;
}
