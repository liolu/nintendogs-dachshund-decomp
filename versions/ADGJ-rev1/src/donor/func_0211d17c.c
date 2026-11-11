/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0211d17c from projets/nintendogs-chihuahua-friends/src/donor/func_0211d17c.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u8 *data_021560e8;
extern u32 func_0211f60c(u8 *p);
void func_0211d17c(u8 *param_1) {
    s32 iVar2;
    u32 s;

    if (func_0211f60c(param_1) == 0) {
        return;
    }
    s = *(u16 *) (param_1 + 4);
    if (s == 10) {
        goto case10;
    }
    if (s == 11) {
        return;
    }
    if (s == 12) {
        return;
    }
    return;
case10:
    iVar2 = *(s32 *) ((*(u8 **) &data_021560e8) + 0x2c);
    if (iVar2 == 1) {
        goto case1;
    }
    if (iVar2 == 2) {
        goto case23;
    }
    if (iVar2 == 3) {
        goto case23;
    }
    return;
case1:
    if (*(s16 *) ((*(u8 **) &data_021560e8) + 0x38) == 0) {
        *(u16 *) ((*(u8 **) &data_021560e8) + 0x38) = 1;
    }
    return;
case23:
    *(u32 *) ((*(u8 **) &data_021560e8) + 0x3c) = 1;
    *(u32 *) ((*(u8 **) &data_021560e8) + 0x28) = *(u32 *) ((*(u8 **) &data_021560e8) + 0x2c);
    if (*(u32 *) ((*(u8 **) &data_021560e8) + 0x18) != 0) {
        ((void (*)(u8 *)) * (u32 *) ((*(u8 **) &data_021560e8) + 0x18))(param_1);
    }
}
