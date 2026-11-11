/* compiler: 1.2/sp2p3  */
/* func_020a561c from projets/nintendogs-dachshund/src/auto/func_020a561c.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef signed char s8;
typedef short s16;
typedef long s32;
typedef s32 M2C_UNK;
extern M2C_UNK func_02117cc8(void *, void *);
extern M2C_UNK func_02117fb4(void *, void *);
extern M2C_UNK func_02118050(void *, void *);
extern M2C_UNK func_02118190(void *, void *);
extern M2C_UNK func_021182d8(void *, void *);
extern M2C_UNK func_02118f90(void *, void *);
extern M2C_UNK func_021191c0(void *, void *);
extern M2C_UNK func_021198dc(void *, void *);
extern M2C_UNK func_0211bbe0(void *, void *);
extern M2C_UNK func_0211bc20(void *, void *);
extern M2C_UNK func_0211bcd8(void *, void *);
extern M2C_UNK func_0211bdf0(void *, void *);
extern M2C_UNK func_0211ca7c(void *, void *);
extern M2C_UNK func_0211cd50(void *, void *);
extern M2C_UNK func_02121638(void *, void *);
extern M2C_UNK func_02121714(void *, void *);
extern M2C_UNK func_02121770(void *, void *);
extern M2C_UNK func_021217d0(void *, void *);
extern M2C_UNK func_02122618(void *, void *);
extern M2C_UNK func_02122644(void *, void *);
extern M2C_UNK func_02122660(void *, void *);
extern M2C_UNK func_02122da8(void *, void *);
extern M2C_UNK func_020c4644(void *);
void func_021059bc(void *arg0) {
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
                func_02118f90(arg0 + 0x88, arg0);
                break;
            case 2:
                func_02117fb4(arg0 + 0x100, arg0);
                break;
            case 3:
                func_021198dc(arg0 + 0x108, arg0);
                break;
            case 4:
                func_02118190(arg0 + 0x144, arg0);
                break;
            case 5:
                func_0211bc20(arg0 + 0x1B4, arg0);
                break;
            case 6:
                func_0211bdf0(arg0 + 0x1F0, arg0);
                break;
            case 7:
                func_0211cd50(arg0 + 0x21C, arg0);
                break;
            case 8:
                func_02122da8(arg0 + 0x27C, arg0);
                break;
            case 9:
                func_02121714(arg0 + 0x2C4, arg0);
                break;
            case 10:
                func_02122644(arg0 + 0x2F0, arg0);
                break;
            case 11:
                func_021217d0(arg0 + 0x318, arg0);
                break;
        }
    }
    temp_r0_2 = (*(s16 *) ((s8 *) (arg0) + (0x84)));
    switch (temp_r0_2) {
        default:
            break;
        case 1:
            func_021182d8(arg0 + 0x88, arg0);
            break;
        case 2:
            func_02117cc8(arg0 + 0x100, arg0);
            break;
        case 3:
            func_021191c0(arg0 + 0x108, arg0);
            break;
        case 4:
            func_02118050(arg0 + 0x144, arg0);
            break;
        case 5:
            func_0211bbe0(arg0 + 0x1B4, arg0);
            break;
        case 6:
            func_0211bcd8(arg0 + 0x1F0, arg0);
            break;
        case 7:
            func_0211ca7c(arg0 + 0x21C, arg0);
            break;
        case 8:
            func_02122660(arg0 + 0x27C, arg0);
            break;
        case 9:
            func_02121638(arg0 + 0x2C4, arg0);
            break;
        case 10:
            func_02122618(arg0 + 0x2F0, arg0);
            break;
        case 11:
            func_02121770(arg0 + 0x318, arg0);
            break;
    }
    func_020c4644(arg0);
}
