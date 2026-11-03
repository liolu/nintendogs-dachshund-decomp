/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020dabb4 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020dabb4.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
extern u32 data_0214a570;
extern u32 data_0214a56c;
extern u32 data_02153720;
extern u32 data_02156080;
extern void func_02112638(u8 *p, s32 a, s32 b, s32 c, s32 d, s32 e, s32 f);
extern s32 func_02111cb4(u32 a, s32 b);
extern void func_0210fe50(u8 *p, s32 a, u8 *b, u8 *c, s32 d, u32 e, u32 f, u32 g, u32 h, u32 i);
extern void func_01ff832c(s32 a, s32 *b, u8 *c, u8 *d);
extern s32 func_020f9de4(void);
extern void func_020ec298(u8 *p, s32 a);
extern void func_020ebc40(u8 *p);
extern void func_0212421c(void);
extern void func_021241e8(void);
extern void func_021241cc(void);
extern void func_021241c0(void);
void func_02124018(u8 *param_1) {
    s32 *piVar2;
    s32 iVar1;
    s32 arr[6];
    u8 *g;
    u8 *h;
    s32 nA;
    s32 w3;
    s32 w4;
    s32 w5;
    s32 v0;
    s32 v1;
    s32 v2;

    piVar2 = *(s32 **) (param_1 + 0x214);
    iVar1  = piVar2[0];
    func_02112638(param_1, *(s32 *) ((u8 *) iVar1 + 0x48), *(s32 *) ((u8 *) iVar1 + 0x4c), *(s32 *) ((u8 *) iVar1 + 0x50),
                  *(s32 *) ((u8 *) iVar1 + 0x54), *(s32 *) ((u8 *) iVar1 + 0x58), 4);
    iVar1 = func_02111cb4(*(u16 *) (param_1 + 160), *(s32 *) (param_1 + 0xf8));
    func_0210fe50(param_1, *(s32 *) (param_1 + 0xf8), param_1 + 0xfc, param_1 + 0x108, iVar1, (u32) func_0212421c, 0,
                  (u32) func_021241e8, (u32) func_021241cc, (u32) func_021241c0);
    nA     = -(s32) data_0214a570;
    v2     = *(s32 *) (param_1 + 0xdc);
    v1     = *(s32 *) (param_1 + 0xd8);
    v0     = *(s32 *) (param_1 + 0xd4);
    arr[0] = v0;
    arr[1] = v1;
    arr[2] = v2;
    w5     = *(s32 *) (param_1 + 0xe8);
    w4     = *(s32 *) (param_1 + 0xe4);
    w3     = *(s32 *) (param_1 + 0xe0);
    arr[3] = w3;
    arr[4] = w4;
    arr[5] = w5;
    func_01ff832c(nA, &arr[0], param_1 + 0xbc, param_1 + 0xbc);
    func_01ff832c(-(s32) data_0214a56c, &arr[3], param_1 + 0xbc, param_1 + 0xbc);
    g = (u8 *) data_02153720;
    if ((*(u16 *) (g + 0x84) & 1) != 0) {
        h = (u8 *) data_02156080;
        if (*(s32 *) (h + 0x24) == 0) {
            if (*(s16 *) (param_1 + 138) == 3) {
                if (func_020f9de4() != 0) {
                    return;
                }
            }
        }
    }
    if (piVar2[1] == 0) {
        iVar1                                       = *(s32 *) (param_1 + 0x7c);
        *(s32 *) (*(u8 **) (param_1 + 0x74) + 0x20) = 0;
        *(s32 *) ((u8 *) iVar1 + 0xc)               = 0;
        func_020ec298(param_1 + 400, 8);
        piVar2[1] = 1;
        func_020ebc40(param_1 + 400);
    }
}
