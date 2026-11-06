/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0211e908 from projets/nintendogs-chihuahua-friends/src/donor/func_0211e908.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u32 data_021560e8;
extern void func_0211f288(void);
extern s32 func_02120144(void);
void func_0211e900(void) {
    s32 s;
    s32 r;

    if (*(s32 *) (*(u8 **) &data_021560e8 + 0x34) != 0) {
        *(s32 *) (*(u8 **) &data_021560e8 + 0x34) = 0;
        *(u16 *) (*(u8 **) &data_021560e8 + 48)   = 0;
        *(u16 *) (*(u8 **) &data_021560e8 + 50)   = 0;
    }
    s = *(s32 *) (*(u8 **) &data_021560e8 + 0x28);
    switch (s) {
        case 0:
        case 1:
            goto fin;
        case 2:
        case 3:
            goto caseB;
        case 4:
            goto caseA;
        default:
            goto fin;
    }
caseA:
    func_0211f288();
    r = func_02120144();
    switch (r) {
        case 0:
        case 1:
        case 2:
            goto fin;
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
            goto bodyA;
        default:
            goto fin;
    }
bodyA:
    *(s32 *) (*(u8 **) &data_021560e8 + 0x28) = 4;
    *(s32 *) (*(u8 **) &data_021560e8 + 0x2c) = 1;
    if (*(s16 *) (*(u8 **) &data_021560e8 + 0x38) == 0) {
        *(u16 *) (*(u8 **) &data_021560e8 + 0x38) = 1;
    }
    return;
caseB:
    func_0211f288();
    r = func_02120144();
    switch (r) {
        case 0:
        case 1:
        case 2:
            goto fin;
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 11:
            goto bodyB;
        default:
            goto fin;
    }
bodyB:
    *(s32 *) (*(u8 **) &data_021560e8 + 0x28) = 4;
    *(s32 *) (*(u8 **) &data_021560e8 + 0x2c) = 1;
    if (*(s16 *) (*(u8 **) &data_021560e8 + 0x38) == 0) {
        *(u16 *) (*(u8 **) &data_021560e8 + 0x38) = 1;
    }
fin:
    return;
}
