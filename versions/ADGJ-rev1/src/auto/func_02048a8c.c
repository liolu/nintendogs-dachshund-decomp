/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02048a8c from projets/nintendogs-shiba-friends/src/donor/func_02048a8c.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef signed int s32;
typedef signed long long s64;
typedef int BOOL;
extern BOOL func_02048be8(u8 *p, s32 *a, s32 b, s32 c, s32 d, s32 e);
extern s32 func_02035294(u8 *p, s32 n);
extern s32 func_020280f8(u8 *p);
extern void func_0203e2b8(u8 *p, s32 v);
extern s32 func_020351a0(u8 *p);
void func_02048a8c(u8 *param_1) {
    s32 local_8;
    s32 iVar2;
    s32 uVar3;

    local_8 = 0;
    if (func_02048be8(param_1, &local_8, 1, 180, 180, 0x29a)) {
        return;
    }
    iVar2 = func_02035294(param_1, 20);
    if (iVar2 != 0) {
        uVar3 = func_020280f8(param_1);
        if (local_8 > ((s32) ((((s64) (uVar3) * (s64) (0x300c)) + 0x800) >> 12))) {
            func_0203e2b8(param_1, 0x299);
            return;
        }
    }
    iVar2 = func_02035294(param_1, 45);
    if (iVar2 != 0) {
        uVar3 = func_020280f8(param_1);
        if (local_8 > ((s32) ((((s64) (uVar3) * (s64) (0x1cd4)) + 0x800) >> 12))) {
            func_0203e2b8(param_1, 0x297);
            return;
        }
    }
    iVar2 = func_020351a0(param_1);
    if (iVar2 != 0) {
        func_0203e2b8(param_1, 664);
        return;
    }
}
