/* compiler: 1.2/sp2p3  */
/* func_0200f86c from projets/nintendogs-chihuahua-friends/src/auto/func_0200f86c.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef long s32;
typedef s32 M2C_UNK;
extern void *func_02034f40();
extern M2C_UNK func_0203e280(void *, M2C_UNK, M2C_UNK);
extern s32 func_ov002_02193e98(void *);
s32 func_0200f86c(void *arg0) {
    s16 temp_r0_2;
    s8 temp_r0_3;
    s8 temp_r0_4;
    void *temp_r0;

    temp_r0 = func_02034f40();
    if (temp_r0 != ((void *) 0)) {
        func_0203e280(arg0, 2, 1);
        temp_r0_2 = (*(s16 *) ((s8 *) (temp_r0) + (0x90)));
        switch (temp_r0_2) {
            case 4:
                temp_r0_3 = (*(s8 *) ((s8 *) (arg0) + (0xA4)));
                if (temp_r0_3 != 5) {
                    if (temp_r0_3 != 4) {
                        (*(s32 *) ((s8 *) (arg0) + (0x188))) = 1;
                    }
                }
                break;
            case 7:
                temp_r0_4 = (*(s8 *) ((s8 *) (arg0) + (0xA4)));
                if ((temp_r0_4 != 5) && (temp_r0_4 != 4)) {
                    (*(s32 *) ((s8 *) (arg0) + (0x188))) = 8;
                }
                break;
        }
        return func_ov002_02193e98(arg0);
    }
    return 0;
}
