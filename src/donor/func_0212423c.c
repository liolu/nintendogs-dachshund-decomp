/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0212423c from projets/nintendogs-chihuahua-friends/src/donor/func_0212423c.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern void func_021077e0(int p);
extern void func_021077f0(int p);
extern void func_020ebca4(int p);
extern void func_02109174(int p);
extern void func_02069504(void *a, void *b, void *c);
extern void func_020069bc(void *a, void *b);
void func_0212423c(int param_1) {
    s32 iVar1;
    s32 iVar2;
    u32 local_30[3];
    u32 local_24[3];
    u32 local_18[3];

    switch (*(s16 *) (param_1 + 0x90)) {
        case 0:
            func_021077e0(param_1);
            return;
        case 2:
            func_021077f0(param_1);
            iVar1                                       = *(s32 *) (param_1 + 0x7c);
            *(u32 *) (*(s32 *) (param_1 + 0x74) + 0x20) = 0;
            *(u32 *) (iVar1 + 0xc)                      = 0;
            return;
        case 3:
            iVar2                                       = *(s32 *) (param_1 + 0x214);
            *(u32 *) (param_1 + 0xa8)                   = 0;
            iVar1                                       = *(s32 *) (param_1 + 0x7c);
            *(u32 *) (*(s32 *) (param_1 + 0x74) + 0x20) = 0x1000;
            *(u32 *) (iVar1 + 0xc)                      = 0x1000;
            *(u32 *) (iVar2 + 4)                        = 0;
            func_020ebca4(param_1 + 400);
            return;
        case 1: {
            u32 a3      = *(u32 *) (param_1 + 0xd0);
            u32 a2      = *(u32 *) (param_1 + 0xcc);
            u32 a1      = *(u32 *) (param_1 + 0xc8);
            local_30[0] = a1;
            local_30[1] = a2;
            local_30[2] = a3;
            a3          = *(u32 *) (param_1 + 0xdc);
            a2          = *(u32 *) (param_1 + 0xd8);
            a1          = *(u32 *) (param_1 + 0xd4);
            local_24[0] = a1;
            local_24[1] = a2;
            local_24[2] = a3;
        }
            func_02069504(local_30, local_24, local_18);
            func_020069bc(local_30, local_30);
            func_020069bc(local_18, local_18);
            func_02069504(local_18, local_30, local_24);
            *(u32 *) (param_1 + 0xc8) = local_30[0];
            *(u32 *) (param_1 + 0xcc) = local_30[1];
            *(u32 *) (param_1 + 0xd0) = local_30[2];
            *(u32 *) (param_1 + 0xd4) = local_24[0];
            *(u32 *) (param_1 + 0xd8) = local_24[1];
            *(u32 *) (param_1 + 0xdc) = local_24[2];
            *(u32 *) (param_1 + 0xe0) = local_18[0];
            *(u32 *) (param_1 + 0xe4) = local_18[1];
            *(u32 *) (param_1 + 0xe8) = local_18[2];
            return;
        case 4:
            func_02109174(param_1);
            return;
        case 5:
        case 6:
        case 7:
        case 8:
        default:
            return;
    }
}
