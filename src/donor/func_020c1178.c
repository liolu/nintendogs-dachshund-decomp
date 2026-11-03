/* compiler: 1.2/sp2p3  */
/* func_020c66a8 from projets/nintendogs-dachshund/src/auto/func_020c66a8.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef unsigned short u16;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_020f5eb8(M2C_UNK);
extern void func_020f6144(void);
extern M2C_UNK func_020f79fc(void);
extern M2C_UNK func_020fa3ec(void);
extern u16 data_0214affc;
extern M2C_UNK data_0214b024;
extern void *data_021538dc;
void func_020c1178(void) {
    s16 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;
    s32 temp_r4;
    s32 var_r5;

    temp_r4 = func_020fa3ec();
    temp_r0 = (*(s16 *) ((s8 *) (data_021538dc) + (0xA)));
    if ((s32) temp_r0 > 0) {
        (*(s16 *) ((s8 *) (data_021538dc) + (0xA))) = (s16) (temp_r0 - 1);
    }
    if ((u16) (data_0214affc & 0xC0F) != 0) {
        (*(s16 *) ((s8 *) (data_021538dc) + (0xA))) = 0xA;
    } else if ((*(u16 *) ((s8 *) (&data_0214b024) + (2))) & 2) {
        (*(s16 *) ((s8 *) (data_021538dc) + (0xA))) = 0xA;
    }
    if (data_021538dc != ((void *) 0)) {
        (*(s32 *) ((s8 *) (data_021538dc) + (0))) = -1;
        (*(s16 *) ((s8 *) (data_021538dc) + (8))) = -1;
    }
    func_020f6144();
    var_r5 = 0;
loop_9:
    temp_r0_2 = func_020f5eb8(var_r5);
    if (temp_r0_2 >= 0) {
        (*(s32 *) ((s8 *) (data_021538dc) + (0))) = temp_r0_2;
        (*(s16 *) ((s8 *) (data_021538dc) + (8))) = (s16) var_r5;
    } else {
        var_r5 = (s32) (s16) (var_r5 + 1);
        if (var_r5 < 3) {
            goto loop_9;
        }
    }
    (*(s32 *) ((s8 *) (data_021538dc) + (0x10))) = 0;
    if (((s32) (*(s32 *) ((s8 *) (data_021538dc) + (0))) < 0) && (temp_r4 != 0)) {
        (*(s32 *) ((s8 *) (data_021538dc) + (0x10))) = 1;
    }
    (*(s32 *) ((s8 *) (data_021538dc) + (0xC))) = func_020f79fc();
    temp_r0_3                                   = (*(s32 *) ((s8 *) (data_021538dc) + (0)));
    if (temp_r0_3 != -1) {
        (*(s32 *) ((s8 *) (data_021538dc) + (4))) = temp_r0_3;
    }
}
