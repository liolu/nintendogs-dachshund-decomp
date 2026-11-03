/* compiler: 1.2/sp2p3  */
/* func_02114b28 from projets/nintendogs-dachshund/src/auto/func_02114b28.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef unsigned short u16;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_020cd3d0(M2C_UNK, s32, M2C_UNK, M2C_UNK *, s32);
extern void *data_02154c70;
extern M2C_UNK func_02096380;
void func_02093398(void *arg0) {
    s16 temp_r2;

    temp_r2 = (*(s16 *) ((s8 *) (arg0) + (0x120)));
    if ((s32) temp_r2 < 0) {
        return;
    }
    if ((*(s16 *) ((s8 *) (data_02154c70) + (0x6C))) != 0) {
        return;
    }
    if ((s32) temp_r2 > 0) {
        (*(s16 *) ((s8 *) (arg0) + (0x120))) = (s16) (temp_r2 - 1);
    }
    if ((*(s16 *) ((s8 *) (arg0) + (0x120))) != 0) {
        return;
    }
    if (((s32) (*(u16 *) 0x04000304 & 0x8000) >> 0xF) == 1) {
        func_020cd3d0(2, 0xC44, 0, &func_02096380, 0);
    } else {
        func_020cd3d0(2, 0xC44, 0, &func_02096380, 1);
    }
    (*(s16 *) ((s8 *) (arg0) + (0x120))) = 0x708;
}
