/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020b1f14 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020b1f14.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef unsigned long long u64;
typedef signed short s16;
typedef signed int s32;
extern u64 func_02080f5c(void);
extern void func_02097fb4(s16 *a, int b, u32 *c);
extern s32 func_02099e00(u32 *a, u32 b, int c);
void func_02099c88(u8 *param_1, u32 param_2) {
    u32 local_68;
    s16 local_64[32];
    int iVar5;
    u8 *puVar4;
    int iVar2;
    int iVar1;

    local_68 = (u32) func_02080f5c();
    func_02097fb4(local_64, 0x20, &local_68);
    iVar2  = 0x12d;
    iVar1  = 0x10dcd;
    puVar4 = param_1 + 0x18;
    iVar5  = 0;
    do {
        if (iVar5 > 0) {
            *(s16 *) puVar4       = (s16) iVar5;
            *(s16 *) (puVar4 + 2) = local_64[iVar5];
            *(s16 *) (puVar4 + 4) = (s16) func_02099e00(&local_68, param_2, iVar5);
            switch (iVar5) {
                case 1:
                    local_68              = local_68 * iVar1 + 1;
                    *(s16 *) (puVar4 + 6) = -(s16) ((u16) (((u32) (u16) local_68 * (u32) iVar2) >> 16) + 600);
                    break;
                case 2:
                    local_68              = local_68 * iVar1 + 1;
                    *(s16 *) (puVar4 + 6) = -(s16) ((u16) (((u32) (u16) local_68 * 300u) >> 16) + 300);
                    break;
                case 3:
                    local_68              = local_68 * iVar1 + 1;
                    *(s16 *) (puVar4 + 6) = -(s16) (u16) (((u32) (u16) local_68 * 300u) >> 16);
                    break;
            }
            *(s16 *) (puVar4 + 8) = *(s16 *) (puVar4 + 6);
        }
        iVar5  = (s16) (iVar5 + 1);
        puVar4 = puVar4 + 10;
    } while (iVar5 < 4);
}
