/* compiler: 1.2/sp2p3  */
/* func_02085618 from projets/nintendogs-dachshund/src/auto/func_02085618.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef unsigned char u8;
typedef short s16;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK _s32_div_f(M2C_UNK, M2C_UNK);
void func_02088d90(s32 arg0, s32 arg1, s32 arg2) {
    s16 temp_r5;
    s16 temp_r5_2;
    u8 temp_r1;
    u8 temp_r3;
    void *temp_ip;

    temp_ip = (*(void **) ((s8 *) (arg1) + (4)));
    temp_r1 = (*(u8 *) ((s8 *) (temp_ip) + (6)));
    temp_r3 = (*(u8 *) ((s8 *) (temp_ip) + (7)));
    if (arg2 < (s32) temp_r1) {
        temp_r5 = (*(s16 *) ((s8 *) (temp_ip) + (0)));
        (*(s16 *) ((s8 *) (arg0) + (0x34))) =
            (s16) (temp_r5 + _s32_div_f(arg2 * ((*(s16 *) ((s8 *) (temp_ip) + (2))) - temp_r5), (s32) temp_r1));
        return;
    }
    if (arg2 < (s32) temp_r3) {
        (*(s16 *) ((s8 *) (arg0) + (0x34))) = (s16) (*(s16 *) ((s8 *) (temp_ip) + (2)));
        return;
    }
    temp_r5_2 = (*(s16 *) ((s8 *) (temp_ip) + (4)));
    (*(s16 *) ((s8 *) (arg0) + (0x34))) =
        (s16) (temp_r5_2 + _s32_div_f((arg2 - 0xFF) * (temp_r5_2 - (*(s16 *) ((s8 *) (temp_ip) + (2)))), 0xFF - temp_r3));
}
