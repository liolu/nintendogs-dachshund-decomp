/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020c53b0 from projets/nintendogs-shiba-friends/src/donor/func_020c53b0.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u32 *func_020c411c(void *a, s32 n, u32 b);
extern void func_020c5260(u8 *p, s32 a, u32 *b);
void func_020c53b4(u8 *param_1, void *param_2, s16 param_3) {
    s32 iVar3;
    s32 iVar2;
    u32 *puVar1;

    *(s16 *) (param_1 + 0x6c)                     = param_3;
    puVar1                                        = func_020c411c(param_2, param_3, *(u32 *) (param_1 + 0x1c) + 4);
    *(u32 **) (param_1 + 0x74)                    = puVar1;
    iVar3                                         = 0;
    **(u32 **) (*(u32 *) (param_1 + 0x1c) + 0x5c) = *(u32 *) (param_1 + 0x74);
    if (*(s16 *) (param_1 + 0x6c) > 0) {
        iVar2 = 0;
        do {
            *(u32 *) (*(u8 **) (param_1 + 0x74) + iVar2) = 0;
            iVar3                                        = (s16) (iVar3 + 1);
            iVar2                                        = iVar2 + 0x24;
        } while (iVar3 < *(s16 *) (param_1 + 0x6c));
    }
    func_020c5260(param_1, 0, *(u32 **) (param_1 + 0x74));
}
