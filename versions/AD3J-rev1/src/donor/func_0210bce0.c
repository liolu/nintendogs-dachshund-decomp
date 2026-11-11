/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020c1d60 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020c1d60.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef signed long long s64;
extern s16 data_02156088;
extern u8 *data_02153720;
extern void func_02107c9c(u8 *p, s32 a);
extern void func_0210bb20(void);
extern void func_0210b790(void);
extern void func_0210bcc0(void);
extern u32 func_02003844(u8 *p, u32 v);
extern s32 func_01ffda04(s32 a);
extern s32 func_0206902c(s32 a);
void func_0210bce0(u8 *p, u8 *p2) {
    s32 iVar9;
    s32 iVar8;
    u8 *t;
    s32 iVar5;
    s32 v;
    u32 vv;
    u8 *piVar3;

    func_02107c9c(p, data_02156088);
    *(u32 *) (p + 0x1f4) = (u32) func_0210bb20;
    *(u32 *) (p + 0x1f8) = (u32) func_0210b790;
    *(u32 *) (p + 0x1f0) = (u32) func_0210bcc0;
    *(u32 *) (p + 0x214) = func_02003844(p2, 0x20);
    iVar8                = 0;
    t                    = (u8 *) *(u32 *) (p + 0x214);
    iVar9                = 0;
    do {
        *(u32 *) (t + iVar9 * 4 + 0x14) = 0;
        iVar5                           = func_01ffda04(iVar9);
        if (iVar5 != 0) {
            iVar8 = iVar8 + 1;
        }
        iVar9 = (s16) (iVar9 + 1);
    } while (iVar9 < 3);
    *(s32 *) (t + 4)    = iVar8 << 12;
    v                   = func_0206902c(iVar8 << 12);
    *(s32 *) (t + 0xc)  = ((s32) (((s64) (v) * (4096) + 0x800) >> 12));
    vv                  = *(u32 *) (t + 0xc);
    *(u32 *) (p + 0x24) = vv;
    *(u32 *) (p + 0x28) = vv;
    *(u32 *) (p + 0x2c) = vv;
    *(u32 *) (p + 0x28) = 4096;
    piVar3              = data_02153720;
    *(s32 *) (t + 8)    = (s32) * (s16 *) (piVar3 + 0x10c) << 12;
    *(s32 *) (t + 0x10) = ((s32) (((s64) (*(s32 *) (t + 0xc)) * (0xccd) + 0x800) >> 12));
}
