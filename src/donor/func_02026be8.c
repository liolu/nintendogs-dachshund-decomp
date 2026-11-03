/* compiler: 2.0/sp1p5  */
/* func_02026be8 from projets/nintendogs-chihuahua-friends/src/auto/func_02026be8.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef long s32;
void func_02026be8(void *arg0, s32 arg1) {
    s16 temp_ip;

    temp_ip = (*(s16 *) ((s8 *) (arg0) + (0x108)));
    (*(s16 *) ((s8 *) (arg0) + (0x108))) =
        (s16) (temp_ip + ((s32) ((*(s32 *) ((s8 *) (arg0) + (0x474))) * (arg1 - temp_ip)) >> 0xC));
}
