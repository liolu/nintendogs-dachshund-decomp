/* compiler: 1.2/sp2p3  */
/* func_0211cf24 from projets/nintendogs-dachshund/src/auto/func_0211cf24.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_01ffda04(M2C_UNK);
extern M2C_UNK func_02027f40(M2C_UNK, M2C_UNK);
extern void *data_02153708;
extern void *data_02153720;
void func_0209b790(s32 arg0) {
    s32 temp_r0;
    s32 temp_r0_2;

    if ((s32) (*(s32 *) ((s8 *) (arg0) + (0x20))) < 0) {
        (*(s32 *) ((s8 *) (arg0) + (0x20))) =
            func_02027f40(func_01ffda04((s32) (*(s16 *) ((s8 *) (data_02153708) + (0xE)))), 7);
    }
    if ((*(s16 *) ((s8 *) (data_02153720) + (0x100))) != 7) {
        return;
    }
    temp_r0 = func_01ffda04((s32) (*(s16 *) ((s8 *) (data_02153708) + (0xE))));
    if ((*(void **) ((s8 *) (arg0) + (0x1C))) != ((void *) 0)) {
        temp_r0_2 = func_02027f40(temp_r0, 7);
        if ((s32) (s16) (temp_r0_2 - (*(s32 *) ((s8 *) (arg0) + (0x20)))) > 0) {
            (*(s16 *) ((s8 *) ((*(void **) ((s8 *) (arg0) + (0x1C)))) + (4))) = (s16) temp_r0_2;
        } else {
            (*(s16 *) ((s8 *) ((*(void **) ((s8 *) (arg0) + (0x1C)))) + (4))) = 0;
        }
    }
    (*(s16 *) ((s8 *) (arg0) + (4)))    = 1;
    (*(s32 *) ((s8 *) (arg0) + (0xC)))  = 1;
    (*(s32 *) ((s8 *) (arg0) + (0x18))) = 9;
}
