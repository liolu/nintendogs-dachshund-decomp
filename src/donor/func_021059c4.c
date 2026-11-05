/* compiler: 1.2/sp2p3  */
/* func_020a561c from projets/nintendogs-dachshund/src/auto/func_020a561c.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02117cd0(void *, void *);
extern M2C_UNK func_02117fbc(void *, void *);
extern M2C_UNK func_02118058(void *, void *);
extern M2C_UNK func_02118198(void *, void *);
extern M2C_UNK func_021182e0(void *, void *);
extern M2C_UNK func_02118f98(void *, void *);
extern M2C_UNK func_021191c8(void *, void *);
extern M2C_UNK func_021198e4(void *, void *);
extern M2C_UNK func_0211bbe8(void *, void *);
extern M2C_UNK func_0211bc28(void *, void *);
extern M2C_UNK func_0211bce0(void *, void *);
extern M2C_UNK func_0211bdf8(void *, void *);
extern M2C_UNK func_0211ca84(void *, void *);
extern M2C_UNK func_0211cd58(void *, void *);
extern M2C_UNK func_02121640(void *, void *);
extern M2C_UNK func_0212171c(void *, void *);
extern M2C_UNK func_02121778(void *, void *);
extern M2C_UNK func_021217d8(void *, void *);
extern M2C_UNK func_02122620(void *, void *);
extern M2C_UNK func_0212264c(void *, void *);
extern M2C_UNK func_02122668(void *, void *);
extern M2C_UNK func_02122db0(void *, void *);
extern M2C_UNK func_020c4648(void *);
void func_021059c4(void *arg0) {
    s16 temp_r0;
    s16 temp_r0_2;
    s16 temp_r1;

    temp_r1 = (*(s16 *) ((s8 *) (arg0) + (0x84)));
    if (temp_r1 != (*(s16 *) ((s8 *) (arg0) + (0x82)))) {
        (*(s16 *) ((s8 *) (arg0) + (0x86))) = temp_r1;
        (*(s16 *) ((s8 *) (arg0) + (0x84))) = (s16) (*(s16 *) ((s8 *) (arg0) + (0x82)));
        temp_r0                             = (*(s16 *) ((s8 *) (arg0) + (0x84)));
        switch (temp_r0) {
            default:
                break;
            case 1:
                func_02118f98(arg0 + 0x88, arg0);
                break;
            case 2:
                func_02117fbc(arg0 + 0x100, arg0);
                break;
            case 3:
                func_021198e4(arg0 + 0x108, arg0);
                break;
            case 4:
                func_02118198(arg0 + 0x144, arg0);
                break;
            case 5:
                func_0211bc28(arg0 + 0x1B4, arg0);
                break;
            case 6:
                func_0211bdf8(arg0 + 0x1F0, arg0);
                break;
            case 7:
                func_0211cd58(arg0 + 0x21C, arg0);
                break;
            case 8:
                func_02122db0(arg0 + 0x27C, arg0);
                break;
            case 9:
                func_0212171c(arg0 + 0x2C4, arg0);
                break;
            case 10:
                func_0212264c(arg0 + 0x2F0, arg0);
                break;
            case 11:
                func_021217d8(arg0 + 0x318, arg0);
                break;
        }
    }
    temp_r0_2 = (*(s16 *) ((s8 *) (arg0) + (0x84)));
    switch (temp_r0_2) {
        default:
            break;
        case 1:
            func_021182e0(arg0 + 0x88, arg0);
            break;
        case 2:
            func_02117cd0(arg0 + 0x100, arg0);
            break;
        case 3:
            func_021191c8(arg0 + 0x108, arg0);
            break;
        case 4:
            func_02118058(arg0 + 0x144, arg0);
            break;
        case 5:
            func_0211bbe8(arg0 + 0x1B4, arg0);
            break;
        case 6:
            func_0211bce0(arg0 + 0x1F0, arg0);
            break;
        case 7:
            func_0211ca84(arg0 + 0x21C, arg0);
            break;
        case 8:
            func_02122668(arg0 + 0x27C, arg0);
            break;
        case 9:
            func_02121640(arg0 + 0x2C4, arg0);
            break;
        case 10:
            func_02122620(arg0 + 0x2F0, arg0);
            break;
        case 11:
            func_02121778(arg0 + 0x318, arg0);
            break;
    }
    func_020c4648(arg0);
}
