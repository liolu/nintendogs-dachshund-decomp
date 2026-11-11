/* compiler: 1.2/sp2p3  */
/* func_020b4b34 from projets/nintendogs-miniature-dachshund-friends/src/auto/func_020b4b34.c (same code in another game of
 * this workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02003d1c(M2C_UNK);
extern M2C_UNK func_020b7f38(M2C_UNK, s16, s16);
extern void *data_02153740;
void func_020b4b34(void *arg0) {
    s32 temp_r1;

    (*(s32 *) ((s8 *) (arg0) + (0))) = 0;
    temp_r1                          = (*(s32 *) ((s8 *) (data_02153740) + (0xBC)));
    switch (temp_r1) {
        case 7:
            func_020b7f38(0x14, (*(s16 *) ((s8 *) (arg0) + (0x888))), (*(s16 *) ((s8 *) (arg0) + (0x88A))));
            return;
        case 12:
            func_020b7f38(0x14, (*(s16 *) ((s8 *) (arg0) + (0x888))), (*(s16 *) ((s8 *) (arg0) + (0x88A))));
            return;
        case 3:
            func_02003d1c(0x14);
            return;
    }
}
