/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02121814 from projets/nintendogs-chihuahua-friends/src/donor/func_02121814.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern void func_02108160(u32 a);
extern u32 func_020619e4(void);
extern s16 func_02108118(void);
extern void func_0210812c(u32 a);
extern u32 func_02108174(void);
extern u32 func_02108184(void);
extern void func_02108104(u32 a);
extern void func_02118e5c(u8 *p, u32 a, u32 b, u32 c);
extern void func_02118e50(u8 *p);
void func_02121814(u8 *param_1) {
    s16 sVar1;
    u32 uVar2;
    u32 uVar3;
    u32 iVar4;
    u32 iVar5;
    u8 *r4;
    r4 = param_1 + 96;
    func_02108160(2);
    *(s16 *) (r4 + 4) = *(s16 *) (r4 + 4) - 1;
    if (*(s16 *) (r4 + 4) <= 0) {
        uVar2 = func_020619e4();
        sVar1 = func_02108118();
        func_0210812c((u32) (u16) (sVar1 + 0x8000));
        if ((s32) uVar2 < 0x2aaa) {
            uVar3 = func_02108174();
            func_02108104(uVar3);
        } else if ((s32) uVar2 < 0x3fff) {
            iVar4 = func_02108174();
            iVar5 = func_02108184();
            func_02108104((u32) ((s32) (iVar4 + iVar5) / 2));
        } else {
            uVar3 = func_02108184();
            func_02108104(uVar3);
        }
        func_02118e5c(param_1, 2, (u32) -1, 0);
        func_02118e50(param_1);
        *(s16 *) (r4 + 4) = 0x4b0;
    }
}
