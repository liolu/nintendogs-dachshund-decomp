/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020dbb2c from projets/nintendogs-chihuahua-friends/src/donor/func_020dbb2c.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern void func_020e98fc(s32 a);
extern void func_020ece10(s32 a);
extern void func_020ed5f8(s32 a, s32 b);
extern void func_020ed3b0(void);
extern void func_020e9858(void);
void func_020dbb2c(u8 *param_1) {
    u8 *iVar4;
    s32 iVar3;
    u32 uVar1;
    s32 iVar2;
    s32 sc;
    s32 prod;
    s32 lo;
    s32 k;

    iVar4 = *(u8 **) (param_1 + 0x214);
    uVar1 = *(u16 *) (iVar4 + 0x1c);
    if (uVar1 < 0xeef) {
        goto r11c;
    }
    if (uVar1 > 0x20b6) {
        goto r11c;
    }
    k     = 0x7333eb87;
    sc    = *(s16 *) (iVar4 + 6);
    prod  = sc * (s32) (uVar1 + 0xfffff111);
    iVar3 = prod / 4551;
    if (iVar3 < 0) {
        goto rf8;
    }
    if (iVar3 >= sc) {
        goto rf8;
    }
    if (*(s16 *) (iVar4 + 2) == 2) {
        iVar2 = *(s32 *) (iVar4 + 0x14);
        if (iVar2 <= 0) {
            iVar2 = -iVar2;
        }
        if (iVar2 < 0x71c) {
            if (*(s32 *) (iVar4 + 0x54) != 0) {
                if (*(s32 *) (iVar4 + 0x58) != 0) {
                    func_020ece10(0);
                    *(s32 *) (iVar4 + 0x58) = 0;
                }
                return;
            }
            func_020e98fc((s16) iVar3);
            return;
        }
    }
    if (*(s32 *) (iVar4 + 0x54) != 0) {
        func_020ed5f8(*(s16 *) (param_1 + 0x94), (s16) iVar3);
        return;
    }
    func_020e98fc((s16) iVar3);
    return;
rf8:
    if (*(s32 *) (iVar4 + 0x54) != 0) {
        func_020ed3b0();
        return;
    }
    func_020e9858();
    return;
r11c:
    if (*(s32 *) (iVar4 + 0x54) != 0) {
        func_020ed3b0();
        return;
    }
    func_020e9858();
    return;
}
