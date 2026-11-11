/* compiler: 1.2/sp2p3 -O4,s */
/* func_020839b0 from projets/nintendogs-miniature-dachshund-friends/src/auto/func_020839b0.c (same code in another game of
 * this workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef unsigned short u16;
typedef long s32;
typedef s32 M2C_UNK;
extern s32 func_02083b0c(M2C_UNK);
void func_020839b0(void *arg0) {
    u16 temp_r2;

    temp_r2                          = *(u16 *) 0x04000204;
    (*(u16 *) ((s8 *) (arg0) + (0))) = temp_r2;
    *(u16 *) 0x04000204              = (temp_r2 & 0xFFE3) | 0xF;
    if (func_02083b0c(1) != 0) {
        (*(s16 *) ((s8 *) (arg0) + (4))) = 1;
        (*(u16 *) ((s8 *) (arg0) + (2))) = (u16) * (u16 *) 0x027FFF72;
        *(s16 *) 0x09FE2FFE              = 0x20;
        *(u16 *) 0x027FFF72              = 0x20;
    }
}
