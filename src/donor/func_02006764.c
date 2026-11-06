/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02006764 from projets/nintendogs-chihuahua-friends/src/donor/func_02006764.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;
extern u8 *data_0214b02c;
extern u8 data_0214b030[];
extern u8 *data_0214b028;
extern s32 func_02002dec(void);
extern u8 *func_02002de4(s32 a);
extern void func_02002ddc(s32 a);
extern void func_02002f94(void);
extern void func_02003790(u8 *p);
extern void func_02003734(u8 *p, s32 v);
void func_02006764(void) {
    u8 *piVar4;
    s32 iVar3;
    u32 uVar5;

    func_02002f94();
    iVar3  = func_02002dec();
    piVar4 = func_02002de4(iVar3);
    func_02002ddc(iVar3);
    func_02003790(piVar4);
    uVar5 = 0;
    do {
        func_02003734(data_0214b02c, *(u16 *) (data_0214b030 + uVar5 * 8 + 4));
        uVar5 = (u16) (uVar5 + 1);
    } while (uVar5 < 8);
    uVar5 = 0;
    iVar3 = (s32) data_0214b028;
    if (uVar5 < *(u16 *) ((u8 *) iVar3 + 0x10)) {
        do {
            func_02003734(piVar4, *(u16 *) (*(u8 **) ((u8 *) iVar3 + 0x30) + uVar5 * 8 + 4));
            iVar3 = (s32) data_0214b028;
            uVar5 = (u16) (uVar5 + 1);
        } while (uVar5 < *(u16 *) ((u8 *) iVar3 + 0x10));
    }
}
