/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020a1534 from projets/nintendogs-shiba-friends/src/donor/func_020a1534.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u32 data_0213bd58[];
extern u8 *data_02153720;
extern u8 *func_01ffda04(s32 a);
extern s32 func_02028144(u8 *p);
extern u8 func_020280c8(u8 *p);
extern s32 func_020c55c8(u32 a, u32 b);
extern s32 func_020b261c(void);
s32 func_020a1534(s32 param_1, u32 param_2) {
    s32 iVar3;
    u8 *iVar2;
    u8 bVar1;

    iVar3 = (s32) data_0213bd58;
    switch (param_1) {
        case 0x30002:
            iVar2 = func_01ffda04((s32) * (s16 *) (*(u8 **) &data_02153720 + 0x112));
            iVar3 = func_02028144(iVar2) + 0x78;
            break;
        case 0x30005:
            iVar2 = func_01ffda04((s32) * (s16 *) (*(u8 **) &data_02153720 + 0x112));
            if (iVar2 != ((void *) 0)) {
                bVar1 = func_020280c8(iVar2);
                iVar3 = func_020c55c8((u32) bVar1, param_2);
            }
            break;
        case 0x3000d:
            iVar3 = func_020b261c();
            break;
    }
    return iVar3;
}
