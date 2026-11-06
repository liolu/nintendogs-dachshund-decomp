/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020d8130 from projets/nintendogs-chihuahua-friends/src/donor/func_020d8130.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
extern void func_020d8214(u8 *p);
extern void func_02112724(u8 *p);
extern void func_02112638(u8 *p, u32 a, u32 b, u32 c, u32 d, u32 e, u32 f);
extern u32 func_02111cb4(u32 a, u32 b);
extern void func_0210fe50(u8 *p, u32 a, u32 b, u32 c, u32 d, u32 e, u32 f, u32 g, u32 h, u32 i);
extern void func_020d8410(void);
extern void func_020d83a8(void);
extern void func_020d8364(void);
extern void func_020d8360(void);
void func_020d8128(u8 *param_1) {
    u32 iVar1;

    switch (*(s16 *) (param_1 + 0x90)) {
        case 0:
            break;
        case 1:
            func_020d8214(param_1);
            return;
        case 2:
            func_02112724(param_1);
            return;
        case 3:
            func_02112638(param_1, 0x40, 0x40, 0x60, 0x1ec, 0x802, 4);
            iVar1 = func_02111cb4(*(u16 *) (param_1 + 160), *(u32 *) (param_1 + 0xf8));
            func_0210fe50(param_1, *(u32 *) (param_1 + 0xf8), 0, 0, iVar1, (u32) func_020d8410, (u32) func_020d83a8, 0,
                          (u32) func_020d8364, (u32) func_020d8360);
            break;
        case 4:
            break;
        case 5:
            break;
        case 6:
            break;
        case 7:
            break;
    }
}
