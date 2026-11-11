/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020d3670 from https://github.com/chasmlol/nintendogs-decomp src/arm9/func_020d3670.c (license: none), reused by
 * tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef signed long long s64;
typedef struct Ten {
    u32 w[10];
} Ten;
extern s32 data_0214a488;
extern s32 data_0214a48c;
extern s32 data_0214a490;
extern s32 func_02112904(s32 v);
extern s32 func_01ffda04(s32 v);
extern void func_02113410(u32 *a, s32 b);
extern void func_02027518(s32 a, u32 *b);
extern s32 func_02069430(u32 *a);
extern void func_021199f0(u8 *a, u8 *b, u32 *c, s32 d, s32 e, s32 f);
extern void func_021132f4(u32 *a, s32 b);
void func_0211caf4(u8 *param_1, u32 *param_2) {
    s64 lVar1;
    s32 iVar2;
    u32 aiStack_70[10];
    u32 aiStack_48[3];
    u32 aiStack_3c[11];
    s32 r6;

    iVar2                     = func_02112904(-1);
    *(s16 *) (param_1 + 0x5c) = (s16) iVar2;
    r6                        = func_01ffda04(*(s16 *) (param_1 + 0x5c));
    func_02113410(aiStack_70, *(s16 *) (param_1 + 0x5c));
    func_02027518(r6, aiStack_48);
    iVar2 = func_02069430(aiStack_48);
    lVar1 = (s64) iVar2 * data_0214a488 + 0x800;
    iVar2 = data_0214a48c + (s32) (lVar1 >> 12);
    if (iVar2 > data_0214a490) {
        iVar2 = data_0214a490;
    }
    func_021199f0(param_1 + 8, param_1 + 8, aiStack_70, iVar2, iVar2, 0x400);
    if (*(s32 *) (param_1 + 0x58) == 0) {
        *(Ten *) param_2 = *(Ten *) (param_1 + 8);
        return;
    }
    if (*(s32 *) (param_1 + 0x58) == 1) {
        func_021132f4(aiStack_3c, *(s16 *) (param_1 + 0x5c));
        func_021199f0(param_1 + 0x30, param_1 + 0x30, aiStack_3c, 0x1000, 0x1000, 0x20);
        *(Ten *) param_2 = *(Ten *) (param_1 + 0x30);
    }
}
