/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020b51e4 from projets/nintendogs-chihuahua-friends/src/donor/func_020b51e4.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef unsigned long long u64;
typedef signed int s32;
typedef volatile u16 vu16;
extern s32 *data_021538b4;
extern void func_0207e76c(s32 a, s32 *b);
extern u64 func_0206dfbc(u16 a, s32 *b, u32 c);
extern void func_0207e3b0(s32 a, s32 b);
void func_020b51e4(s32 param_1, s32 param_2, u8 *param_3, s32 param_4) {
    s32 *piVar1;
    s32 iVar3;
    s32 *piVar2;
    vu16 zero;

    piVar1 = data_021538b4;
    if (piVar1[0] != 0) {
        piVar2 = piVar1 + 2;
        iVar3  = 0;
        do {
            if (piVar2[2] != 0) {
                func_0207e76c(piVar2[3], piVar1);
                zero   = 0;
                piVar1 = (s32 *) (u32) (func_0206dfbc(zero, piVar2, 0x10) >> 32);
            }
            iVar3  = iVar3 + 1;
            piVar2 = piVar2 + 4;
        } while (iVar3 < 10);
        func_0207e3b0(data_021538b4[1], 0x434e535f);
        *data_021538b4 = 0;
    }
}
