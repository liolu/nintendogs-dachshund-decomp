/* compiler: 1.2/sp2p3  */
/* func_02106808 from projets/nintendogs-dachshund/src/auto/func_02106808.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
typedef s32 M2C_UNK;
extern void func_020848ec(M2C_UNK, M2C_UNK);
extern s32 *data_02154c9c;
extern void *data_02154cac;
void func_020e2734(void) {
    s32 temp_r1;
    s32 temp_r1_2;
    s32 temp_r1_3;
    s32 temp_r1_4;
    s32 temp_r1_5;
    s32 var_r4;

    if (data_02154c9c != ((void *) 0)) {
        var_r4 = *data_02154c9c;
    } else {
        var_r4 = 0;
    }
    if (var_r4 != 0) {
        temp_r1 = (*(s32 *) ((s8 *) (data_02154cac) + (0x2C)));
        if (temp_r1 != 0) {
            func_020848ec(var_r4, temp_r1);
        }
        temp_r1_2 = (*(s32 *) ((s8 *) (data_02154cac) + (0x30)));
        if (temp_r1_2 != 0) {
            func_020848ec(var_r4, temp_r1_2);
        }
        temp_r1_3 = (*(s32 *) ((s8 *) (data_02154cac) + (0x34)));
        if (temp_r1_3 != 0) {
            func_020848ec(var_r4, temp_r1_3);
        }
        temp_r1_4 = (*(s32 *) ((s8 *) (data_02154cac) + (0x38)));
        if (temp_r1_4 != 0) {
            func_020848ec(var_r4, temp_r1_4);
        }
        temp_r1_5 = (*(s32 *) ((s8 *) (data_02154cac) + (0x3C)));
        if (temp_r1_5 != 0) {
            func_020848ec(var_r4, temp_r1_5);
        }
    }
    data_02154cac = ((void *) 0);
}
