/* compiler: 1.2/sp2p3  */
/* func_02089150 from projets/nintendogs-dachshund/src/auto/func_02089150.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef unsigned short u16;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_01ffda04(M2C_UNK);
extern M2C_UNK func_02027508(M2C_UNK);
extern void func_020ed7a8(M2C_UNK, M2C_UNK);
extern void func_020ee5e0(M2C_UNK, M2C_UNK);
extern void func_020ef590(M2C_UNK, M2C_UNK);
extern void func_020f0a98(M2C_UNK);
extern s32 data_0214b484;
extern M2C_UNK data_02154cb8;
extern M2C_UNK data_02154dd8;
void func_020e9a70(s32 arg0) {
    s32 temp_r0;
    s32 var_r5;

    if (data_0214b484 != 0) {
        var_r5 = 0;
    loop_2:
        temp_r0 = func_01ffda04(var_r5);
        if (temp_r0 != 0) {
            (*(s16 *) ((s8 *) (&data_02154dd8) + (0x20))) =
                (s16) (*(s16 *) ((s8 *) ((void *) func_02027508(temp_r0)) + (0xC)));
            (*(s16 *) ((s8 *) (&data_02154cb8) + (0x24))) = (s16) var_r5;
        } else {
            var_r5 = (s32) (s16) (var_r5 + 1);
            if (var_r5 < 3) {
                goto loop_2;
            }
        }
    }
    (*(u16 *) ((s8 *) (&data_02154dd8) + (0x10))) = (u16) (*(u16 *) ((s8 *) (&data_02154dd8) + (0xE)));
    func_020ee5e0(0, arg0);
    func_020ed7a8(0, arg0);
    func_020ef590(0, arg0);
    func_020f0a98(arg0);
    (*(s32 *) ((s8 *) (&data_02154cb8) + (0x1C))) = 1;
}
