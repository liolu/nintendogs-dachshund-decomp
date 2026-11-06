/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0204897c from projets/nintendogs-shiba-friends/src/donor/func_0204897c.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef unsigned long long u64;
typedef signed int s32;
typedef signed long long s64;
extern s32 func_02048be8(u8 *p, s32 *a, u32 b, u32 c, u32 d, u32 e);
extern u32 func_020280f8(u8 *p);
extern void func_0203e2b8(u8 *p, u32 a);
void func_0204897c(u8 *param_1) {
    s32 bVar1;
    u32 uVar2;
    u64 uVar3;
    s32 local_10[2];
    local_10[0] = 0;
    bVar1       = func_02048be8(param_1, local_10, 0, 0xb5, 0xb8, 0x29a);
    if (bVar1) {
        return;
    }
    uVar2 = func_020280f8(param_1);
    uVar3 = (s64) (s32) uVar2 * 0x300c + 0x800;
    if (local_10[0] > (s32) ((u32) (uVar3 >> 12) + 0xcd0)) {
        func_0203e2b8(param_1, 0x299);
        return;
    }
    uVar2 = func_020280f8(param_1);
    uVar3 = (s64) (s32) uVar2 * 0x1cd4 + 0x800;
    if (local_10[0] < (s32) ((u32) (uVar3 >> 12) - 0xcd0)) {
        func_0203e2b8(param_1, 0x298);
        return;
    }
}
