/* compiler: 1.2/sp2p3  */
/* func_02116d20 from projets/nintendogs-dachshund/src/auto/func_02116d20.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef unsigned short u16;
typedef long s32;
typedef s32 M2C_UNK;
extern void func_02003b70(void);
extern void func_02003b9c(M2C_UNK);
extern void func_020f07bc(M2C_UNK);
void func_02095590(s32 arg0, s32 arg1) {
    (*(s16 *) ((s8 *) (arg0) + (0x2C))) = (s16) arg1;
    if (arg1 & 1) {
        func_02003b70();
        if (((s32) (*(u16 *) 0x04000304 & 0x8000) >> 0xF) == 1) {
            func_020f07bc(0x28);
            return;
        }
        func_020f07bc(0x44);
        return;
    }
    if (!(arg1 & 2)) {
        return;
    }
    func_02003b9c(0x14);
}
