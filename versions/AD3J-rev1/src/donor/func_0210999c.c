/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020bfa1c from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020bfa1c.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;
typedef signed long long s64;
extern u8 data_021245c4[];
extern s32 func_020695f0(u32 *p, s32 *q);
extern void func_01ff832c(s32 a, u32 *b, u32 *c, u32 *d);
typedef struct {
    u32 w[3];
} Vec3;
void func_0210999c(u32 *param_1, s32 *param_2, s32 param_3, u32 *param_4) {
    s64 lVar1;
    s64 lVar2;
    u32 uVar2;
    s32 local_20[3];
    lVar1 = (s64) param_2[0] * (s64) param_2[0] + (s64) param_2[1] * (s64) param_2[1] + (s64) param_2[2] * (s64) param_2[2];
    if (lVar1 < (s64) * (s64 *) data_021245c4) {
        *(Vec3 *) param_4 = *(Vec3 *) param_1;
    }
    local_20[0] = -param_2[0];
    local_20[1] = -param_2[1];
    local_20[2] = -param_2[2];
    uVar2       = func_020695f0(param_1, local_20);
    if ((s32) uVar2 < 0) {
        uVar2 = 0;
    }
    func_01ff832c(uVar2 << 1, (u32 *) param_2, param_1, param_4);
    if (param_3 != 0x1000) {
        lVar1      = (s64) (s32) param_4[0] * (s64) param_3 + 0x800;
        param_4[0] = (u32) (lVar1 >> 12);
        lVar2      = (s64) (s32) param_4[1] * (s64) param_3 + 0x800;
        param_4[1] = (u32) (lVar2 >> 12);
        lVar2      = (s64) (s32) param_4[2] * (s64) param_3 + 0x800;
        param_4[2] = (u32) (lVar2 >> 12);
    }
}
