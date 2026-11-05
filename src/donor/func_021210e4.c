/* compiler: 1.2/sp2p3  */
/* func_020c17a8 from projets/nintendogs-dachshund/src/auto/func_020c17a8.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef unsigned short u16;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_020711e0(M2C_UNK, M2C_UNK);
extern M2C_UNK func_0211e888(void);
extern void func_02120968(M2C_UNK);
extern void *data_02157b60;
s32 func_021210e4(void) {
    if (func_0211e888() == 0) {
        return 0;
    }
    if ((*(s32 *) ((s8 *) (data_02157b60) + (4))) != 0) {
        return 0;
    }
    if (func_020711e0((s32) (*(u16 *) ((s8 *) (data_02157b60) + (0x10A))), (s32) func_02120968) != 0) {
        (*(s32 *) ((s8 *) (data_02157b60) + (4))) = 1;
        return 1;
    }
    return 0;
}
