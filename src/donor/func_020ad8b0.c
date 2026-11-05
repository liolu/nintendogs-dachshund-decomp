/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020ad8b0 from projets/nintendogs-shiba-friends/src/donor/func_020ad8b0.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;
extern u8 data_02153894[];
extern u8 data_0213c360[];
extern u8 data_0213c374[];
extern u32 func_020b0e0c(void);
extern u32 func_020aed90(void);
extern u32 func_020adb74(u32 a);
extern u32 func_020b0b88(void);
u32 func_020ad8b0(s32 param_1) {
    u8 *iVar1;
    u8 *r4;
    u32 uVar2;
    s32 iVar3;

    iVar1 = *(u8 **) data_02153894;
    r4    = iVar1 + 0x160;
    uVar2 = func_020b0e0c();
    switch (uVar2) {
        case 0:
            goto ret30;
        case 1:
            goto tail;
        case 2:
            goto c2;
        case 3:
            goto c3;
        case 4:
            goto ret1c;
        default:
            goto ret30;
    }
tail:
    if (param_1 == 0) {
        iVar3 = (s32) func_020b0b88();
        return func_020adb74(*(u32 *) (r4 + iVar3 * 4 + 4));
    }
    if (param_1 == 10) {
        return func_020aed90();
    }
    return func_020adb74(*(u32 *) (*(u8 **) data_02153894 + param_1 * 4 + 0x164));
c2:
    if (param_1 == 10) {
        return func_020aed90();
    }
    return func_020adb74(*(u32 *) (r4 + 4));
c3:
    return func_020aed90();
ret1c:
    return (u32) data_0213c360;
ret30:
    return (u32) data_0213c374;
}
