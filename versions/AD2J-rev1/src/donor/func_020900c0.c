/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020900c0 from projets/nintendogs-shiba-friends/src/donor/func_020900c0.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef signed short s16;
typedef signed int s32;
extern u8 *data_02153708;
extern void func_02090508(u16 *p, s32 v);
extern void func_0209026c(u8 *p);
void func_020900c0(u8 *param_1, s16 param_2, s16 param_3) {
    u16 *puVar3;
    u8 *base;
    s16 sVar1;
    s32 off;

    puVar3 = (u16 *) data_02153708;
    func_02090508(puVar3, 3);
    puVar3[2]                 = 2;
    puVar3[3]                 = 1;
    puVar3[4]                 = 0;
    puVar3[5]                 = param_3;
    puVar3[7]                 = param_2;
    sVar1                     = puVar3[7];
    base                      = (u8 *) puVar3 + 32;
    off                       = sVar1 * 20;
    *(u16 *) (base + off)     = *(u16 *) (base + off) | 1;
    *(u16 *) (base + off + 2) = sVar1;
    if (param_1 != ((void *) 0)) {
        func_0209026c(param_1);
    }
}
