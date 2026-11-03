/* compiler: 2.0/sp1p5  */
/* func_0203b1cc from projets/nintendogs-chihuahua-friends/src/auto/func_0203b1cc.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef long s32;
void func_0203b1cc(void *arg0) {
    s32 temp_ip;
    s32 temp_ip_2;
    s32 temp_r3;

    temp_r3                              = (*(s32 *) ((s8 *) (arg0) + (0x2F4)));
    (*(s32 *) ((s8 *) (arg0) + (0x3D8))) = (s32) (temp_r3 + (((*(s32 *) ((s8 *) (arg0) + (0x300))) - temp_r3) * 0x10));
    temp_ip                              = (*(s32 *) ((s8 *) (arg0) + (0x2F8)));
    (*(s32 *) ((s8 *) (arg0) + (0x3DC))) = (s32) (temp_ip + (((*(s32 *) ((s8 *) (arg0) + (0x304))) - temp_ip) * 0x10));
    temp_ip_2                            = (*(s32 *) ((s8 *) (arg0) + (0x2FC)));
    (*(s32 *) ((s8 *) (arg0) + (0x3E0))) = (s32) (temp_ip_2 + (((*(s32 *) ((s8 *) (arg0) + (0x308))) - temp_ip_2) * 0x10));
    (*(s16 *) ((s8 *) (arg0) + (0x108))) = 0;
}
