/* compiler: 1.2/sp2p3  */
/* func_0200d9c0 from projets/nintendogs-chihuahua-friends/src/auto/func_0200d9c0.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef unsigned short u16;
typedef long s32;
typedef unsigned long u32;
typedef s32 M2C_UNK;
extern s32 func_020286ec(void *, M2C_UNK, M2C_UNK);
extern M2C_UNK func_0202f5dc(void *);
extern M2C_UNK func_0202f960(void *);
extern s32 func_020352ec(void *, M2C_UNK);
extern s32 func_02035454(void *, M2C_UNK);
extern M2C_UNK func_020357c0(void *, M2C_UNK);
extern M2C_UNK func_02035e20(void *);
void func_0200d9c0(void *arg0, s32 arg1, s32 arg2) {
    func_020357c0(arg0, 0);
    if (func_020286ec(arg0, 0, 1) != 0) {
        return;
    }
    if (func_02035454(arg0, 0) != 0) {
        return;
    }
    if (func_020352ec(arg0, 0) != 0) {
        return;
    }
    if ((arg1 != 0) && ((u32) (*(u16 *) ((s8 *) (arg0) + (0x10A))) > 0x3CU)) {
        func_0202f5dc(arg0);
        return;
    }
    if (arg2 == 0) {
        return;
    }
    if ((u32) (*(u16 *) ((s8 *) (arg0) + (0x10A))) <= 0x3CU) {
        return;
    }
    func_02035e20(arg0);
    func_0202f960(arg0);
}
