/* compiler: 2.0/sp1p5  */
/* func_0205b034 from projets/club-house-games/src/auto/func_0205b034.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
void func_02072040(void **arg0, s16 arg1, s16 arg2) {
    void *temp_ip;

    temp_ip = *arg0;
    if (temp_ip == ((void *) 0)) {
        return;
    }
    (*(s16 *) ((s8 *) (temp_ip) + (0x34))) = 2;
    (*(s16 *) ((s8 *) (*arg0) + (0x38)))   = arg1;
    (*(s16 *) ((s8 *) (*arg0) + (0x3A)))   = arg2;
}
