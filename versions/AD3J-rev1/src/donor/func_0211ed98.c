/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0211eda0 from projets/nintendogs-chihuahua-friends/src/donor/func_0211eda0.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern int *data_021560e8;
extern int func_0211e660;
extern void func_0211f288(void);
extern u32 func_02120144(void);
extern s32 func_0211fe28(int *a, int *b);
void func_0211ed98(void) {
    int local;
    u32 uVar2;

    if (data_021560e8[0xd] != 0) {
        data_021560e8[0xd]                     = 0;
        *(u16 *) ((u8 *) data_021560e8 + 0x30) = 0;
        *(u16 *) ((u8 *) data_021560e8 + 0x32) = 0;
    }
    switch (data_021560e8[0xa]) {
        case 0:
        case 1:
            goto dflt;
        case 2:
        case 3:
            break;
        case 4:
            func_0211f288();
            uVar2 = func_02120144();
            switch (uVar2) {
                case 0:
                case 1:
                case 2:
                    goto dflt;
                case 3:
                case 4:
                case 5:
                case 6:
                case 7:
                case 8:
                case 9:
                case 10:
                case 0xb:
                    break;
                default:
                    goto dflt;
            }
            data_021560e8[0xa] = 4;
            data_021560e8[0xb] = 1;
            if (*(s16 *) ((u8 *) data_021560e8 + 0x38) == 0) {
                *(s16 *) ((u8 *) data_021560e8 + 0x38) = 1;
            }
            goto dflt;
        default:
            goto dflt;
    }
    func_0211f288();
    uVar2 = func_02120144();
    switch (uVar2) {
        case 0:
        case 1:
        case 2:
            goto dflt;
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 0xb:
            break;
        default:
            goto dflt;
    }
    data_021560e8[0xa] = 4;
    data_021560e8[0xb] = 1;
    if (*(s16 *) ((u8 *) data_021560e8 + 0x38) == 0) {
        *(s16 *) ((u8 *) data_021560e8 + 0x38) = 1;
    }
dflt:
    if (data_021560e8[0xa] != 1) {
        return;
    }
    data_021560e8[0xa] = 4;
    if (func_0211fe28((int *) &func_0211e660, &local) != 0) {
        data_021560e8[0xb] = 0;
    }
    return;
}
