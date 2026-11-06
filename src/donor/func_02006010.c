/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02006010 from projets/nintendogs-chihuahua-friends/src/donor/func_02006010.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;
extern u8 data_0214a95c[];
extern u8 data_0214a958[];
extern void func_0208ba94(s32 *p);
extern void func_0208b744(s32 *p, u8 *q);
extern s32 func_02003844(u8 *p, s32 a);
extern void func_0208b5e8(s32 *p, s32 a, s32 b);
extern void func_0208b6fc(s32 *p);
extern u32 *func_02006b38(s32 a);
extern u32 *func_02006b04(s32 a);
void func_02006010(u8 *param_1, u8 *param_2, u8 *param_3) {
    s32 blk[17];
    s32 iVar1;
    s32 iVar4;
    u32 *piVar2;
    u32 *piVar3;

    if (*(u32 *) data_0214a95c != 0) {
        return;
    }
    func_0208ba94(blk);
    func_0208b744(blk, param_2);
    iVar4 = blk[9] - blk[8];
    iVar1 = func_02003844(param_1, iVar4);
    func_0208b5e8(blk, iVar1, iVar4);
    func_0208b6fc(blk);
    piVar2                  = func_02006b38(iVar1);
    *(u32 **) data_0214a95c = piVar2;
    func_0208b744(blk, param_3);
    iVar4 = blk[9] - blk[8];
    iVar1 = func_02003844(param_1, iVar4);
    func_0208b5e8(blk, iVar1, iVar4);
    func_0208b6fc(blk);
    piVar3                  = func_02006b04(iVar1);
    *(u32 **) data_0214a958 = piVar3;
}
