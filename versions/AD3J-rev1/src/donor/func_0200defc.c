/* compiler: 1.2/sp2p3  */
/* func_0200de64 from projets/nintendogs-miniature-dachshund-friends/src/auto/func_0200de64.c (same code in another game of
 * this workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef unsigned short u16;
typedef long s32;
typedef unsigned long u32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02022b38();
extern s32 func_02027508(void *);
extern M2C_UNK func_0203e2b8(void *, s32);
extern M2C_UNK func_020eae6c(s32, M2C_UNK);
void func_0200defc(void *arg0) {
    func_02022b38();
    if (((u32) (*(u16 *) ((s8 *) (arg0) + (0x10A))) > 1U) && ((*(s32 *) ((s8 *) (arg0) + (0x488))) == 0) &&
        ((*(s32 *) ((s8 *) (arg0) + (0x2A4))) == 0)) {
        func_020eae6c(func_02027508(arg0), 0x44);
        func_020eae6c(func_02027508(arg0), 0x43);
        (*(s32 *) ((s8 *) (arg0) + (0x488))) = 1;
    }
    if ((u32) (*(u16 *) ((s8 *) (arg0) + (0x10A))) <= 0x3CU) {
        return;
    }
    if ((*(s32 *) ((s8 *) (arg0) + (0x2A4))) != 0) {
        return;
    }
    func_0203e2b8(arg0, 0x411);
}
