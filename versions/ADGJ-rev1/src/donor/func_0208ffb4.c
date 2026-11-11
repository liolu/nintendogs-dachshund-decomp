/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0208ffb4 from projets/nintendogs-chihuahua-friends/src/donor/func_0208ffb4.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u16 *data_02153708;
extern void func_02090508(u16 *p, u32 v);
void func_0208ffb4(u32 *param_1, u16 param_2) {
    s32 iVar2;
    u16 *puVar1;
    u16 *puVar3;

    puVar3 = data_02153708;
    func_02090508(puVar3, 2);
    iVar2     = 0;
    puVar3[2] = 0;
    puVar1    = puVar3 + 0x10;
    do {
        *puVar1   = *puVar1 | 1;
        puVar1[1] = (u16) iVar2;
        iVar2     = iVar2 + 1;
        puVar1    = puVar1 + 10;
    } while (iVar2 < 3);
    if (param_1 != ((void *) 0)) {
        *param_1                      = 0x4453454c;
        *(u16 *) ((u8 *) param_1 + 4) = param_2;
        *(s16 *) ((u8 *) param_1 + 6) = -1;
        *(s16 *) ((u8 *) param_1 + 8) = -1;
        return;
    }
    return;
}
