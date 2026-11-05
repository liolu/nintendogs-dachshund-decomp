/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0208fba0 from projets/nintendogs-shiba-friends/src/donor/func_0208fba0.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef signed short s16;
typedef signed int s32;
extern u8 *data_02153708;
extern void func_02090508(u16 *a, int b);
void func_0208fba0(s16 param_1) {
    u16 *puVar4;
    u8 *base;
    s32 idx;
    s16 sVar1;
    s32 t;
    s32 idx2;
    u8 *base2;

    puVar4 = (u16 *) data_02153708;
    func_02090508(puVar4, 0xc);
    puVar4[2]                 = 4;
    puVar4[7]                 = param_1;
    sVar1                     = puVar4[7];
    idx                       = sVar1 * 0x14;
    base                      = data_02153708 + 0x20;
    *(u16 *) (base + idx)     = *(u16 *) (base + idx) | 1;
    *(s16 *) (base + idx + 2) = sVar1;
    t                         = (s16) puVar4[7] + 1;
    sVar1                     = (s16) (t % 3);
    idx2                      = sVar1 * 0x14;
    base2                     = data_02153708 + 0x20;
    *(u16 *) (base2 + idx2)   = *(u16 *) (base2 + idx2) | 1;
    *(u16 *) (base2 + idx2)   = *(u16 *) (base2 + idx2) | 2;
    puVar4[0xe]               = sVar1;
}
