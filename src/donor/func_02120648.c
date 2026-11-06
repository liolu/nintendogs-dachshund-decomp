/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02120648 from projets/nintendogs-chihuahua-friends/src/donor/func_02120648.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef int BOOL;
extern u16 data_02157b44;
extern s32 func_0211fdac(u8 *p);
extern void func_0211f2f0(u32 a);
extern u16 func_0211f4ec(u32 a);
extern u8 *func_02120168(void);
extern u32 func_0211f444(void);
extern s32 func_0211f9c8(u8 *f, s16 *p);
extern void func_0211fd88(u8 *f, u8 *p);
extern void func_021204e4(void);
extern void func_0212061c(void);
void func_02120648(u8 *param_1) {
    s16 sStack_10;
    u8 auStack_e[6];
    u16 uVar1;
    u8 *iVar2;
    u32 uVar3;
    BOOL bVar4;

    if (func_0211fdac(param_1) == 0) {
        return;
    }
    func_0211f2f0(data_02157b44);
    uVar1                = func_0211f4ec(data_02157b44);
    data_02157b44        = uVar1;
    iVar2                = func_02120168();
    *(u16 *) (iVar2 + 4) = data_02157b44;
    iVar2                = func_02120168();
    uVar3                = func_0211f444();
    *(s16 *) (iVar2 + 6) = (s16) uVar3;
    bVar4                = (func_0211f9c8((u8 *) func_021204e4, &sStack_10) != 0);
    if (!bVar4) {
        func_0211fd88((u8 *) func_0212061c, auStack_e);
    }
}
