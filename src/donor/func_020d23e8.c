/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020d23e0 from projets/nintendogs-shiba-friends/src/donor/func_020d23e0.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;
typedef signed long long s64;
extern void func_02069668(u8 *a, u32 b, u8 *c);
extern void func_020ec220(u8 *a, u32 b, s32 c);
void func_020d23e8(u8 *param_1, u32 param_2) {
    s32 iVar3;
    s32 uVar2;
    iVar3 = *(s32 *) (param_1 + 0x214);
    func_02069668(param_1 + 0xbc, param_2, param_1 + 0xbc);
    uVar2 = *(s32 *) (param_1 + 0xb4);
    if (uVar2 >= 0) {
        return;
    }
    *(s32 *) (param_1 + 0xb4) = -((s32) (((s64) (uVar2) * (0x1004) + 0x800) >> 12));
    if (*(s32 *) (iVar3 + 0x14) == 0) {
        func_020ec220(param_1 + 400, 0,
                      ((s32) (((s64) (*(s32 *) (param_1 + 0xb4)) * (*(s32 *) (param_1 + 0x24)) + 0x800) >> 12)));
        return;
    }
    return;
}
