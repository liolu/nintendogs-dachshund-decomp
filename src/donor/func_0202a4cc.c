/* compiler: 1.2/sp2p3  */
/* func_0202a4cc from projets/nintendogs-miniature-dachshund-friends/src/auto/func_0202a4cc.c (same code in another game of
 * this workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef unsigned short u16;
typedef long s32;
extern s32 func_021060cc();
extern void *data_0214b484;
extern u16 *data_02153708;
s32 func_0202a4cc(void *arg0) {
    s8 temp_r1_2;
    s8 temp_r4;
    u16 temp_r1;

    temp_r1 = *data_02153708;
    if ((temp_r1 == 1) || (temp_r1 == 4) || (temp_r1 == 0x11)) {
        return 0;
    }
    temp_r4 = (*(s8 *) ((s8 *) (arg0) + (0x88)));
    if (temp_r4 != func_021060cc()) {
        return 1;
    }
    temp_r1_2 = (*(s8 *) ((s8 *) (data_0214b484) + (0xC)));
    if ((temp_r1_2 != -1) && (temp_r4 != temp_r1_2)) {
        return 1;
    }
    return 0;
}
