/* compiler: 1.2/sp2p3  */
/* func_0209b3ec from projets/nintendogs-dachshund/src/auto/func_0209b3ec.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
extern void func_0206b7b8(s32, s32, s32, s32, s32);
void func_020fb8ec(s32 arg0) {
    s32 temp_r1;
    s32 temp_r3;

    temp_r1 = (*(s32 *) ((s8 *) (arg0) + (0xC)));
    if ((temp_r1 != 0) && (temp_r1 != 1)) {
        return;
    }
    temp_r3 = (*(s32 *) ((s8 *) (arg0) + (0)));
    func_0206b7b8(0x04001050, 0, 4, temp_r3, 0x10 - temp_r3);
}
