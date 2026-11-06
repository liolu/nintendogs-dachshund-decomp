/* compiler: 1.2/sp2p3  */
/* func_020bc984 from projets/nintendogs-miniature-dachshund-friends/src/auto/func_020bc984.c (same code in another game of
 * this workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
extern s32 func_020bdb98(s32);
extern void *data_02153740;
void func_020bc984(s32 arg0) {
    if (func_020bdb98(arg0 + 0x18) != 0) {
        (*(s32 *) ((s8 *) (data_02153740) + (0x9F0))) = 3;
    }
    if (func_020bdb98(arg0 + 0x54) != 0) {
        (*(s32 *) ((s8 *) (data_02153740) + (0x9F0))) = 2;
    }
    if (func_020bdb98(arg0 + 0x90) != 0) {
        (*(s32 *) ((s8 *) (data_02153740) + (0x9F0))) = 1;
    }
    func_020bdb98(arg0 + 0xCC);
    func_020bdb98(arg0 + 0x108);
    func_020bdb98(arg0 + 0x144);
    if (func_020bdb98(arg0 + 0x180) != 0) {
        (*(s32 *) ((s8 *) (data_02153740) + (0x9F0))) = 4;
    }
    if (func_020bdb98(arg0 + 0x1BC) != 0) {
        (*(s32 *) ((s8 *) (data_02153740) + (0x9F0))) = 5;
    }
    if (func_020bdb98(arg0 + 0x1F8) != 0) {
        (*(s32 *) ((s8 *) (data_02153740) + (0x9F0))) = 6;
    }
}
