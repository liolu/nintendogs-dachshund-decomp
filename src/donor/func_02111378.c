/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02111378 from projets/nintendogs-chihuahua-friends/src/donor/func_02111378.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef unsigned long long u64;
typedef signed int s32;
typedef signed long long s64;
typedef struct {
    s32 a, b, c;
} T3;
extern void func_02069668(u8 *a, s32 *b, u8 *c);
extern void func_020ec220(u8 *a, u32 b, s32 c);
void func_02111378(u8 *param_1, s32 *param_2, s32 param_3, s32 param_4, s32 param_5) {
    s32 local_20[3];
    s32 iVar2;
    s32 iVar3;
    s64 lVar1;

    *(T3 *) local_20 = *(T3 *) param_2;
    if (local_20[0] > 0x333) {
        local_20[0] = 0x333;
    }
    if (local_20[1] > 0x333) {
        local_20[1] = 0x333;
    }
    if (local_20[2] > 0x333) {
        local_20[2] = 0x333;
    }
    if (local_20[0] < -0x333) {
        local_20[0] = -0x333;
    }
    if (local_20[1] < -0x333) {
        local_20[1] = -0x333;
    }
    if (local_20[2] < -0x333) {
        local_20[2] = -0x333;
    }
    func_02069668(param_1 + 0xbc, local_20, param_1 + 0xbc);
    iVar3 = *(s32 *) (param_1 + 0xb4);
    if (iVar3 >= 0) {
        return;
    }
    if (param_5 >= 0) {
        if (iVar3 <= 0) {
            iVar3 = -iVar3;
        }
        func_020ec220(param_1 + 400, 0, iVar3);
    }
    iVar2 = *(s32 *) (param_1 + 0xb4);
    iVar3 = (iVar2 > 0) ? iVar2 : -iVar2;
    if (iVar3 < 0x29) {
        *(s32 *) (param_1 + 0xb4) = 0;
    } else {
        lVar1                     = (s64) iVar2 * (s64) param_3 + 0x800;
        *(u32 *) (param_1 + 0xb4) = -(u32) ((u64) lVar1 >> 12);
    }
    iVar2 = *(s32 *) (param_1 + 0xb0);
    iVar3 = (iVar2 > 0) ? iVar2 : -iVar2;
    if (iVar3 < 0x29) {
        *(s32 *) (param_1 + 0xb0) = 0;
    } else {
        lVar1                     = (s64) iVar2 * (s64) param_4 + 0x800;
        *(u32 *) (param_1 + 0xb0) = (u32) ((u64) lVar1 >> 12);
    }
    iVar2 = *(s32 *) (param_1 + 0xb8);
    iVar3 = (iVar2 > 0) ? iVar2 : -iVar2;
    if (iVar3 < 0x29) {
        *(s32 *) (param_1 + 0xb8) = 0;
        return;
    }
    lVar1                     = (s64) iVar2 * (s64) param_4 + 0x800;
    *(u32 *) (param_1 + 0xb8) = (u32) ((u64) lVar1 >> 12);
}
