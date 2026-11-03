/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020e78b0 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020e78b0.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed int s32;
typedef signed long long s64;
typedef struct {
    u32 w[12];
} Blk;
extern void func_02069668(u8 *a, u32 b, u8 *c);
extern void func_020ec218(u8 *a, u32 b, s32 c);
void func_020d55bc(u8 *param_1, u32 param_2, u32 *param_3) {
    s32 iVar3;

    func_02069668(param_1 + 0xbc, param_2, param_1 + 0xbc);
    iVar3 = *(s32 *) (param_1 + 0xb4);
    if (iVar3 < 0) {
        if (iVar3 <= 0) {
            iVar3 = -iVar3;
        }
        func_020ec218(param_1 + 400, 0, iVar3);
        *(s32 *) (param_1 + 0xb4) = -((s32) (((s64) (*(s32 *) (param_1 + 0xb4)) * (0x668) + 0x800) >> 12));
        *(s32 *) (param_1 + 0xb0) = ((s32) (((s64) (*(s32 *) (param_1 + 0xb0)) * (0xf37) + 0x800) >> 12));
        *(s32 *) (param_1 + 0xb8) = ((s32) (((s64) (*(s32 *) (param_1 + 0xb8)) * (0xf37) + 0x800) >> 12));
    }
    *(Blk *) (param_1 + 200) = *(Blk *) param_3;
}
