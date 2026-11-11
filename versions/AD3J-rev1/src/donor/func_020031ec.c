/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020031ec from projets/nintendogs-chihuahua-friends/src/donor/func_020031ec.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u16 data_021245b0[];
extern u8 data_0214affc[];
extern u8 data_021338ac[];
extern u8 data_021338b8[];
extern u8 data_021338c4[];
extern u8 data_021338d0[];
extern void func_020062ec(void);
extern void func_0207f1c8(s32 a, s32 b);
extern s16 func_0206a128(void);
extern void func_0206af24(s32 a);
extern void func_02069bf8(void);
extern void func_02069b3c(u32 a, s32 b);
extern void func_02069b84(s32 a, s32 b, s32 c);
extern void func_02005fb4(void);
extern void func_02005f10(void);
extern void func_02005e04();
extern void func_020807c8(void);
extern void func_02005f70(void);
void func_020031ec(u8 *param_1, s32 param_2, u32 param_3, u32 param_4) {
    u32 r9 = 0;
    s32 r8 = 0;
    u16 uVar1;
    u16 w;
    s16 sVar6;
    u32 r7;
    u32 r6;

    do {
        func_020062ec();
        w = *(u16 *) data_0214affc;
        if ((u16) (w & 0xff3) != 0) {
            uVar1 = data_021245b0[r8];
            if (uVar1 == (u16) (w & uVar1)) {
                r8 = (s16) (r8 + 1);
                if (r8 >= 10) {
                    r9 = 1;
                }
            } else {
                r8 = 0;
            }
        }
        func_0207f1c8(1, 1);
    } while (r9 == 0);
    sVar6 = func_0206a128();
    if (sVar6 == 0) {
        func_0206af24(4);
    }
    func_02069bf8();
    func_02069b3c(0x0400006c, 0);
    func_02069b84(1, 0, 1);
    *(u32 *) 0x04000000 = (*(u32 *) 0x04000000 & 0xffffe0ff) | 0x300;
    *(u16 *) 0x0400000a = (u16) ((*(u16 *) 0x0400000a & 0x43) | 0x400);
    *(u16 *) 0x0400000a = (u16) (*(u16 *) 0x0400000a & ~3);
    *(u16 *) 0x0400000a = (u16) (*(u16 *) 0x0400000a & ~64);
    func_02005fb4();
    func_02005f10();
    r7 = 0;
    do {
        r6 = ((u32 *) param_1 + r7)[1];
        func_02005e04(0, r7 & 0xff, data_021338ac, r7, r6);
        r7 = r7 + 1;
    } while ((s32) r7 < 13);
    func_02005e04(0, 0x12, data_021338b8, *(u32 *) (param_1 + 0x38));
    func_02005e04(0, 0x13, data_021338c4, *(u32 *) (param_1 + 0x3c));
    func_02005e04(0, 0x14, data_021338d0, *(u32 *) (param_1 + 0x40));
    func_020807c8();
    do {
        func_02005f70();
    } while (1);
}
