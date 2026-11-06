/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0209cea0 from projets/nintendogs-chihuahua-friends/src/donor/func_0209cea0.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u32 func_02080f5c(void);
extern void func_02097fb4(s16 *a, int b, u32 *c);
void func_0209cea0(int param_1, u32 param_2) {
    u32 uVar5;
    s16 local_54[32];
    u32 local_58;
    int iVar3;
    int iVar2;
    int iVar1;
    s16 *puVar4;
    s32 tv;

    uVar5    = func_02080f5c();
    local_58 = uVar5;
    func_02097fb4(local_54, 32, &local_58);
    iVar1 = 0x10dcd;
    iVar2 = 0;
    switch (param_2) {
        case 0:
            break;
        case 1:
            local_58 = local_58 * iVar1 + 1;
            iVar2    = (s16) ((u16) (((u32) ((u16) local_58) * 0x33u) >> 16) + 0x352);
            break;
        case 2:
            local_58 = local_58 * iVar1 + 1;
            iVar2    = (s16) ((u16) (((u32) ((u16) local_58) * 0x33u) >> 16) + 0x352);
            break;
        case 3:
            local_58 = local_58 * iVar1 + 1;
            iVar2    = (s16) ((u16) (((u32) ((u16) local_58) * 0x33u) >> 16) + 0x352);
            break;
        case 4:
            local_58 = local_58 * iVar1 + 1;
            iVar2    = (s16) ((u16) (((u32) ((u16) local_58) * 0x29u) >> 16) + 900);
            break;
        case 5:
            local_58 = local_58 * iVar1 + 1;
            iVar2    = (s16) ((u16) (((u32) ((u16) local_58) * 0x15u) >> 16) + 0x3b6);
            break;
    }
    puVar4 = (s16 *) (param_1 + 0x18);
    iVar3  = 0;
    do {
        if (iVar3 > 0) {
            puVar4[0] = (s16) iVar3;
            puVar4[2] = (s16) iVar2;
            puVar4[1] = local_54[iVar3];
            if (puVar4[0] == 1) {
                local_58 = local_58 * iVar1 + 1;
                tv       = (s16) ((u16) ((((u16) local_58) * 3u) >> 16) * 10u + 30u);
            } else {
                local_58 = local_58 * iVar1 + 1;
                tv       = (s16) ((u16) ((((u16) local_58) * 3u) >> 16) * 10 + 30);
            }
            iVar2 = (s16) (iVar2 - tv);
        }
        iVar3  = (s16) (iVar3 + 1);
        puVar4 = puVar4 + 5;
    } while (iVar3 < 4);
}
