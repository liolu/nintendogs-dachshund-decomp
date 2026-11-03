/* compiler: 1.2/sp2p3  */
/* func_0200af74 from projets/cooking-mama/src/auto/func_0200af74.c (same code in another game of this workspace), reused by
 * tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_0208120c(void);
extern void func_02081220(M2C_UNK);
extern M2C_UNK func_02001bf0(void);
extern M2C_UNK data_0214a6e0;
s32 func_02001ee4(s32 arg0, s32 arg1) {
    s32 temp_r0;

    temp_r0 = func_0208120c();
    if ((*(s32 *) ((s8 *) (&data_0214a6e0) + (0))) != 0) {
        func_02081220(temp_r0);
        return 1;
    }
    (*(s32 *) ((s8 *) (&data_0214a6e0) + (0))) = 1;
    func_02081220(temp_r0);
    (*(s32 *) ((s8 *) (&data_0214a6e0) + (4))) = arg0;
    (*(s32 *) ((s8 *) (&data_0214a6e0) + (8))) = arg1;
    if (func_02001bf0() != 0) {
        return 0;
    }
    return 3;
}
