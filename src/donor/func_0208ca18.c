/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0208ca18 from projets/nintendogs-shiba-friends/src/donor/func_0208ca18.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef signed short s16;
typedef signed int s32;
extern u8 *data_02153700;
extern void func_020cac68(u8 *p, int v);
extern s32 func_020c88ec(int v);
extern void func_020cabfc(s32 a, int b);
extern void func_020c88a4(u8 *p, int v);
extern void func_020ca180(u8 *p, int a, int b);
extern void func_020ca128(u8 *p, int a, int b);
extern void func_020ca0cc(u8 *p, int a, int b);
extern void func_020ca070(u8 *p, int a, int b);
extern void func_020ca018(u8 *p, int a, int b);
extern void func_020c9fc0(u8 *p, int a, int b);
extern void func_020c9f64(u8 *p, int a, int b);
extern void func_020c9f08(u8 *p, int a, int b);
void func_0208ca18(s16 param_1, s16 param_2) {
    u8 *p;
    s32 uVar5;
    s32 iVar1;

    p = *(u8 **) (data_02153700 + 0x30);
    func_020cac68(p, param_1);
    *(s16 *) (p + 6) = -1;
    iVar1            = func_020c88ec(param_2);
    func_020cabfc(iVar1, param_1);
    func_020c88a4(p, param_2);
    uVar5 = 0;
    do {
        func_020ca180(p + 0x85c, param_1, uVar5);
        func_020ca128(p + 0x9d8, param_2, uVar5);
        func_020ca0cc(p + 0x9d8, param_1, uVar5);
        func_020ca070(p + 0x85c, param_2, uVar5);
        func_020ca018(p + 0x998, param_1, uVar5);
        func_020c9fc0(p + 0xb14, param_2, uVar5);
        func_020c9f64(p + 0xb14, param_1, uVar5);
        func_020c9f08(p + 0x998, param_2, uVar5);
        uVar5 = (s16) (uVar5 + 1);
    } while (uVar5 < 20);
}
