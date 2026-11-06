/* compiler: 1.2/sp2p3  */
/* func_020ba548 from projets/nintendogs-miniature-dachshund-friends/src/auto/func_020ba548.c (same code in another game of
 * this workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern s32 func_020bdb98(s32);
extern M2C_UNK func_020bddb8(s32, M2C_UNK);
extern void *data_02153740;
void func_020ba548(s32 arg0) {
    if (func_020bdb98(arg0 + 8) != 0) {
        (*(s32 *) ((s8 *) (data_02153740) + (0x9E0))) = 0;
    }
    if (func_020bdb98(arg0 + 0x44) != 0) {
        (*(s32 *) ((s8 *) (data_02153740) + (0x9E0))) = 1;
    }
    if (func_020bdb98(arg0 + 0x80) != 0) {
        (*(s32 *) ((s8 *) (data_02153740) + (0x9E0))) = 2;
    }
    func_020bddb8(arg0 + 0xBC, 0);
    func_020bddb8(arg0 + 0xDC, 0);
    func_020bddb8(arg0 + 0xFC, 0);
}
