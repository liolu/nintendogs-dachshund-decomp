/* compiler: 1.2/sp2p3  */
/* func_020aec40 from projets/nintendogs-miniature-dachshund-friends/src/auto/func_020aec40.c (same code in another game of
 * this workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef long s32;
extern s32 func_020b0e0c();
extern void *data_02153740;
void func_020aec40(void) {
    s32 temp_r0;

    temp_r0 = func_020b0e0c();
    switch (temp_r0) {
        case 2:
            (*(s32 *) ((s8 *) (data_02153740) + (0x98C))) = 0x12;
            return;
        case 1:
            (*(s32 *) ((s8 *) (data_02153740) + (0x98C))) = 0xD;
            return;
    }
}
