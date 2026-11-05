/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020d6740 from projets/nintendogs-shiba-friends/src/donor/func_020d6740.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
extern void func_020d682c(u8 *p);
extern void func_0211272c(u8 *p);
extern void func_02112640(u8 *p, u32 a, u32 b, u32 c, u32 d, u32 e, u32 f);
extern u32 func_02111cbc(u32 a, u32 b);
extern void func_0210fe58(u8 *p, u32 a, u32 *b, u32 *c, u32 d, u32 e, u32 f, u32 g, u32 h, u32 i);
extern void func_020d6a38(void);
extern void func_020d6a04(void);
extern void func_020d69e8(void);
extern void func_020d6988(void);
void func_020d6748(u8 *param_1) {
    u32 iVar1;
    u8 *P;

    switch (*(s16 *) (param_1 + 0x90)) {
        case 0:
            break;
        case 1:
            func_020d682c(param_1);
            return;
        case 2:
            func_0211272c(param_1);
            return;
        case 3:
            P = *(u8 **) (*(u8 **) (param_1 + 0x214));
            func_02112640(param_1, *(u32 *) (P + 0x48), *(u32 *) (P + 0x4c), *(u32 *) (P + 0x50), *(u32 *) (P + 0x54),
                          *(u32 *) (P + 0x58), 4);
            iVar1 = func_02111cbc(*(u16 *) (param_1 + 160), *(u32 *) (param_1 + 0xf8));
            func_0210fe58(param_1, *(u32 *) (param_1 + 0xf8), (u32 *) (param_1 + 0xfc), (u32 *) (param_1 + 0x108), iVar1,
                          (u32) func_020d6a38, 0, (u32) func_020d6a04, (u32) func_020d69e8, (u32) func_020d6988);
    }
}
