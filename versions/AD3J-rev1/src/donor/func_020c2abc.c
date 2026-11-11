/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020c2ac0 from projets/nintendogs-chihuahua-friends/src/donor/func_020c2ac0.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u8 *func_02003844(s32 *a, u32 b);
extern void func_0208ba94(u8 *a);
extern void func_020c4910(u8 *a);
extern u32 func_0200348c(s32 *a, u32 b);
extern void func_020c4cb4(u8 *a);
extern void func_0207e40c(u32 a, u32 b);
typedef struct {
    u16 a;
    u16 b;
    u32 c[2];
} Row;
u8 *func_020c2abc(s32 *param_1, s32 *param_2, u32 param_3, u16 param_4) {
    u8 *puVar1;
    s32 iVar3;
    s32 iVar5;
    Row *row;
    u32 uVar2;

    puVar1                = func_02003844(param_1, 0x108);
    *(u16 *) puVar1       = 0;
    *(u16 *) (puVar1 + 2) = 0;
    func_0208ba94(puVar1 + 4);
    func_020c4910(puVar1 + 0x48);
    uVar2                    = func_0200348c(param_1, 0x12800);
    *(u32 *) (puVar1 + 0x6c) = uVar2;
    if (param_2 == 0) {
        *(u32 *) (puVar1 + 0x70) = *(u32 *) (puVar1 + 0x6c);
    } else {
        uVar2                    = func_0200348c(param_2, 0xa28);
        *(u32 *) (puVar1 + 0x70) = uVar2;
    }
    *(u32 *) (puVar1 + 0x74) = 0;
    *(u16 *) (puVar1 + 0x78) = param_4;
    *(u16 *) (puVar1 + 0x7a) = 0xffff;
    *(u32 *) (puVar1 + 0x80) = param_3;
    *(u32 *) (puVar1 + 0x84) = 0;
    *(u32 *) (puVar1 + 0x88) = 0;
    *(u32 *) (puVar1 + 0x8c) = 0;
    *(u32 *) (puVar1 + 0x90) = 0;
    *(u32 *) (puVar1 + 0x94) = 0;
    func_020c4cb4(puVar1 + 0x98);
    iVar3                    = 0;
    *(u32 *) (puVar1 + 0xb0) = 0;
    *(u32 *) (puVar1 + 0xb4) = 0;
    *(u32 *) (puVar1 + 0xb8) = 0;
    *(u32 *) (puVar1 + 0xbc) = 0;
    row                      = (Row *) (puVar1 + 0xc0);
    do {
        row->a = 1;
        row->b = 0;
        iVar5  = 0;
        do {
            row->c[iVar5] = 0;
            iVar5         = iVar5 + 1;
        } while (iVar5 < 2);
        iVar3 = (s16) (iVar3 + 1);
        row   = row + 1;
    } while (iVar3 < 6);
    if (*(u32 *) (puVar1 + 0x6c) != *(u32 *) (puVar1 + 0x70)) {
        func_0207e40c(*(u32 *) (puVar1 + 0x70), 0x44464357);
    }
    func_0207e40c(*(u32 *) (puVar1 + 0x6c), 0x4446434d);
    return puVar1;
}
