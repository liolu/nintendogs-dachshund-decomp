/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_020ee670 from projets/nintendogs-chihuahua-friends/src/donor/func_020ee670.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef struct {
    u32 w0;
    u8 pad1[8];
    s16 f0c;
    u16 f0e;
    u8 pad2[8];
    u16 f18;
    u16 f1a;
    u32 f1c;
} Obj;
extern Obj data_02154dd8;
extern void func_02072214(Obj *p, s32 a, s32 b);
u32 func_020ee668(s32 param_1) {
    s32 iVar4;
    s32 iVar3;
    Obj *piVar2;
    u16 uVar1;
    u16 uVar2;
    piVar2      = &data_02154dd8;
    iVar4       = 30;
    iVar3       = piVar2->w0;
    piVar2->f0e = (u16) param_1;
    if (iVar3 != 0) {
        if (piVar2->f1c != 0) {
            uVar2       = piVar2->f1a;
            uVar1       = piVar2->f18;
            piVar2->f18 = 0;
            piVar2->f1c = 0;
            iVar4       = uVar2 - uVar1;
        }
        iVar3 = piVar2->f0c * param_1;
        func_02072214(piVar2, iVar3 / 100, iVar4);
        return 1;
    }
    return 0;
}
