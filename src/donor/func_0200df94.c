/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0200e018 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_0200e018.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;
typedef signed long long s64;
extern s32 func_020280ec(u8 *p);
extern s32 func_02025134(u8 *p, u32 a, u32 b);
extern s32 func_02035268(u8 *p, u32 a);
extern void func_02022b38(u8 *p);
extern s32 func_020351a0(u8 *p);
extern void func_0202f960(u8 *p);
void func_0200df94(u8 *param_1) {
    s32 uVar2;
    s32 iVar3;
    u32 t;

    uVar2 = func_020280ec(param_1);
    t     = ((u32) ((((s64) (uVar2)) * ((s64) (-655)) + 0x800) >> 12));
    iVar3 = func_02025134(param_1, 5, t);
    if (iVar3 != 0) {
        iVar3 = func_02035268(param_1, 1);
        if (iVar3 != 0) {
            uVar2                      = func_020280ec(param_1);
            t                          = ((u32) ((((s64) (uVar2)) * ((s64) (1503)) + 0x800) >> 12));
            *(u32 *) (param_1 + 0x260) = ((u32) ((((s64) (*(s32 *) (param_1 + 0x198))) * ((s64) ((s32) t)) + 0x800) >> 12));
            *(u32 *) (param_1 + 0x264) = ((u32) ((((s64) (*(s32 *) (param_1 + 0x19c))) * ((s64) ((s32) t)) + 0x800) >> 12));
            *(u32 *) (param_1 + 0x268) = ((u32) ((((s64) (*(s32 *) (param_1 + 0x1a0))) * ((s64) ((s32) t)) + 0x800) >> 12));
        } else {
            uVar2                      = func_020280ec(param_1);
            t                          = ((u32) ((((s64) (uVar2)) * ((s64) (-375)) + 0x800) >> 12));
            *(u32 *) (param_1 + 0x260) = ((u32) ((((s64) (*(s32 *) (param_1 + 0x198))) * ((s64) ((s32) t)) + 0x800) >> 12));
            *(u32 *) (param_1 + 0x264) = ((u32) ((((s64) (*(s32 *) (param_1 + 0x19c))) * ((s64) ((s32) t)) + 0x800) >> 12));
            *(u32 *) (param_1 + 0x268) = ((u32) ((((s64) (*(s32 *) (param_1 + 0x1a0))) * ((s64) ((s32) t)) + 0x800) >> 12));
        }
    }
    func_02022b38(param_1);
    iVar3 = func_020351a0(param_1);
    if (iVar3 != 0) {
        func_0202f960(param_1);
    }
}
