/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020d8370 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020d8370.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern void func_02108158(u32 a);
extern u32 func_020619e4(void);
extern s16 func_02108110(void);
extern void func_02108124(u32 a);
extern u32 func_0210816c(void);
extern u32 func_0210817c(void);
extern void func_021080fc(u32 a);
extern void func_02118e54(u8 *p, u32 a, u32 b, u32 c);
extern void func_02118e48(u8 *p);
void func_0212180c(u8 *param_1) {
    s16 sVar1;
    u32 uVar2;
    u32 uVar3;
    u32 iVar4;
    u32 iVar5;
    u8 *r4;
    r4 = param_1 + 96;
    func_02108158(2);
    *(s16 *) (r4 + 4) = *(s16 *) (r4 + 4) - 1;
    if (*(s16 *) (r4 + 4) <= 0) {
        uVar2 = func_020619e4();
        sVar1 = func_02108110();
        func_02108124((u32) (u16) (sVar1 + 0x8000));
        if ((s32) uVar2 < 0x2aaa) {
            uVar3 = func_0210816c();
            func_021080fc(uVar3);
        } else if ((s32) uVar2 < 0x3fff) {
            iVar4 = func_0210816c();
            iVar5 = func_0210817c();
            func_021080fc((u32) ((s32) (iVar4 + iVar5) / 2));
        } else {
            uVar3 = func_0210817c();
            func_021080fc(uVar3);
        }
        func_02118e54(param_1, 2, (u32) -1, 0);
        func_02118e48(param_1);
        *(s16 *) (r4 + 4) = 0x4b0;
    }
}
