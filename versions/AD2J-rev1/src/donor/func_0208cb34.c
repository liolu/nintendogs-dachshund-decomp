/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0208cb34 from projets/nintendogs-shiba-friends/src/donor/func_0208cb34.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef volatile u16 vu16;
extern u8 *data_02153700;
extern u32 func_020ca9f0(void);
extern u32 func_020c88ec(u32 a);
extern void func_0206dfd4(u32 a, u8 *b, u32 c);
extern void func_020cabfc(u8 *a, u32 b);
extern void func_020cacf4(u8 *a);
extern void func_020c88a4(u8 *a, u32 b);
extern void func_020ca128(u8 *a, u32 b, u32 c);
extern void func_020ca0cc(u8 *a, u32 b, u32 c);
extern void func_0206dfbc(u32 a, u8 *b, u32 c);
extern void func_020ca070(u8 *a, u32 b, u32 c);
extern void func_020c9fc0(u8 *a, u32 b, u32 c);
extern void func_020c9f64(u8 *a, u32 b, u32 c);
extern void func_020c9f08(u8 *a, u32 b, u32 c);
void func_0208cb34(u32 p) {
    u32 sv;
    u32 iv1;
    u8 *puVar5;
    u32 iv2;
    vu16 z1;
    vu16 z2;
    u32 i;

    iv1    = func_020ca9f0();
    puVar5 = *(u8 **) (data_02153700 + 0x30);
    iv2    = func_020c88ec(p);
    func_0206dfd4(iv2, puVar5, 0x85c);
    sv = iv1;
    func_020cabfc(puVar5, sv);
    func_020cacf4(puVar5);
    func_020c88a4(puVar5, p);
    i = 0;
    do {
        func_020ca128(puVar5 + 0x85c, p, i);
        func_020ca0cc(puVar5 + 0x85c, sv, i);
        z1 = 0;
        func_0206dfbc(z1, puVar5 + 0x85c, 0x13c);
        func_020ca070(puVar5 + 0x85c, p, i);
        func_020c9fc0(puVar5 + 0x998, p, i);
        func_020c9f64(puVar5 + 0x998, sv, i);
        z2 = 0;
        func_0206dfbc(z2, puVar5 + 0x998, 64);
        func_020c9f08(puVar5 + 0x998, p, i);
        i = (s16) (i + 1);
    } while ((s32) i < 20);
}
