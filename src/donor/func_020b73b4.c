/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0211100c from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_0211100c.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern void func_020b7a84(void);
extern s32 func_01ffda04(s32 a);
extern u8 *func_020276d0(s32 a);
extern u8 *func_02044670(u8 *a);
extern u32 func_020b8bc8(u32 a, u32 b);
extern void func_020b5508(u32 a, u32 b, u32 c, u32 d, u32 e, u32 f, u32 g, u32 h);
extern void func_020a43f8(void);
void func_020b73b4(s32 *param_1) {
    s32 iVar4;
    s32 iVar2;
    u32 uVar1;
    u32 uVar3;

    if (*param_1 == 1) {
        func_020b7a84();
    } else if (*param_1 == 2) {
        iVar4 = 0;
        do {
            iVar2 = func_01ffda04((s16) iVar4);
            if (iVar2 != 0) {
                u8 *p;
                p     = func_020276d0(iVar2);
                p     = func_02044670(p);
                uVar1 = (u16) (iVar4 + 3);
                uVar3 = func_020b8bc8(2, uVar1);
                func_020b5508(2, uVar1, uVar3, *(u32 *) (p + 0x88), *(u32 *) (p + 0x8c), *(u32 *) (p + 0x90), 1, 1);
            }
            iVar4 = iVar4 + 1;
        } while (iVar4 < 3);
    }
    *param_1 = *param_1 + 1;
    if (*param_1 > 20) {
        func_020a43f8();
    }
}
