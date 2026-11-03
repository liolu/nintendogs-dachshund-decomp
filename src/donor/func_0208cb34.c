/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020a4a54 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020a4a54.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef volatile u16 vu16;
extern u8 *data_02153700;
extern u32 func_020ca9ec(void);
extern u32 func_020c88e8(u32 a);
extern void func_0206dfd4(u32 a, u8 *b, u32 c);
extern void func_020cabf8(u8 *a, u32 b);
extern void func_020cacf0(u8 *a);
extern void func_020c88a0(u8 *a, u32 b);
extern void func_020ca124(u8 *a, u32 b, u32 c);
extern void func_020ca0c8(u8 *a, u32 b, u32 c);
extern void func_0206dfbc(u32 a, u8 *b, u32 c);
extern void func_020ca06c(u8 *a, u32 b, u32 c);
extern void func_020c9fbc(u8 *a, u32 b, u32 c);
extern void func_020c9f60(u8 *a, u32 b, u32 c);
extern void func_020c9f04(u8 *a, u32 b, u32 c);
void func_0208cb34(u32 p) {
    u32 sv;
    u32 iv1;
    u8 *puVar5;
    u32 iv2;
    vu16 z1;
    vu16 z2;
    u32 i;

    iv1    = func_020ca9ec();
    puVar5 = *(u8 **) (data_02153700 + 0x30);
    iv2    = func_020c88e8(p);
    func_0206dfd4(iv2, puVar5, 0x85c);
    sv = iv1;
    func_020cabf8(puVar5, sv);
    func_020cacf0(puVar5);
    func_020c88a0(puVar5, p);
    i = 0;
    do {
        func_020ca124(puVar5 + 0x85c, p, i);
        func_020ca0c8(puVar5 + 0x85c, sv, i);
        z1 = 0;
        func_0206dfbc(z1, puVar5 + 0x85c, 0x13c);
        func_020ca06c(puVar5 + 0x85c, p, i);
        func_020c9fbc(puVar5 + 0x998, p, i);
        func_020c9f60(puVar5 + 0x998, sv, i);
        z2 = 0;
        func_0206dfbc(z2, puVar5 + 0x998, 64);
        func_020c9f04(puVar5 + 0x998, p, i);
        i = (s16) (i + 1);
    } while ((s32) i < 20);
}
