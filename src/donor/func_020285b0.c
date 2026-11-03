/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02028894 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_02028894.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed char s8;
typedef signed short s16;
typedef signed long long s64;
typedef struct {
    u32 w[3];
} Vec3;
extern u32 data_0214b480;
extern u8 *data_02153704;
extern u8 *data_02153720;
extern s16 data_02124ad8[];
extern int func_02092d74(u32 a, int b);
extern void func_02092d38(u32 a, u32 *b, int c);
extern void func_02092d24(u32 a, u32 *b);
extern void func_02105fa4(int *p);
extern int func_02069878(int a, int b);
void func_020285b0(u8 *param_1, u32 *param_2, u32 *param_3) {
    int iVar3;
    int iVar4;
    s64 lVar1;
    int sVar2;
    int local_20[3];

    iVar3 = func_02092d74(data_0214b480, *(s8 *) (param_1 + 0x88));
    if (iVar3 != -1) {
        func_02092d38(data_0214b480, param_2, *(s8 *) (param_1 + 0x88));
        if (param_3 != ((void *) 0)) {
            func_02092d24(data_0214b480, param_3);
            return;
        }
        return;
    }
    func_02105fa4(local_20);
    sVar2      = func_02069878(local_20[0], local_20[2]);
    iVar4      = *(int *) (data_02153704 + 0xc) - 0x2008;
    lVar1      = (s64) iVar4 * (s64) data_02124ad8[(sVar2 >> 4) * 2] + 0x800;
    param_2[0] = (u32) (lVar1 >> 12);
    param_2[1] = 0;
    lVar1      = (s64) iVar4 * (s64) data_02124ad8[(sVar2 >> 4) * 2 + 1] + 0x800;
    param_2[2] = (u32) (lVar1 >> 12);
    if (param_3 != ((void *) 0)) {
        iVar3             = *(int *) (data_02153720 + 0x1c);
        *(Vec3 *) param_3 = *(Vec3 *) (iVar3 + 0x30);
        return;
    }
}
