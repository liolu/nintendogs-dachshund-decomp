/* compiler: 1.2/sp2p3  */
/* func_020cef98 from projets/nintendogs-dachshund/src/auto/func_020cef98.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef unsigned short u16;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_0206dfd4();
extern void *data_02154c48;
void func_020c97e0(M2C_UNK arg0) {
    void *temp_r4;

    temp_r4 = (*(void **) ((s8 *) (data_02154c48) + (0x141C)));
    func_0206dfd4(arg0, temp_r4 + 0x60, 0x54);
    (*(u16 *) ((s8 *) (temp_r4) + (0x6AE))) = (u16) ((*(u16 *) ((s8 *) (temp_r4) + (0x6AE))) | 1);
}
