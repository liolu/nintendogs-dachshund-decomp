/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0208fd98 from projets/nintendogs-shiba-friends/src/donor/func_0208fd98.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u16 *data_02153708;
extern void func_02090508(u16 *p, u32 v);
void func_0208fd98(s32 *param_1, u16 param_2, u16 param_3) {
    s16 sVar1;
    u8 *ent;
    u16 *puVar4;

    puVar4 = data_02153708;
    func_02090508(puVar4, 8);
    puVar4[2]          = 7;
    puVar4[7]          = param_2;
    puVar4[8]          = param_3;
    sVar1              = (s16) puVar4[7];
    ent                = (u8 *) puVar4 + 32 + sVar1 * 20;
    *(u16 *) ent       = *(u16 *) ent | 1;
    *(s16 *) (ent + 2) = sVar1;
    if (param_1 != ((void *) 0)) {
        *param_1                      = 0x42415448;
        *(u16 *) ((u8 *) param_1 + 4) = 0;
    }
}
