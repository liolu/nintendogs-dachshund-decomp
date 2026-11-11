/* compiler: 1.2/sp2p3  */
/* func_021130f4 from projets/nintendogs-dachshund/src/auto/func_021130f4.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef long s32;
typedef s32 M2C_UNK;
extern s32 func_020c3744();
extern M2C_UNK func_020c94ac();
extern M2C_UNK func_020cd3d0(M2C_UNK, s32, M2C_UNK, M2C_UNK, s32);
extern void *data_02154c70;
void func_02091af4(void *arg0) {
    s16 temp_r0;

    if ((*(s32 *) ((s8 *) (data_02154c70) + (0xA4))) == 0) {
        return;
    }
    temp_r0 = (*(s16 *) ((s8 *) (data_02154c70) + (0x9A)));
    switch (temp_r0) {
        case 0:
            if (func_020c3744() != 0) {
                (*(s16 *) ((s8 *) (arg0) + (4))) = 0x10;
                (*(s16 *) ((s8 *) (arg0) + (6))) = 0;
                return;
            }
            (*(s16 *) ((s8 *) (arg0) + (4))) = 0xF;
            (*(s16 *) ((s8 *) (arg0) + (6))) = 0;
            func_020cd3d0(1, 0x837, 0, 0, 0);
            return;
        case 1:
            (*(s16 *) ((s8 *) (arg0) + (4))) = 0x11;
            (*(s16 *) ((s8 *) (arg0) + (6))) = 0;
            func_020c94ac();
            return;
    }
}
