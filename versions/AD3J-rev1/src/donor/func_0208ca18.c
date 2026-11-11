/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020a4938 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020a4938.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef signed short s16;
typedef signed int s32;
extern u8 *data_02153700;
extern void func_020cac64(u8 *p, int v);
extern s32 func_020c88e8(int v);
extern void func_020cabf8(s32 a, int b);
extern void func_020c88a0(u8 *p, int v);
extern void func_020ca17c(u8 *p, int a, int b);
extern void func_020ca124(u8 *p, int a, int b);
extern void func_020ca0c8(u8 *p, int a, int b);
extern void func_020ca06c(u8 *p, int a, int b);
extern void func_020ca014(u8 *p, int a, int b);
extern void func_020c9fbc(u8 *p, int a, int b);
extern void func_020c9f60(u8 *p, int a, int b);
extern void func_020c9f04(u8 *p, int a, int b);
void func_0208ca18(s16 param_1, s16 param_2) {
    u8 *p;
    s32 uVar5;
    s32 iVar1;

    p = *(u8 **) (data_02153700 + 0x30);
    func_020cac64(p, param_1);
    *(s16 *) (p + 6) = -1;
    iVar1            = func_020c88e8(param_2);
    func_020cabf8(iVar1, param_1);
    func_020c88a0(p, param_2);
    uVar5 = 0;
    do {
        func_020ca17c(p + 0x85c, param_1, uVar5);
        func_020ca124(p + 0x9d8, param_2, uVar5);
        func_020ca0c8(p + 0x9d8, param_1, uVar5);
        func_020ca06c(p + 0x85c, param_2, uVar5);
        func_020ca014(p + 0x998, param_1, uVar5);
        func_020c9fbc(p + 0xb14, param_2, uVar5);
        func_020c9f60(p + 0xb14, param_1, uVar5);
        func_020c9f04(p + 0x998, param_2, uVar5);
        uVar5 = (s16) (uVar5 + 1);
    } while (uVar5 < 20);
}
