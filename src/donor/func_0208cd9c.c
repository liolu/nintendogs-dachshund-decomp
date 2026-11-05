/* compiler: 1.2/sp2p3  */
/* func_0210ddd4 from projets/nintendogs-dachshund/src/auto/func_0210ddd4.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef long s32;
typedef s32 M2C_UNK;
extern void func_02044654(M2C_UNK);
extern M2C_UNK func_02044670(M2C_UNK);
extern void func_020ea6d8(void);
extern void func_020c29dc(M2C_UNK);
extern void *data_02153700;
void func_0208cd9c(void) {
    s32 temp_r0;
    s32 var_r5;

    var_r5 = 0;
    if ((s32) (*(s16 *) ((s8 *) (data_02153700) + (0x20))) > 0) {
        do {
            temp_r0 = func_02044670(var_r5);
            if (temp_r0 != 0) {
                func_020c29dc(temp_r0);
                func_02044654((s32) (s8) var_r5);
            }
            var_r5 = (s32) (s16) (var_r5 + 1);
        } while (var_r5 < (s32) (*(s16 *) ((s8 *) (data_02153700) + (0x20))));
    }
    func_020ea6d8();
}
