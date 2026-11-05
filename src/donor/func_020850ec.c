/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020850ec from projets/nintendogs-shiba-friends/src/donor/func_020850ec.c (same code in another game of this workspace),
 * reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed int s32;
extern void func_0206e124(u32 *p, u32 v, u32 n);
extern void func_020892c0(u32 *a, u32 *b);
typedef u32 *(*AllocFn)(u32 n);
typedef struct {
    u32 f0 : 6;
    u32 f1 : 6;
    u32 f2 : 6;
    u32 f3 : 6;
    u32 top : 8;
} Bits;
u32 *func_020850ec(u8 *param_1, s32 param_2, s32 param_3, u32 param_4, u16 param_5, u16 param_6) {
    u32 *puVar1;
    s32 iVar3;
    u32 *puVar2;
    AllocFn alloc = (AllocFn) param_1;
    puVar1        = alloc(60);
    func_0206e124(puVar1, 0, 60);
    *(u16 *) (puVar1 + 10)          = (u16) param_2;
    *(u16 *) ((u8 *) puVar1 + 0x2a) = (u16) param_3;
    {
        Bits *bf = (Bits *) &puVar1[11];
        bf->f0   = param_5;
        bf->f1   = param_6;
        bf->f2   = bf->f0;
        bf->f3   = param_4;
    }
    *((u8 *) puVar1 + 0x2f) = 0;
    *puVar1                 = (u32) param_1;
    puVar1[2]               = 0;
    puVar1[4]               = 0;
    puVar1[6]               = 0;
    puVar1[1]               = 0;
    puVar1[3]               = 0;
    puVar1[5]               = 0;
    puVar1[12]              = 0;
    puVar2                  = ((AllocFn) param_1)(param_2 * 0x78);
    func_0206e124(puVar2, 0, param_2 * 0x78);
    iVar3 = 0;
    if (param_2 > 0) {
        do {
            func_020892c0(puVar1 + 3, puVar2);
            iVar3  = iVar3 + 1;
            puVar2 = puVar2 + 0x1e;
        } while (iVar3 < param_2);
    }
    puVar2 = ((AllocFn) param_1)(param_3 * 0x44);
    func_0206e124(puVar2, 0, param_3 * 0x44);
    iVar3 = 0;
    if (param_3 > 0) {
        do {
            func_020892c0(puVar1 + 5, puVar2);
            iVar3  = iVar3 + 1;
            puVar2 = puVar2 + 0x11;
        } while (iVar3 < param_3);
    }
    puVar1[7]                       = 0;
    puVar1[8]                       = 0;
    *(u16 *) ((u8 *) puVar1 + 0x26) = 0;
    *(u16 *) (puVar1 + 9)           = *(u16 *) ((u8 *) puVar1 + 0x26);
    return puVar1;
}
