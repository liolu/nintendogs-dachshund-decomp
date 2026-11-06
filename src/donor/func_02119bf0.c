/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_02119bf0 from projets/nintendogs-chihuahua-friends/src/donor/func_02119bf0.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef signed long long s64;
typedef struct {
    u32 w[3];
} T3;
extern s16 data_02124ae0[];
extern void func_02116e70(void *a, void *b, void *c, void *d, void *e, void *f);
void func_02119bf0(u32 *param_1, u8 *param_2) {
    s32 iVar1;
    s32 t;
    s64 v;
    u32 uVar3;

    *(T3 *) (param_2 + 0x30) = *(T3 *) param_1;
    *(T3 *) (param_2 + 0x3c) = *(T3 *) (param_1 + 3);
    func_02116e70(param_2 + 0x60, param_2 + 0x54, param_2 + 0x48, param_2 + 0x30, param_2 + 0x3c, param_1 + 6);
    uVar3                     = param_1[9];
    v                         = (s64) (s32) uVar3 * (s64) 0xB60B60B60BLL;
    t                         = (s32) ((v + ((s64) 0x800 << 32)) >> 32);
    iVar1                     = (s32) ((u32) (t * 16) >> 16) >> 4;
    *(u16 *) (param_2 + 0x6c) = data_02124ae0[iVar1 * 2];
    *(u16 *) (param_2 + 0x6e) = data_02124ae0[iVar1 * 2 + 1];
}
