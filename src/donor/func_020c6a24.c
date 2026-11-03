/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0209128c from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_0209128c.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u32 data_0212d2d4;
extern u32 func_020c6340(u32 a, u32 b);
void func_020c6a24(u8 *param_1) {
    int k;
    u8 *r1;
    int i;
    int uVar2;
    s32 iVar1;

    r1 = *(u8 **) (param_1 + 0x30);
    switch (*(u8 *) (r1 + 1)) {
        case 0:
            *(u16 *) (2 + param_1) = 6;
            break;
        case 1:
            *(u16 *) (param_1 + 2) = 11;
            break;
        case 2:
            *(u16 *) (param_1 + 2) = 8;
            break;
        case 3:
            *(u16 *) (2 + param_1)  = 12;
            *(u16 *) (param_1 + 22) = *(u16 *) (4 + r1);
    }
    uVar2 = *(u16 *) (*(u8 **) (*(u8 **) (param_1 + 0x2c) + 0x1c) + *(u16 *) (r1 + 2) * 2);
    if (uVar2 == 0xffff) {
        goto early;
    }
    iVar1                     = func_020c6340(*(u32 *) (0x2c + param_1), uVar2);
    *(s32 *) (0x30 + param_1) = iVar1;
    *(u16 *) (param_1 + 8)    = 0;
    *(u16 *) (param_1 + 26)   = 1;
    *(u16 *) (param_1 + 12)   = 30;
    *(u16 *) (param_1 + 16)   = 0;
    *(u16 *) (20 + param_1)   = 1;
    *(u16 *) (param_1 + 4)    = *(s16 *) ((u8 *) &data_0212d2d4 + 10);
    if (*(s16 *) (param_1 + 88) > 0) {
        i = 0;
        k = 0;
        do {
            *(u16 *) (param_1 + ((u32) i << 1) + 90) = k;
            i                                        = i + 1;
        } while (i < *(s16 *) (88 + param_1));
    }
    *(u16 *) (88 + param_1) = 0;
    i                       = 0;
    k                       = 1 + k;
    *(u16 *) (param_1 + 52) = 0;
    k                       = 1 + k;
    k                       = 0;
    do {
        *(s32 *) (param_1 + ((u32) i << 2) + 0x38) = k;
        i += 1;
    } while ((u32) i < 2u);
    return;
early:
    *(u16 *) param_1 = 2;
}
