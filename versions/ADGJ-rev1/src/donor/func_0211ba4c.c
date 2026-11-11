/* compiler: 1.2/sp2p3 -O4,p -lang c99 -inline on,noauto */
/* func_0211ba4c from projets/nintendogs-chihuahua-friends/src/donor/func_0211ba4c.c (same code in another game of this
 * workspace), reused by tools/donor_match.py */
typedef unsigned char u8;
typedef unsigned short u16;
typedef unsigned int u32;
typedef signed short s16;
typedef signed int s32;
typedef volatile u16 vu16;
extern s32 func_02044644(u32 a);
extern void func_02108160(u32 a);
extern s32 func_02106898(void);
extern s32 func_02106918(void);
extern void func_0211b584(u8 *p);
extern void func_02118e5c(u8 *p, u32 a, s32 b, u32 c);
extern void func_0211b334(u8 *p);
extern void func_02118e2c(u8 *p, u32 a);
void func_0211ba4c(u8 *param_1) {
    s16 *psVar3;
    s32 iVar2;

    psVar3 = (s16 *) (param_1 + 0x60);
    func_02044644(0);
    func_02108160(1);
    iVar2 = func_02106898();
    if (iVar2 != 0) {
        *psVar3                   = 1;
        *(s32 *) (param_1 + 0x6c) = 0;
    } else if (*(s32 *) (param_1 + 0x6c) == 1) {
        *psVar3 = 0;
    } else {
        iVar2 = func_02106918();
        if (iVar2 != 0) {
            *psVar3 = 1;
        } else {
            *psVar3 = 2;
        }
    }
    if (*psVar3 != psVar3[1]) {
        psVar3[2] = psVar3[1];
        psVar3[1] = *psVar3;
        if (psVar3[1] == 0) {
            goto after;
        }
        if (psVar3[1] == 1) {
            goto case1;
        }
        if (psVar3[1] != 2) {
            goto after;
        }
        goto case2;
    }
    goto after;
case1:
    func_0211b584(param_1);
    goto after;
case2:
    func_02118e5c(param_1, 2, -1, 0);
after:
    switch (psVar3[1]) {
        case 0:
            break;
        case 1:
            func_0211b334(param_1);
            break;
        case 2:
            break;
    }
after2:
    if (((s32) (*(vu16 *) 0x04000304 & 0x8000)) >> 15 != 1) {
        return;
    }
    func_02118e2c(param_1, 1);
}
