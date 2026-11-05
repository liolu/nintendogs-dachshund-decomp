/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020901e0 from projets/nintendogs-shiba-friends/src/donor/func_020901e0.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u16 *data_02153708;
extern void func_02090508(u16 *p, s32 v);
extern void func_0209026c(u32 *p);
void func_020901e0(u32 *param_1, u16 param_2, u16 param_3) {
    s16 sVar1;
    s32 iVar2;
    u16 *puVar3;
    u8 *b;

    puVar3 = data_02153708;
    func_02090508(puVar3, 1);
    puVar3[2]                     = 1;
    puVar3[3]                     = 0;
    puVar3[4]                     = param_3;
    puVar3[7]                     = param_2;
    sVar1                         = (s16) puVar3[7];
    iVar2                         = (s32) sVar1;
    b                             = (u8 *) puVar3 + 32;
    *(u16 *) (b + iVar2 * 20)     = *(u16 *) (b + iVar2 * 20) | 1;
    *(u16 *) (b + iVar2 * 20 + 2) = sVar1;
    if (param_1 != ((void *) 0)) {
        func_0209026c(param_1);
    }
}
