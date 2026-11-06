/* compiler: 1.2/sp2p3  */
/* func_020b91bc from projets/nintendogs-chihuahua-friends/src/donor/func_020b91bc.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
extern void *func_02006b04(s32);
extern s32 data_02153740;
void func_020b91bc(s32 arg0, s32 arg1) {
    s32 temp_r4;

    temp_r4 = (arg0 * 0x294) + (data_02153740 + 0xA5C);
    if (arg1 == 0) {
        (*(s32 *) ((s8 *) (temp_r4) + (0x10))) = 0;
        (*(s32 *) ((s8 *) (temp_r4) + (0)))    = 0;
        return;
    }
    (*(s32 *) ((s8 *) (temp_r4) + (0x10))) = (s32) (*(s32 *) ((s8 *) (func_02006b04(arg1)) + (0xC)));
    (*(s32 *) ((s8 *) (temp_r4) + (0)))    = 1;
}
