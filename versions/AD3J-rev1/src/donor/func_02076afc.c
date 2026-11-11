/* compiler: 1.2/sp2p3  */
/* func_0206c88c from projets/children-of-mana/src/auto/func_0206c88c.c (same code in another game of this workspace), reused
 * by tools/donor_match.py */
typedef signed char s8;
typedef unsigned char u8;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_01ffe58c(void *, s32);
void func_02076afc(void *arg0) {
    s32 var_r1;
    u8 var_r4;
    void *temp_r0;

    if ((*(M2C_UNK(**)(void *))((s8 *) (arg0) + (0x34))) != ((void *) 0)) {
        var_r4 = (*(u8 *) ((s8 *) (arg0) + (0x96)));
    } else {
        var_r4 = 0;
    }
    if (var_r4 == 1) {
        (*(s32 *) ((s8 *) (arg0) + (8))) = (s32) ((*(s32 *) ((s8 *) (arg0) + (8))) & ~0x40);
        (*(M2C_UNK(**)(void *))((s8 *) (arg0) + (0x34)))(arg0);
        if ((*(M2C_UNK(**)(void *))((s8 *) (arg0) + (0x34))) != ((void *) 0)) {
            var_r4 = (*(u8 *) ((s8 *) (arg0) + (0x96)));
        } else {
            var_r4 = 0;
        }
        var_r1 = (*(s32 *) ((s8 *) (arg0) + (8))) & 0x40;
    } else {
        var_r1 = 0;
    }
    if (!((*(s32 *) ((s8 *) (arg0) + (8))) & 0x100) && (var_r1 == 0)) {
        temp_r0 = (*(void **) ((s8 *) (arg0) + (0)));
        func_01ffe58c(temp_r0 + ((*(u8 *) ((s8 *) (temp_r0) + (1))) | ((*(u8 *) ((s8 *) (temp_r0) + (2))) << 8) |
                                 ((*(u8 *) ((s8 *) (temp_r0) + (3))) << 0x10) | ((*(u8 *) ((s8 *) (temp_r0) + (4))) << 0x18)),
                      (*(u8 *) ((s8 *) (temp_r0) + (5))) | ((*(u8 *) ((s8 *) (temp_r0) + (6))) << 8) |
                          ((*(u8 *) ((s8 *) (temp_r0) + (7))) << 0x10) | ((*(u8 *) ((s8 *) (temp_r0) + (8))) << 0x18));
    }
    if (var_r4 == 3) {
        (*(s32 *) ((s8 *) (arg0) + (8))) = (s32) ((*(s32 *) ((s8 *) (arg0) + (8))) & ~0x40);
        (*(M2C_UNK(**)(void *))((s8 *) (arg0) + (0x34)))(arg0);
    }
    (*(void **) ((s8 *) (arg0) + (0))) = (void *) ((*(void **) ((s8 *) (arg0) + (0))) + 9);
}
