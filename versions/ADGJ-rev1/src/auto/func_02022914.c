/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02022910 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_02022910.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef signed long long s64;
typedef volatile u32 vu32;
extern u32 data_02150330;
extern u32 data_02153720;
typedef struct {
    u32 w[3];
} T3;
extern void *func_0210634c(void);
extern s32 func_02069098(s32 a, s32 b);
extern void func_01ff832c(s32 a, u32 *b, u8 *c, u8 *d);
void func_02022914(u8 *param_1, s32 *param_2) {
    u32 arr[9];
    u32 t0, t1, t2, t3, t4, t5, t6, t7, t8;
    s32 scale;
    s32 uVar5;
    s32 uVar6;
    u8 *g;
    u8 *o;
    u8 *iVar2;
    u8 *iVar3;

    t0              = ((vu32 *) &data_02150330)[0x4c / 4];
    t1              = ((vu32 *) &data_02150330)[0x58 / 4];
    t2              = ((vu32 *) &data_02150330)[0x64 / 4];
    t3              = ((vu32 *) &data_02150330)[0x50 / 4];
    t4              = ((vu32 *) &data_02150330)[0x5c / 4];
    t5              = ((vu32 *) &data_02150330)[0x68 / 4];
    t6              = ((vu32 *) &data_02150330)[0x54 / 4];
    t7              = ((vu32 *) &data_02150330)[0x60 / 4];
    t8              = ((vu32 *) &data_02150330)[0x6c / 4];
    arr[0]          = t0;
    arr[1]          = t1;
    arr[2]          = t2;
    arr[3]          = t3;
    arr[4]          = t4;
    arr[5]          = t5;
    arr[6]          = t6;
    arr[7]          = t7;
    arr[8]          = t8;
    iVar2           = (u8 *) func_0210634c();
    iVar3           = (u8 *) func_0210634c();
    scale           = func_02069098(*(s16 *) (iVar2 + 0x6c), *(s16 *) (iVar3 + 0x6e));
    uVar5           = ((s32) (((s64) (-param_2[2]) * (scale) + 0x800) >> 12));
    uVar6           = ((s32) (((s64) (uVar5) * (43) + 0x800) >> 12));
    g               = (u8 *) data_02153720;
    o               = *(u8 **) (g + 0x1c);
    *(T3 *) param_1 = *(T3 *) (o + 0x30);
    func_01ff832c((s32) (uVar6 * param_2[0]) >> 12, arr, param_1, param_1);
    func_01ff832c((s32) (uVar6 * param_2[1]) >> 12, &arr[3], param_1, param_1);
    func_01ff832c(param_2[2], &arr[6], param_1, param_1);
}
