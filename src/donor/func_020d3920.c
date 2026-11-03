/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020e5c04 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020e5c04.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef struct {
    u32 w[3];
} T12;
extern u32 data_02154c9c;
extern u32 data_02154c90;
extern u32 data_02154c8c;
extern void func_020848ec(u32 a, u32 b);
extern void func_02084980(u32 a, u32 b, u32 c);
extern void func_020d3a78(void);
extern u8 *func_02106344(void);
extern void func_020c45e8(u8 *a, u8 *b, u32 *c);
extern void func_020ec1d8(u8 *a, u32 b, u32 *c);
extern s32 func_0210fdf0(u8 *p);
s32 func_020d3920(u8 *param_1) {
    u8 *iVar7;
    s32 iVar4;
    u32 auStack_18[3];
    u32 V;
    s32 q12;
    iVar7 = *(u8 **) (param_1 + 0x214);
    V     = *(u32 *) &data_02154c9c;
    iVar4 = V != 0 ? *(s32 *) V : 0;
    func_020848ec(iVar4, *(u32 *) (iVar7 + 0x1c));
    *(u32 *) (iVar7 + 0x1c) = 0;
    *(T12 *) &data_02154c90 = *(T12 *) (param_1 + 188);
    q12                     = *(s32 *) (iVar7 + 0xc);
    *(s16 *) &data_02154c8c = (s16) (q12 >> 5);
    V                       = *(u32 *) &data_02154c9c;
    iVar4                   = V != 0 ? *(s32 *) V : 0;
    func_02084980(iVar4, 20, (u32) func_020d3a78);
    *(u32 *) (iVar7 + 4) = 0;
    iVar4                = (s32) func_02106344();
    func_020c45e8((u8 *) iVar4, param_1 + 188, auStack_18);
    func_020ec1d8(param_1 + 400, 7, auStack_18);
    return func_0210fdf0(param_1);
}
