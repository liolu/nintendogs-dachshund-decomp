/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020e8a34 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020e8a34.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
extern void func_020d6824(u8 *p);
extern void func_02112724(u8 *p);
extern void func_02112638(u8 *p, u32 a, u32 b, u32 c, u32 d, u32 e, u32 f);
extern u32 func_02111cb4(u32 a, u32 b);
extern void func_0210fe50(u8 *p, u32 a, u32 *b, u32 *c, u32 d, u32 e, u32 f, u32 g, u32 h, u32 i);
extern void func_020d6a30(void);
extern void func_020d69fc(void);
extern void func_020d69e0(void);
extern void func_020d6980(void);
void func_020d6740(u8 *param_1) {
    u32 iVar1;
    u8 *P;

    switch (*(s16 *) (param_1 + 0x90)) {
        case 0:
            break;
        case 1:
            func_020d6824(param_1);
            return;
        case 2:
            func_02112724(param_1);
            return;
        case 3:
            P = *(u8 **) (*(u8 **) (param_1 + 0x214));
            func_02112638(param_1, *(u32 *) (P + 0x48), *(u32 *) (P + 0x4c), *(u32 *) (P + 0x50), *(u32 *) (P + 0x54),
                          *(u32 *) (P + 0x58), 4);
            iVar1 = func_02111cb4(*(u16 *) (param_1 + 160), *(u32 *) (param_1 + 0xf8));
            func_0210fe50(param_1, *(u32 *) (param_1 + 0xf8), (u32 *) (param_1 + 0xfc), (u32 *) (param_1 + 0x108), iVar1,
                          (u32) func_020d6a30, 0, (u32) func_020d69fc, (u32) func_020d69e0, (u32) func_020d6980);
    }
}
