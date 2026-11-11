/* compiler: 1.2/sp2p3  */
/* func_020a19cc from projets/nintendogs-dachshund/src/auto/func_020a19cc.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
extern void func_0206b7b8(s32, s32, s32, s32, s32);
extern s32 func_020cba34(void);
void func_02101dac(s32 arg0) {
    s32 temp_r0;
    s32 temp_r3;

    if (func_020cba34() == 0) {
        return;
    }
    temp_r0 = (*(s32 *) ((s8 *) (arg0) + (0x10)));
    if ((temp_r0 != 0) && (temp_r0 != 1) && (temp_r0 != 2)) {
        return;
    }
    temp_r3 = (*(s32 *) ((s8 *) (arg0) + (0)));
    func_0206b7b8(0x04001050, 0, 4, temp_r3, 0x10 - temp_r3);
}
