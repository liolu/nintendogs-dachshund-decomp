/* compiler: 1.2/sp2p3  */
/* func_020d2c64 from projets/nintendogs-dachshund/src/auto/func_020d2c64.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef long s32;
extern void *data_02154c70;
void func_020cd3d8(s16 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s16 temp_r4;

    temp_r4 = (*(s16 *) ((s8 *) (data_02154c70) + (0x6C)));
    if ((temp_r4 == 2) && (temp_r4 == 2)) {
        (*(s16 *) ((s8 *) (data_02154c70) + (0x6C))) = 3;
        (*(s16 *) ((s8 *) (data_02154c70) + (0x6E))) = 0;
    }
    (*(s16 *) ((s8 *) (data_02154c70) + (0x76))) = (s16) arg4;
    (*(s16 *) ((s8 *) (data_02154c70) + (0x7A))) = arg0;
    (*(s32 *) ((s8 *) (data_02154c70) + (0x7C))) = arg1;
    (*(s32 *) ((s8 *) (data_02154c70) + (0x80))) = arg2;
    (*(s32 *) ((s8 *) (data_02154c70) + (0x84))) = arg3;
    (*(s32 *) ((s8 *) (data_02154c70) + (0x88))) = 0;
    (*(s16 *) ((s8 *) (data_02154c70) + (0x94))) = -1;
    (*(s16 *) ((s8 *) (data_02154c70) + (0x96))) = -1;
    (*(s16 *) ((s8 *) (data_02154c70) + (0x98))) = 0;
    (*(s16 *) ((s8 *) (data_02154c70) + (0x9A))) = -1;
    (*(s16 *) ((s8 *) (data_02154c70) + (0x9C))) = -1;
    (*(s32 *) ((s8 *) (data_02154c70) + (0xA0))) = 0;
    (*(s32 *) ((s8 *) (data_02154c70) + (0xA4))) = 0;
}
