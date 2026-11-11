/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020b3794 from projets/nintendogs-chihuahua-friends/src/donor/func_020b3794.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef unsigned long long u64;
typedef signed short s16;
typedef signed int s32;
extern u16 data_0213c928[];
extern void func_020a8500(int a, u32 b, int c);
extern void func_020a8790(int a, u32 b, u32 c, u32 d, u32 e, int f);
extern u64 _s32_div_f(u32 a, u32 b);
extern void func_020b8d24(int a, int b, int c, int d);
extern void func_020b8ce8(int a, int b, s32 c, s32 d);
void func_020b3794(u8 *param_1) {
    u8 *p = param_1;
    s32 iVar5;
    s32 iVar4;
    u32 uVar3;
    u32 uVar6;
    u32 uVar2;
    u32 uVar1;

    *(u16 *) (p + 0x32) = 1;
    func_020a8500(0, *(u32 *) (p + 0x10), 0);
    uVar6 = 0;
    do {
        iVar4 = uVar6 * 13;
        iVar5 = 0;
        uVar3 = 2;
        do {
            uVar1 = data_0213c928[iVar4];
            if (uVar1 == 0) {
                uVar2 = 2;
                break;
            }
            func_020a8790(0, *(u32 *) (p + 0x10), uVar3, uVar6 * 0x10 + 5, uVar1, 1);
            iVar5 = iVar5 + 1;
            iVar4 = iVar4 + 1;
            uVar3 = uVar3 + 0x10;
            uVar2 = uVar6;
        } while (iVar5 < 13);
        uVar6 = uVar2 + 1;
        if ((s32) uVar6 >= 2) {
            uVar3 = *(s32 *) (p + 0x874) - 2;
            uVar6 = *(u16 *) (p + 0x30);
            if ((s32) uVar6 >= (s32) uVar3) {
                uVar6 = uVar3;
            }
            uVar1                = *(u16 *) (p + 0x880);
            *(s16 *) (p + 0x882) = *(u16 *) (p + 0x878) * 8 + ((((u32) (_s32_div_f(uVar6, uVar1) >> 32)) << 16) >> 12);
            *(s16 *) (p + 0x884) = *(u16 *) (p + 0x87a) * 8 + ((((u32) _s32_div_f(uVar6, uVar1)) << 16) >> 12) + 3;
            func_020b8d24(2, 14, 0, 0);
            func_020b8ce8(2, 14, *(s16 *) (p + 0x882), *(s16 *) (p + 0x884));
            return;
        }
    } while (1);
}
