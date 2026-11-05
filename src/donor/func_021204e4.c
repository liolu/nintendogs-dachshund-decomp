/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_021204dc from projets/nintendogs-shiba-friends/src/donor/func_021204dc.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;
extern s32 data_02157b54;
extern u16 data_02157b40;
extern u16 data_02157b44;
extern s32 func_0211f990(s32 a);
extern void func_0211f96c(void *a, u8 *b);
extern u8 *func_0212015c(void);
extern s32 func_0208465c(s32 a);
extern void func_02080820(u32 a, u32 b);
extern u16 func_0211f4ec(u32 a);
extern u8 *func_02120168(void);
extern u32 func_0211f444(void);
extern s32 func_0211f9c8(void *a, u8 *b);
extern void func_021204ac(void);
extern void func_021204e4(s32 a);
void func_021204e4(s32 param_1) {
    s32 iVar2;
    u32 uVar3;
    u8 *q;
    u8 st[8];

    iVar2 = func_0211f990(param_1);
    if (iVar2 == 0) {
        return;
    }
    if (data_02157b54 != 0) {
        func_0211f96c((void *) func_021204ac, st);
        return;
    }
    if (*(u16 *) (param_1 + 8) == 4) {
        goto case4;
    }
    if (*(u16 *) (param_1 + 8) != 5) {
        return;
    }
    iVar2 = (s32) func_0212015c();
    iVar2 = func_0208465c(iVar2);
    if (iVar2 != 0) {
        data_02157b40 = 2;
    }
    uVar3 = (u32) func_0212015c();
    func_02080820(uVar3, 0xc0);
    data_02157b44    = func_0211f4ec(data_02157b44);
    q                = func_02120168();
    *(u16 *) (q + 4) = data_02157b44;
    q                = func_02120168();
    uVar3            = func_0211f444();
    *(u16 *) (q + 6) = (u16) uVar3;
    iVar2            = func_0211f9c8((void *) func_021204e4, st + 2);
    if (iVar2 == 0) {
        return;
    }
    return;
case4:
    data_02157b44    = func_0211f4ec(data_02157b44);
    q                = func_02120168();
    *(u16 *) (q + 4) = data_02157b44;
    q                = func_02120168();
    uVar3            = func_0211f444();
    *(u16 *) (q + 6) = (u16) uVar3;
    func_0211f9c8((void *) func_021204e4, st + 4);
    return;
}
